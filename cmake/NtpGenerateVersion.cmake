# Generates <program> version.c matching ports/winnt/scripts/mkver.bat.
#
# Included from CMakeLists.txt: defines ntp_add_version_source().
# Invoked with cmake -P: writes NTP_OUTPUT using NTP_PROGRAM, NTP_PACKAGEINFO,
# and NTP_SOURCE_DIR.

if(NOT CMAKE_SCRIPT_MODE_FILE)
    function(ntp_add_version_source target_name program_name)
        set(_out "${CMAKE_CURRENT_BINARY_DIR}/${target_name}_version.c")
        set(_deps
            "${CMAKE_SOURCE_DIR}/packageinfo.sh"
            "${CMAKE_SOURCE_DIR}/cmake/NtpGenerateVersion.cmake"
        )
        if(EXISTS "${CMAKE_SOURCE_DIR}/.git/HEAD")
            list(APPEND _deps "${CMAKE_SOURCE_DIR}/.git/HEAD")
        endif()
        if(EXISTS "${CMAKE_SOURCE_DIR}/sntp/scm-rev")
            list(APPEND _deps "${CMAKE_SOURCE_DIR}/sntp/scm-rev")
        endif()

        add_custom_command(
            OUTPUT "${_out}"
            COMMAND "${CMAKE_COMMAND}"
                "-DNTP_PROGRAM=${program_name}"
                "-DNTP_PACKAGEINFO=${CMAKE_SOURCE_DIR}/packageinfo.sh"
                "-DNTP_SOURCE_DIR=${CMAKE_SOURCE_DIR}"
                "-DNTP_OUTPUT=${_out}"
                -P "${CMAKE_SOURCE_DIR}/cmake/NtpGenerateVersion.cmake"
            DEPENDS ${_deps}
            COMMENT "Generating ${program_name} version.c"
            VERBATIM
        )
        target_sources(${target_name} PRIVATE "${_out}")
    endfunction()
    return()
endif()

if(NOT NTP_PROGRAM OR NOT NTP_PACKAGEINFO OR NOT NTP_OUTPUT)
    message(FATAL_ERROR "NtpGenerateVersion.cmake requires NTP_PROGRAM, NTP_PACKAGEINFO, and NTP_OUTPUT")
endif()

file(READ "${NTP_PACKAGEINFO}" _pkg)
string(PREPEND _pkg "\n")

function(ntp_pkg_value name outvar)
    if(_pkg MATCHES "\n${name}=([^\n]*)")
        set(${outvar} "${CMAKE_MATCH_1}" PARENT_SCOPE)
    else()
        set(${outvar} "" PARENT_SCOPE)
    endif()
endfunction()

ntp_pkg_value(proto NTP_PROTO)
ntp_pkg_value(major NTP_MAJOR)
ntp_pkg_value(minor NTP_MINOR)
ntp_pkg_value(point NTP_POINT)
ntp_pkg_value(special NTP_SPECIAL)
ntp_pkg_value(prerelease NTP_PRERELEASE)
ntp_pkg_value(betapoint NTP_BETAPOINT)
ntp_pkg_value(rcpoint NTP_RCPOINT)
ntp_pkg_value(repotype NTP_REPOTYPE)

if(NTP_POINT STREQUAL "NEW")
    set(NTP_POINT "")
endif()

set(_special "")
if(NTP_SPECIAL)
    set(_special "-${NTP_SPECIAL}")
endif()

set(_pr_suf "")
set(_pr_point "")
if(NTP_PRERELEASE STREQUAL "beta")
    set(_pr_suf "-beta")
    set(_pr_point "${NTP_BETAPOINT}")
elseif(NTP_PRERELEASE STREQUAL "rc")
    set(_pr_suf "-RC")
    set(_pr_point "${NTP_RCPOINT}")
endif()

string(TOLOWER "${NTP_REPOTYPE}" _repotype)
if(NOT _repotype STREQUAL "stable")
    set(_pr_point "")
    if(NTP_PRERELEASE STREQUAL "rc")
        set(_pr_point "${NTP_RCPOINT}")
    endif()
endif()

# 4.2.8 and earlier: 4.2.8p18. After that: 4.3.109
if(NTP_PROTO STREQUAL "4" AND NTP_MAJOR MATCHES "^[012]$")
    set(_point_suf "")
    if(NTP_POINT)
        set(_point_suf "p${NTP_POINT}")
    endif()
    set(_ver "${NTP_PROTO}.${NTP_MAJOR}.${NTP_MINOR}${_point_suf}${_special}${_pr_suf}${_pr_point}")
else()
    set(_ver "${NTP_PROTO}.${NTP_MINOR}.${NTP_POINT}${_special}${_pr_suf}${_pr_point}")
endif()

set(_hash "")
if(NTP_SOURCE_DIR)
    execute_process(
        COMMAND git -C "${NTP_SOURCE_DIR}" rev-parse --short HEAD
        OUTPUT_VARIABLE _hash
        OUTPUT_STRIP_TRAILING_WHITESPACE
        ERROR_QUIET
        RESULT_VARIABLE _git_rc
    )
    if(NOT _git_rc EQUAL 0)
        set(_hash "")
    endif()
    if(NOT _hash AND EXISTS "${NTP_SOURCE_DIR}/sntp/scm-rev")
        file(STRINGS "${NTP_SOURCE_DIR}/sntp/scm-rev" _hash LIMIT_COUNT 1)
        string(STRIP "${_hash}" _hash)
    endif()
endif()

if(_hash)
    string(APPEND _ver "@${_hash}")
endif()
# Windows builds always include OpenSSL.
string(APPEND _ver "-o")

string(TIMESTAMP _month "%b" UTC)
string(TIMESTAMP _day "%d" UTC)
string(TIMESTAMP _hms "%H:%M:%S" UTC)
string(TIMESTAMP _year "%Y" UTC)

set(_contents "const char *Version = \"${NTP_PROGRAM} ${_ver} ${_month} ${_day} ${_hms} (UTC) ${_year} (1)\";\n")

get_filename_component(_outdir "${NTP_OUTPUT}" DIRECTORY)
file(MAKE_DIRECTORY "${_outdir}")
file(WRITE "${NTP_OUTPUT}" "${_contents}")
