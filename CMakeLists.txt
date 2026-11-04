# Windows port CMake build for MSVC and clang-cl.
# Unix still uses autotools; this uses the hand-maintained
# ports/winnt/include/config.h and matches ports/winnt/vs2026.

cmake_minimum_required(VERSION 3.25)

if(POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()
if(POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
endif()

if(NOT WIN32)
    message(FATAL_ERROR
        "This CMake build supports the Windows MSVC/clang-cl port only. "
        "Use autotools on other platforms.")
endif()

file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/packageinfo.sh" _ntp_pkg_lines)
foreach(_line IN LISTS _ntp_pkg_lines)
    if(_line MATCHES "^proto=(.*)$")
        set(NTP_PROTO "${CMAKE_MATCH_1}")
    elseif(_line MATCHES "^minor=(.*)$")
        set(NTP_MINOR "${CMAKE_MATCH_1}")
    elseif(_line MATCHES "^point=(.*)$")
        set(NTP_POINT "${CMAKE_MATCH_1}")
    endif()
endforeach()
if(NTP_POINT STREQUAL "NEW" OR NTP_POINT STREQUAL "")
    set(NTP_PROJECT_VERSION "${NTP_PROTO}.${NTP_MINOR}")
else()
    set(NTP_PROJECT_VERSION "${NTP_PROTO}.${NTP_MINOR}.${NTP_POINT}")
endif()

project(ntp VERSION ${NTP_PROJECT_VERSION} LANGUAGES C)
enable_language(RC)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(NtpGenerateVersion)
include(NtpSources)

option(LINK_STATIC_RUNTIME "Link the static MSVC CRT (MT/MTd)" ON)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>")

if(LINK_STATIC_RUNTIME)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else()
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

if(NOT DEFINED OPENSSL64_INC AND DEFINED ENV{OPENSSL64_INC})
    set(OPENSSL64_INC "$ENV{OPENSSL64_INC}")
endif()
if(NOT DEFINED OPENSSL64_LIB AND DEFINED ENV{OPENSSL64_LIB})
    set(OPENSSL64_LIB "$ENV{OPENSSL64_LIB}")
endif()
if(NOT OPENSSL64_INC)
    set(OPENSSL64_INC "C:/OpenSSL/Win64/include")
endif()
if(NOT OPENSSL64_LIB)
    set(OPENSSL64_LIB "C:/OpenSSL/Win64/lib")
endif()
file(TO_CMAKE_PATH "${OPENSSL64_INC}" OPENSSL64_INC)
file(TO_CMAKE_PATH "${OPENSSL64_LIB}" OPENSSL64_LIB)

if(NOT EXISTS "${OPENSSL64_INC}/openssl/crypto.h")
    message(FATAL_ERROR
        "OpenSSL headers not found in ${OPENSSL64_INC}. "
        "Set OPENSSL64_INC and OPENSSL64_LIB (e.g. C:/OpenSSL/Win64/include and .../lib).")
endif()

set(NTP_OPENSSL_CRYPTO_DEBUG "${OPENSSL64_LIB}/VC/x64/MTd/libcrypto_static.lib")
set(NTP_OPENSSL_CRYPTO_RELEASE "${OPENSSL64_LIB}/VC/x64/MT/libcrypto_static.lib")
if(NOT EXISTS "${NTP_OPENSSL_CRYPTO_DEBUG}" AND NOT EXISTS "${NTP_OPENSSL_CRYPTO_RELEASE}")
    message(FATAL_ERROR
        "libcrypto_static.lib not found under ${OPENSSL64_LIB}/VC/x64/{MTd,MT}. "
        "Set OPENSSL64_LIB to the OpenSSL lib root.")
endif()

if(DEFINED ENV{WindowsSdkVerBinPath})
    list(APPEND CMAKE_PROGRAM_PATH
        "$ENV{WindowsSdkVerBinPath}x64"
        "$ENV{WindowsSdkVerBinPath}"
    )
endif()
if(CMAKE_RC_COMPILER)
    get_filename_component(_ntp_rc_dir "${CMAKE_RC_COMPILER}" DIRECTORY)
    list(APPEND CMAKE_PROGRAM_PATH "${_ntp_rc_dir}")
endif()
find_program(NTP_MC_EXECUTABLE NAMES mc.exe mc REQUIRED)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_compile_options(
    /W3
    /wd4996
    /wd4267
    /wd4244
    /GF
    /Gy
    $<$<COMPILE_LANGUAGE:C>:/std:clatest>
)
if(CMAKE_C_COMPILER_ID STREQUAL "Clang")
    add_compile_options(
        -Wno-format
        -Wno-unused-function
        -Wno-deprecated-declarations
    )
endif()

add_library(ntp_win32 INTERFACE)
# VS lists $(VC_IncludePath) before ports/winnt/include so the CRT
# stdint.h wins over the MSVC6-VS2012 shim in this tree.
set(_ntp_crt_includes)
if(DEFINED ENV{INCLUDE})
    file(TO_CMAKE_PATH "$ENV{INCLUDE}" _ntp_crt_includes)
endif()
target_include_directories(ntp_win32 INTERFACE
    ${_ntp_crt_includes}
    "${CMAKE_CURRENT_SOURCE_DIR}/ports/winnt/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/libntp/lib/isc/win32/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/libntp/lib/isc/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/sntp/libopts"
    "${OPENSSL64_INC}"
)
target_compile_definitions(ntp_win32 INTERFACE
    _CONSOLE
    _WINDOWS
    WIN32
    SYS_WINNT
    HAVE_CONFIG_H
    HAVE_ARC4RANDOM_BUF
    _CRT_SECURE_NO_WARNINGS
    OPENSSL
)
target_link_libraries(ntp_win32 INTERFACE
    ws2_32
    crypt32
    "$<$<CONFIG:Debug>:${NTP_OPENSSL_CRYPTO_DEBUG}>"
    "$<$<NOT:$<CONFIG:Debug>>:${NTP_OPENSSL_CRYPTO_RELEASE}>"
)

add_library(libntp STATIC ${NTP_LIBNTP_SOURCES})
target_link_libraries(libntp PUBLIC ntp_win32)
set_target_properties(libntp PROPERTIES FOLDER libs)

add_executable(keyword-gen ntpd/keyword-gen.c)
target_link_libraries(keyword-gen PRIVATE libntp)
target_include_directories(keyword-gen PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ntpd")
set_target_properties(keyword-gen PROPERTIES FOLDER tools)

set(NTP_MC_DIR "${CMAKE_CURRENT_BINARY_DIR}/messages")
add_custom_command(
    OUTPUT
        "${NTP_MC_DIR}/messages.rc"
        "${NTP_MC_DIR}/messages.h"
        "${NTP_MC_DIR}/MSG00001.bin"
    COMMAND "${CMAKE_COMMAND}" -E make_directory "${NTP_MC_DIR}"
    COMMAND "${NTP_MC_EXECUTABLE}"
        -h "${NTP_MC_DIR}"
        -r "${NTP_MC_DIR}"
        -e h
        "${CMAKE_CURRENT_SOURCE_DIR}/ports/winnt/libntp/messages.mc"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/ports/winnt/libntp/messages.mc"
    COMMENT "Compiling ntp event-log messages"
    VERBATIM
)

add_executable(ntpd ${NTP_NTPD_SOURCES} "${NTP_MC_DIR}/messages.rc")
target_link_libraries(ntpd PRIVATE libntp winmm)
target_include_directories(ntpd PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ntpd")
set_target_properties(ntpd PROPERTIES
    ENABLE_EXPORTS TRUE
    FOLDER apps
)
ntp_add_version_source(ntpd ntpd)
set_source_files_properties(ntpd/refclock_arc.c PROPERTIES COMPILE_OPTIONS /wd4307)
set_directory_properties(PROPERTIES VS_STARTUP_PROJECT ntpd)

add_executable(ntpq
    ntpq/ntpq-opts.c
    ntpq/ntpq-subs.c
    ntpq/ntpq.c
)
target_link_libraries(ntpq PRIVATE libntp)
target_include_directories(ntpq PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ntpq")
set_target_properties(ntpq PROPERTIES FOLDER apps)
ntp_add_version_source(ntpq ntpq)

add_executable(ntpdc
    ntpdc/ntpdc-opts.c
    ntpdc/ntpdc.c
    ntpdc/ntpdc_ops.c
)
target_link_libraries(ntpdc PRIVATE libntp)
target_include_directories(ntpdc PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ntpdc")
set_target_properties(ntpdc PROPERTIES FOLDER apps)
ntp_add_version_source(ntpdc ntpdc)

add_executable(ntpdate ntpdate/ntpdate.c)
target_link_libraries(ntpdate PRIVATE libntp)
target_include_directories(ntpdate PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ntpdate")
set_target_properties(ntpdate PROPERTIES FOLDER apps)
ntp_add_version_source(ntpdate ntpdate)

add_executable(ntp-keygen
    util/ntp-keygen-opts.c
    util/ntp-keygen.c
)
target_link_libraries(ntp-keygen PRIVATE libntp)
target_include_directories(ntp-keygen PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/util"
    "${CMAKE_CURRENT_SOURCE_DIR}/ntp-keygen"
)
set_target_properties(ntp-keygen PROPERTIES FOLDER apps)
ntp_add_version_source(ntp-keygen ntp-keygen)

add_executable(instsrv ports/winnt/instsrv/instsrv.c)
target_link_libraries(instsrv PRIVATE ntp_win32)
target_include_directories(instsrv PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/ports/winnt/instsrv")
set_target_properties(instsrv PROPERTIES FOLDER tools)

add_library(loopback-ppsapi-provider SHARED
    ports/winnt/ppsapi/loopback/src/loopback-ppsapi.c
)
target_link_libraries(loopback-ppsapi-provider PRIVATE ntpd)
target_include_directories(loopback-ppsapi-provider PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/ntpd"
    "${CMAKE_CURRENT_SOURCE_DIR}/ports/winnt/ppsapi/loopback/src"
)
set_target_properties(loopback-ppsapi-provider PROPERTIES
    PREFIX ""
    FOLDER apps
)

install(TARGETS
    ntpd ntpq ntpdc ntpdate ntp-keygen instsrv keyword-gen
    loopback-ppsapi-provider
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION bin
    ARCHIVE DESTINATION lib
)
