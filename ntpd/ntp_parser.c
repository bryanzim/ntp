/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 11 "ntp_parser.y"

  #ifdef HAVE_CONFIG_H
  # include <config.h>
  #endif

  #include "ntp.h"
  #include "ntpd.h"
  #include "ntp_machine.h"
  #include "ntp_stdlib.h"
  #include "ntp_filegen.h"
  #include "ntp_scanner.h"
  #include "ntp_config.h"
  #include "ntp_crypto.h"
  #include "ntp_calendar.h"

  #include "ntpsim.h"		/* HMS: Do we really want this all the time? */
				/* SK: It might be a good idea to always
				   include the simulator code. That way
				   someone can use the same configuration file
				   for both the simulator and the daemon
				*/

  #define YYMALLOC	emalloc
  #define YYFREE	free
  #define YYERROR_VERBOSE
  #define YYMAXDEPTH	1000	/* stop the madness sooner */
  void yyerror(const char *msg);

  #ifdef SIM
  #  define ONLY_SIM(a)	(a)
  #else
  #  define ONLY_SIM(a)	NULL
  #endif

#line 106 "ntp_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ntp_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_Abbrev = 3,                   /* T_Abbrev  */
  YYSYMBOL_T_Age = 4,                      /* T_Age  */
  YYSYMBOL_T_All = 5,                      /* T_All  */
  YYSYMBOL_T_Allan = 6,                    /* T_Allan  */
  YYSYMBOL_T_Allpeers = 7,                 /* T_Allpeers  */
  YYSYMBOL_T_Auth = 8,                     /* T_Auth  */
  YYSYMBOL_T_Autokey = 9,                  /* T_Autokey  */
  YYSYMBOL_T_Automax = 10,                 /* T_Automax  */
  YYSYMBOL_T_Average = 11,                 /* T_Average  */
  YYSYMBOL_T_Basedate = 12,                /* T_Basedate  */
  YYSYMBOL_T_Bclient = 13,                 /* T_Bclient  */
  YYSYMBOL_T_Bcpollbstep = 14,             /* T_Bcpollbstep  */
  YYSYMBOL_T_Beacon = 15,                  /* T_Beacon  */
  YYSYMBOL_T_Broadcast = 16,               /* T_Broadcast  */
  YYSYMBOL_T_Broadcastclient = 17,         /* T_Broadcastclient  */
  YYSYMBOL_T_Broadcastdelay = 18,          /* T_Broadcastdelay  */
  YYSYMBOL_T_Burst = 19,                   /* T_Burst  */
  YYSYMBOL_T_Calibrate = 20,               /* T_Calibrate  */
  YYSYMBOL_T_Ceiling = 21,                 /* T_Ceiling  */
  YYSYMBOL_T_Checkhash = 22,               /* T_Checkhash  */
  YYSYMBOL_T_Clockstats = 23,              /* T_Clockstats  */
  YYSYMBOL_T_Cohort = 24,                  /* T_Cohort  */
  YYSYMBOL_T_ControlKey = 25,              /* T_ControlKey  */
  YYSYMBOL_T_Crypto = 26,                  /* T_Crypto  */
  YYSYMBOL_T_Cryptostats = 27,             /* T_Cryptostats  */
  YYSYMBOL_T_Ctl = 28,                     /* T_Ctl  */
  YYSYMBOL_T_Day = 29,                     /* T_Day  */
  YYSYMBOL_T_Default = 30,                 /* T_Default  */
  YYSYMBOL_T_Delrestrict = 31,             /* T_Delrestrict  */
  YYSYMBOL_T_Device = 32,                  /* T_Device  */
  YYSYMBOL_T_Digest = 33,                  /* T_Digest  */
  YYSYMBOL_T_Disable = 34,                 /* T_Disable  */
  YYSYMBOL_T_Discard = 35,                 /* T_Discard  */
  YYSYMBOL_T_Dispersion = 36,              /* T_Dispersion  */
  YYSYMBOL_T_Double = 37,                  /* T_Double  */
  YYSYMBOL_T_Driftfile = 38,               /* T_Driftfile  */
  YYSYMBOL_T_Drop = 39,                    /* T_Drop  */
  YYSYMBOL_T_Dscp = 40,                    /* T_Dscp  */
  YYSYMBOL_T_Ellipsis = 41,                /* T_Ellipsis  */
  YYSYMBOL_T_Enable = 42,                  /* T_Enable  */
  YYSYMBOL_T_End = 43,                     /* T_End  */
  YYSYMBOL_T_Epeer = 44,                   /* T_Epeer  */
  YYSYMBOL_T_False = 45,                   /* T_False  */
  YYSYMBOL_T_File = 46,                    /* T_File  */
  YYSYMBOL_T_Filegen = 47,                 /* T_Filegen  */
  YYSYMBOL_T_Filenum = 48,                 /* T_Filenum  */
  YYSYMBOL_T_Flag1 = 49,                   /* T_Flag1  */
  YYSYMBOL_T_Flag2 = 50,                   /* T_Flag2  */
  YYSYMBOL_T_Flag3 = 51,                   /* T_Flag3  */
  YYSYMBOL_T_Flag4 = 52,                   /* T_Flag4  */
  YYSYMBOL_T_Flake = 53,                   /* T_Flake  */
  YYSYMBOL_T_Floor = 54,                   /* T_Floor  */
  YYSYMBOL_T_Freq = 55,                    /* T_Freq  */
  YYSYMBOL_T_Fudge = 56,                   /* T_Fudge  */
  YYSYMBOL_T_Fuzz = 57,                    /* T_Fuzz  */
  YYSYMBOL_T_Host = 58,                    /* T_Host  */
  YYSYMBOL_T_Huffpuff = 59,                /* T_Huffpuff  */
  YYSYMBOL_T_Iburst = 60,                  /* T_Iburst  */
  YYSYMBOL_T_Ident = 61,                   /* T_Ident  */
  YYSYMBOL_T_Ignore = 62,                  /* T_Ignore  */
  YYSYMBOL_T_Ignorehash = 63,              /* T_Ignorehash  */
  YYSYMBOL_T_Incalloc = 64,                /* T_Incalloc  */
  YYSYMBOL_T_Incmem = 65,                  /* T_Incmem  */
  YYSYMBOL_T_Initalloc = 66,               /* T_Initalloc  */
  YYSYMBOL_T_Initmem = 67,                 /* T_Initmem  */
  YYSYMBOL_T_Includefile = 68,             /* T_Includefile  */
  YYSYMBOL_T_Integer = 69,                 /* T_Integer  */
  YYSYMBOL_T_Interface = 70,               /* T_Interface  */
  YYSYMBOL_T_Intrange = 71,                /* T_Intrange  */
  YYSYMBOL_T_Io = 72,                      /* T_Io  */
  YYSYMBOL_T_Ippeerlimit = 73,             /* T_Ippeerlimit  */
  YYSYMBOL_T_Ipv4 = 74,                    /* T_Ipv4  */
  YYSYMBOL_T_Ipv4_flag = 75,               /* T_Ipv4_flag  */
  YYSYMBOL_T_Ipv6 = 76,                    /* T_Ipv6  */
  YYSYMBOL_T_Ipv6_flag = 77,               /* T_Ipv6_flag  */
  YYSYMBOL_T_Kernel = 78,                  /* T_Kernel  */
  YYSYMBOL_T_Key = 79,                     /* T_Key  */
  YYSYMBOL_T_Keys = 80,                    /* T_Keys  */
  YYSYMBOL_T_Keysdir = 81,                 /* T_Keysdir  */
  YYSYMBOL_T_Kod = 82,                     /* T_Kod  */
  YYSYMBOL_T_Leapfile = 83,                /* T_Leapfile  */
  YYSYMBOL_T_Leapsmearinterval = 84,       /* T_Leapsmearinterval  */
  YYSYMBOL_T_Limited = 85,                 /* T_Limited  */
  YYSYMBOL_T_Link = 86,                    /* T_Link  */
  YYSYMBOL_T_Listen = 87,                  /* T_Listen  */
  YYSYMBOL_T_Logconfig = 88,               /* T_Logconfig  */
  YYSYMBOL_T_Logfile = 89,                 /* T_Logfile  */
  YYSYMBOL_T_Loopstats = 90,               /* T_Loopstats  */
  YYSYMBOL_T_Lowpriotrap = 91,             /* T_Lowpriotrap  */
  YYSYMBOL_T_Manycastclient = 92,          /* T_Manycastclient  */
  YYSYMBOL_T_Manycastserver = 93,          /* T_Manycastserver  */
  YYSYMBOL_T_Mask = 94,                    /* T_Mask  */
  YYSYMBOL_T_Maxage = 95,                  /* T_Maxage  */
  YYSYMBOL_T_Maxclock = 96,                /* T_Maxclock  */
  YYSYMBOL_T_Maxdepth = 97,                /* T_Maxdepth  */
  YYSYMBOL_T_Maxdist = 98,                 /* T_Maxdist  */
  YYSYMBOL_T_Maxmem = 99,                  /* T_Maxmem  */
  YYSYMBOL_T_Maxpoll = 100,                /* T_Maxpoll  */
  YYSYMBOL_T_Mdnstries = 101,              /* T_Mdnstries  */
  YYSYMBOL_T_Mem = 102,                    /* T_Mem  */
  YYSYMBOL_T_Memlock = 103,                /* T_Memlock  */
  YYSYMBOL_T_Minclock = 104,               /* T_Minclock  */
  YYSYMBOL_T_Mindepth = 105,               /* T_Mindepth  */
  YYSYMBOL_T_Mindist = 106,                /* T_Mindist  */
  YYSYMBOL_T_Minimum = 107,                /* T_Minimum  */
  YYSYMBOL_T_Minjitter = 108,              /* T_Minjitter  */
  YYSYMBOL_T_Minpoll = 109,                /* T_Minpoll  */
  YYSYMBOL_T_Minsane = 110,                /* T_Minsane  */
  YYSYMBOL_T_Mode = 111,                   /* T_Mode  */
  YYSYMBOL_T_Mode7 = 112,                  /* T_Mode7  */
  YYSYMBOL_T_Monitor = 113,                /* T_Monitor  */
  YYSYMBOL_T_Month = 114,                  /* T_Month  */
  YYSYMBOL_T_Mru = 115,                    /* T_Mru  */
  YYSYMBOL_T_Mssntp = 116,                 /* T_Mssntp  */
  YYSYMBOL_T_Multicastclient = 117,        /* T_Multicastclient  */
  YYSYMBOL_T_Nic = 118,                    /* T_Nic  */
  YYSYMBOL_T_Nolink = 119,                 /* T_Nolink  */
  YYSYMBOL_T_Nomodify = 120,               /* T_Nomodify  */
  YYSYMBOL_T_Nomrulist = 121,              /* T_Nomrulist  */
  YYSYMBOL_T_None = 122,                   /* T_None  */
  YYSYMBOL_T_Nonvolatile = 123,            /* T_Nonvolatile  */
  YYSYMBOL_T_Noepeer = 124,                /* T_Noepeer  */
  YYSYMBOL_T_Nopeer = 125,                 /* T_Nopeer  */
  YYSYMBOL_T_Noquery = 126,                /* T_Noquery  */
  YYSYMBOL_T_Noselect = 127,               /* T_Noselect  */
  YYSYMBOL_T_Noserve = 128,                /* T_Noserve  */
  YYSYMBOL_T_Notrap = 129,                 /* T_Notrap  */
  YYSYMBOL_T_Notrust = 130,                /* T_Notrust  */
  YYSYMBOL_T_Ntp = 131,                    /* T_Ntp  */
  YYSYMBOL_T_Ntpport = 132,                /* T_Ntpport  */
  YYSYMBOL_T_NtpSignDsocket = 133,         /* T_NtpSignDsocket  */
  YYSYMBOL_T_Orphan = 134,                 /* T_Orphan  */
  YYSYMBOL_T_Orphanwait = 135,             /* T_Orphanwait  */
  YYSYMBOL_T_PCEdigest = 136,              /* T_PCEdigest  */
  YYSYMBOL_T_Panic = 137,                  /* T_Panic  */
  YYSYMBOL_T_Peer = 138,                   /* T_Peer  */
  YYSYMBOL_T_Peerstats = 139,              /* T_Peerstats  */
  YYSYMBOL_T_Phone = 140,                  /* T_Phone  */
  YYSYMBOL_T_Pid = 141,                    /* T_Pid  */
  YYSYMBOL_T_Pidfile = 142,                /* T_Pidfile  */
  YYSYMBOL_T_Poll = 143,                   /* T_Poll  */
  YYSYMBOL_T_PollSkewList = 144,           /* T_PollSkewList  */
  YYSYMBOL_T_Pool = 145,                   /* T_Pool  */
  YYSYMBOL_T_Port = 146,                   /* T_Port  */
  YYSYMBOL_T_PpsData = 147,                /* T_PpsData  */
  YYSYMBOL_T_Preempt = 148,                /* T_Preempt  */
  YYSYMBOL_T_Prefer = 149,                 /* T_Prefer  */
  YYSYMBOL_T_Protostats = 150,             /* T_Protostats  */
  YYSYMBOL_T_Pw = 151,                     /* T_Pw  */
  YYSYMBOL_T_Randfile = 152,               /* T_Randfile  */
  YYSYMBOL_T_Rawstats = 153,               /* T_Rawstats  */
  YYSYMBOL_T_Refid = 154,                  /* T_Refid  */
  YYSYMBOL_T_Requestkey = 155,             /* T_Requestkey  */
  YYSYMBOL_T_Reset = 156,                  /* T_Reset  */
  YYSYMBOL_T_Restrict = 157,               /* T_Restrict  */
  YYSYMBOL_T_Revoke = 158,                 /* T_Revoke  */
  YYSYMBOL_T_Rlimit = 159,                 /* T_Rlimit  */
  YYSYMBOL_T_Saveconfigdir = 160,          /* T_Saveconfigdir  */
  YYSYMBOL_T_Server = 161,                 /* T_Server  */
  YYSYMBOL_T_Serverresponse = 162,         /* T_Serverresponse  */
  YYSYMBOL_T_ServerresponseFuzz = 163,     /* T_ServerresponseFuzz  */
  YYSYMBOL_T_Setvar = 164,                 /* T_Setvar  */
  YYSYMBOL_T_Source = 165,                 /* T_Source  */
  YYSYMBOL_T_Stacksize = 166,              /* T_Stacksize  */
  YYSYMBOL_T_Statistics = 167,             /* T_Statistics  */
  YYSYMBOL_T_Stats = 168,                  /* T_Stats  */
  YYSYMBOL_T_Statsdir = 169,               /* T_Statsdir  */
  YYSYMBOL_T_Step = 170,                   /* T_Step  */
  YYSYMBOL_T_Stepback = 171,               /* T_Stepback  */
  YYSYMBOL_T_Stepfwd = 172,                /* T_Stepfwd  */
  YYSYMBOL_T_Stepout = 173,                /* T_Stepout  */
  YYSYMBOL_T_Stratum = 174,                /* T_Stratum  */
  YYSYMBOL_T_String = 175,                 /* T_String  */
  YYSYMBOL_T_Sys = 176,                    /* T_Sys  */
  YYSYMBOL_T_Sysstats = 177,               /* T_Sysstats  */
  YYSYMBOL_T_Tick = 178,                   /* T_Tick  */
  YYSYMBOL_T_Time1 = 179,                  /* T_Time1  */
  YYSYMBOL_T_Time2 = 180,                  /* T_Time2  */
  YYSYMBOL_T_TimeData = 181,               /* T_TimeData  */
  YYSYMBOL_T_Timer = 182,                  /* T_Timer  */
  YYSYMBOL_T_Timingstats = 183,            /* T_Timingstats  */
  YYSYMBOL_T_Tinker = 184,                 /* T_Tinker  */
  YYSYMBOL_T_Tos = 185,                    /* T_Tos  */
  YYSYMBOL_T_Trap = 186,                   /* T_Trap  */
  YYSYMBOL_T_True = 187,                   /* T_True  */
  YYSYMBOL_T_Trustedkey = 188,             /* T_Trustedkey  */
  YYSYMBOL_T_Ttl = 189,                    /* T_Ttl  */
  YYSYMBOL_T_Type = 190,                   /* T_Type  */
  YYSYMBOL_T_U_int = 191,                  /* T_U_int  */
  YYSYMBOL_T_UEcrypto = 192,               /* T_UEcrypto  */
  YYSYMBOL_T_UEcryptonak = 193,            /* T_UEcryptonak  */
  YYSYMBOL_T_UEdigest = 194,               /* T_UEdigest  */
  YYSYMBOL_T_Unconfig = 195,               /* T_Unconfig  */
  YYSYMBOL_T_Unpeer = 196,                 /* T_Unpeer  */
  YYSYMBOL_T_User = 197,                   /* T_User  */
  YYSYMBOL_T_Version = 198,                /* T_Version  */
  YYSYMBOL_T_WanderThreshold = 199,        /* T_WanderThreshold  */
  YYSYMBOL_T_Week = 200,                   /* T_Week  */
  YYSYMBOL_T_Wildcard = 201,               /* T_Wildcard  */
  YYSYMBOL_T_Xleave = 202,                 /* T_Xleave  */
  YYSYMBOL_T_Xmtnonce = 203,               /* T_Xmtnonce  */
  YYSYMBOL_T_Year = 204,                   /* T_Year  */
  YYSYMBOL_T_Flag = 205,                   /* T_Flag  */
  YYSYMBOL_T_EOC = 206,                    /* T_EOC  */
  YYSYMBOL_T_Simulate = 207,               /* T_Simulate  */
  YYSYMBOL_T_Beep_Delay = 208,             /* T_Beep_Delay  */
  YYSYMBOL_T_Sim_Duration = 209,           /* T_Sim_Duration  */
  YYSYMBOL_T_Server_Offset = 210,          /* T_Server_Offset  */
  YYSYMBOL_T_Duration = 211,               /* T_Duration  */
  YYSYMBOL_T_Freq_Offset = 212,            /* T_Freq_Offset  */
  YYSYMBOL_T_Wander = 213,                 /* T_Wander  */
  YYSYMBOL_T_Jitter = 214,                 /* T_Jitter  */
  YYSYMBOL_T_Prop_Delay = 215,             /* T_Prop_Delay  */
  YYSYMBOL_T_Proc_Delay = 216,             /* T_Proc_Delay  */
  YYSYMBOL_217_ = 217,                     /* '|'  */
  YYSYMBOL_218_ = 218,                     /* '='  */
  YYSYMBOL_219_ = 219,                     /* '('  */
  YYSYMBOL_220_ = 220,                     /* ')'  */
  YYSYMBOL_221_ = 221,                     /* '{'  */
  YYSYMBOL_222_ = 222,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 223,                 /* $accept  */
  YYSYMBOL_configuration = 224,            /* configuration  */
  YYSYMBOL_command_list = 225,             /* command_list  */
  YYSYMBOL_command = 226,                  /* command  */
  YYSYMBOL_server_command = 227,           /* server_command  */
  YYSYMBOL_client_type = 228,              /* client_type  */
  YYSYMBOL_address = 229,                  /* address  */
  YYSYMBOL_ip_address = 230,               /* ip_address  */
  YYSYMBOL_address_fam = 231,              /* address_fam  */
  YYSYMBOL_option_list = 232,              /* option_list  */
  YYSYMBOL_option = 233,                   /* option  */
  YYSYMBOL_option_flag = 234,              /* option_flag  */
  YYSYMBOL_option_flag_keyword = 235,      /* option_flag_keyword  */
  YYSYMBOL_option_int = 236,               /* option_int  */
  YYSYMBOL_option_int_keyword = 237,       /* option_int_keyword  */
  YYSYMBOL_option_str = 238,               /* option_str  */
  YYSYMBOL_option_str_keyword = 239,       /* option_str_keyword  */
  YYSYMBOL_unpeer_command = 240,           /* unpeer_command  */
  YYSYMBOL_unpeer_keyword = 241,           /* unpeer_keyword  */
  YYSYMBOL_other_mode_command = 242,       /* other_mode_command  */
  YYSYMBOL_authentication_command = 243,   /* authentication_command  */
  YYSYMBOL_crypto_command_list = 244,      /* crypto_command_list  */
  YYSYMBOL_crypto_command = 245,           /* crypto_command  */
  YYSYMBOL_crypto_str_keyword = 246,       /* crypto_str_keyword  */
  YYSYMBOL_orphan_mode_command = 247,      /* orphan_mode_command  */
  YYSYMBOL_tos_option_list = 248,          /* tos_option_list  */
  YYSYMBOL_tos_option = 249,               /* tos_option  */
  YYSYMBOL_tos_option_int_keyword = 250,   /* tos_option_int_keyword  */
  YYSYMBOL_tos_option_dbl_keyword = 251,   /* tos_option_dbl_keyword  */
  YYSYMBOL_monitoring_command = 252,       /* monitoring_command  */
  YYSYMBOL_stats_list = 253,               /* stats_list  */
  YYSYMBOL_stat = 254,                     /* stat  */
  YYSYMBOL_filegen_option_list = 255,      /* filegen_option_list  */
  YYSYMBOL_filegen_option = 256,           /* filegen_option  */
  YYSYMBOL_link_nolink = 257,              /* link_nolink  */
  YYSYMBOL_enable_disable = 258,           /* enable_disable  */
  YYSYMBOL_filegen_type = 259,             /* filegen_type  */
  YYSYMBOL_access_control_command = 260,   /* access_control_command  */
  YYSYMBOL_restrict_mask = 261,            /* restrict_mask  */
  YYSYMBOL_res_ippeerlimit = 262,          /* res_ippeerlimit  */
  YYSYMBOL_ac_flag_list = 263,             /* ac_flag_list  */
  YYSYMBOL_access_control_flag = 264,      /* access_control_flag  */
  YYSYMBOL_discard_option_list = 265,      /* discard_option_list  */
  YYSYMBOL_discard_option = 266,           /* discard_option  */
  YYSYMBOL_discard_option_keyword = 267,   /* discard_option_keyword  */
  YYSYMBOL_mru_option_list = 268,          /* mru_option_list  */
  YYSYMBOL_mru_option = 269,               /* mru_option  */
  YYSYMBOL_mru_option_keyword = 270,       /* mru_option_keyword  */
  YYSYMBOL_fudge_command = 271,            /* fudge_command  */
  YYSYMBOL_fudge_factor_list = 272,        /* fudge_factor_list  */
  YYSYMBOL_fudge_factor = 273,             /* fudge_factor  */
  YYSYMBOL_fudge_factor_dbl_keyword = 274, /* fudge_factor_dbl_keyword  */
  YYSYMBOL_fudge_factor_bool_keyword = 275, /* fudge_factor_bool_keyword  */
  YYSYMBOL_device_command = 276,           /* device_command  */
  YYSYMBOL_device_item_list = 277,         /* device_item_list  */
  YYSYMBOL_device_item = 278,              /* device_item  */
  YYSYMBOL_device_item_path_keyword = 279, /* device_item_path_keyword  */
  YYSYMBOL_rlimit_command = 280,           /* rlimit_command  */
  YYSYMBOL_rlimit_option_list = 281,       /* rlimit_option_list  */
  YYSYMBOL_rlimit_option = 282,            /* rlimit_option  */
  YYSYMBOL_rlimit_option_keyword = 283,    /* rlimit_option_keyword  */
  YYSYMBOL_system_option_command = 284,    /* system_option_command  */
  YYSYMBOL_system_option_list = 285,       /* system_option_list  */
  YYSYMBOL_system_option = 286,            /* system_option  */
  YYSYMBOL_system_option_flag_keyword = 287, /* system_option_flag_keyword  */
  YYSYMBOL_system_option_local_flag_keyword = 288, /* system_option_local_flag_keyword  */
  YYSYMBOL_tinker_command = 289,           /* tinker_command  */
  YYSYMBOL_tinker_option_list = 290,       /* tinker_option_list  */
  YYSYMBOL_tinker_option = 291,            /* tinker_option  */
  YYSYMBOL_tinker_option_keyword = 292,    /* tinker_option_keyword  */
  YYSYMBOL_miscellaneous_command = 293,    /* miscellaneous_command  */
  YYSYMBOL_misc_cmd_dbl_keyword = 294,     /* misc_cmd_dbl_keyword  */
  YYSYMBOL_misc_cmd_int_keyword = 295,     /* misc_cmd_int_keyword  */
  YYSYMBOL_opt_hash_check = 296,           /* opt_hash_check  */
  YYSYMBOL_misc_cmd_str_keyword = 297,     /* misc_cmd_str_keyword  */
  YYSYMBOL_misc_cmd_str_lcl_keyword = 298, /* misc_cmd_str_lcl_keyword  */
  YYSYMBOL_drift_parm = 299,               /* drift_parm  */
  YYSYMBOL_pollskew_list = 300,            /* pollskew_list  */
  YYSYMBOL_pollskew_spec = 301,            /* pollskew_spec  */
  YYSYMBOL_pollskew_cycle = 302,           /* pollskew_cycle  */
  YYSYMBOL_variable_assign = 303,          /* variable_assign  */
  YYSYMBOL_t_default_or_zero = 304,        /* t_default_or_zero  */
  YYSYMBOL_trap_option_list = 305,         /* trap_option_list  */
  YYSYMBOL_trap_option = 306,              /* trap_option  */
  YYSYMBOL_log_config_list = 307,          /* log_config_list  */
  YYSYMBOL_log_config_command = 308,       /* log_config_command  */
  YYSYMBOL_interface_command = 309,        /* interface_command  */
  YYSYMBOL_interface_nic = 310,            /* interface_nic  */
  YYSYMBOL_nic_rule_class = 311,           /* nic_rule_class  */
  YYSYMBOL_nic_rule_action = 312,          /* nic_rule_action  */
  YYSYMBOL_reset_command = 313,            /* reset_command  */
  YYSYMBOL_counter_set_list = 314,         /* counter_set_list  */
  YYSYMBOL_counter_set_keyword = 315,      /* counter_set_keyword  */
  YYSYMBOL_integer_list = 316,             /* integer_list  */
  YYSYMBOL_integer_list_range = 317,       /* integer_list_range  */
  YYSYMBOL_integer_list_range_elt = 318,   /* integer_list_range_elt  */
  YYSYMBOL_integer_range = 319,            /* integer_range  */
  YYSYMBOL_string_list = 320,              /* string_list  */
  YYSYMBOL_address_list = 321,             /* address_list  */
  YYSYMBOL_boolean = 322,                  /* boolean  */
  YYSYMBOL_number = 323,                   /* number  */
  YYSYMBOL_basedate = 324,                 /* basedate  */
  YYSYMBOL_simulate_command = 325,         /* simulate_command  */
  YYSYMBOL_sim_conf_start = 326,           /* sim_conf_start  */
  YYSYMBOL_sim_init_statement_list = 327,  /* sim_init_statement_list  */
  YYSYMBOL_sim_init_statement = 328,       /* sim_init_statement  */
  YYSYMBOL_sim_init_keyword = 329,         /* sim_init_keyword  */
  YYSYMBOL_sim_server_list = 330,          /* sim_server_list  */
  YYSYMBOL_sim_server = 331,               /* sim_server  */
  YYSYMBOL_sim_server_offset = 332,        /* sim_server_offset  */
  YYSYMBOL_sim_server_name = 333,          /* sim_server_name  */
  YYSYMBOL_sim_act_list = 334,             /* sim_act_list  */
  YYSYMBOL_sim_act = 335,                  /* sim_act  */
  YYSYMBOL_sim_act_stmt_list = 336,        /* sim_act_stmt_list  */
  YYSYMBOL_sim_act_stmt = 337,             /* sim_act_stmt  */
  YYSYMBOL_sim_act_keyword = 338           /* sim_act_keyword  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  226
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   759

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  223
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  468

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   471


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     219,   220,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   218,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   221,   217,   222,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   400,   400,   404,   405,   406,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   443,   453,   454,   455,   456,   457,   461,   462,   467,
     472,   474,   480,   481,   489,   490,   491,   495,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   512,   514,   519,
     520,   521,   522,   523,   524,   528,   533,   542,   552,   553,
     563,   565,   567,   569,   580,   587,   589,   594,   596,   598,
     600,   602,   612,   618,   619,   627,   629,   641,   642,   643,
     644,   645,   654,   659,   664,   672,   674,   676,   678,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   695,   696,
     705,   707,   716,   726,   731,   739,   740,   741,   742,   743,
     744,   745,   746,   751,   752,   760,   770,   779,   794,   799,
     800,   804,   805,   809,   810,   811,   812,   813,   814,   815,
     824,   828,   832,   841,   850,   866,   882,   892,   901,   917,
     918,   926,   927,   947,   948,   956,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   987,   992,  1000,  1005,  1006,  1007,  1011,
    1016,  1024,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1044,  1054,  1059,  1067,  1069,  1071,  1080,  1082,  1087,  1088,
    1089,  1093,  1094,  1095,  1096,  1104,  1114,  1119,  1127,  1132,
    1133,  1141,  1146,  1151,  1159,  1164,  1165,  1166,  1175,  1177,
    1182,  1187,  1195,  1197,  1214,  1215,  1216,  1217,  1218,  1219,
    1223,  1224,  1225,  1226,  1227,  1228,  1236,  1241,  1246,  1254,
    1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1277,  1278,  1279,  1286,  1293,  1300,  1316,  1335,  1343,  1345,
    1347,  1349,  1351,  1353,  1355,  1362,  1367,  1368,  1369,  1373,
    1377,  1386,  1388,  1391,  1395,  1399,  1400,  1401,  1402,  1406,
    1417,  1435,  1448,  1449,  1454,  1480,  1486,  1491,  1496,  1498,
    1503,  1504,  1512,  1514,  1522,  1527,  1535,  1560,  1567,  1577,
    1578,  1582,  1583,  1584,  1585,  1589,  1590,  1591,  1595,  1600,
    1605,  1613,  1614,  1615,  1616,  1617,  1618,  1619,  1629,  1634,
    1642,  1647,  1655,  1657,  1661,  1666,  1671,  1679,  1684,  1692,
    1701,  1702,  1706,  1707,  1711,  1719,  1737,  1741,  1746,  1754,
    1759,  1760,  1764,  1769,  1777,  1782,  1787,  1792,  1797,  1805,
    1810,  1815,  1823,  1828,  1829,  1830,  1831,  1832
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_Abbrev", "T_Age",
  "T_All", "T_Allan", "T_Allpeers", "T_Auth", "T_Autokey", "T_Automax",
  "T_Average", "T_Basedate", "T_Bclient", "T_Bcpollbstep", "T_Beacon",
  "T_Broadcast", "T_Broadcastclient", "T_Broadcastdelay", "T_Burst",
  "T_Calibrate", "T_Ceiling", "T_Checkhash", "T_Clockstats", "T_Cohort",
  "T_ControlKey", "T_Crypto", "T_Cryptostats", "T_Ctl", "T_Day",
  "T_Default", "T_Delrestrict", "T_Device", "T_Digest", "T_Disable",
  "T_Discard", "T_Dispersion", "T_Double", "T_Driftfile", "T_Drop",
  "T_Dscp", "T_Ellipsis", "T_Enable", "T_End", "T_Epeer", "T_False",
  "T_File", "T_Filegen", "T_Filenum", "T_Flag1", "T_Flag2", "T_Flag3",
  "T_Flag4", "T_Flake", "T_Floor", "T_Freq", "T_Fudge", "T_Fuzz", "T_Host",
  "T_Huffpuff", "T_Iburst", "T_Ident", "T_Ignore", "T_Ignorehash",
  "T_Incalloc", "T_Incmem", "T_Initalloc", "T_Initmem", "T_Includefile",
  "T_Integer", "T_Interface", "T_Intrange", "T_Io", "T_Ippeerlimit",
  "T_Ipv4", "T_Ipv4_flag", "T_Ipv6", "T_Ipv6_flag", "T_Kernel", "T_Key",
  "T_Keys", "T_Keysdir", "T_Kod", "T_Leapfile", "T_Leapsmearinterval",
  "T_Limited", "T_Link", "T_Listen", "T_Logconfig", "T_Logfile",
  "T_Loopstats", "T_Lowpriotrap", "T_Manycastclient", "T_Manycastserver",
  "T_Mask", "T_Maxage", "T_Maxclock", "T_Maxdepth", "T_Maxdist",
  "T_Maxmem", "T_Maxpoll", "T_Mdnstries", "T_Mem", "T_Memlock",
  "T_Minclock", "T_Mindepth", "T_Mindist", "T_Minimum", "T_Minjitter",
  "T_Minpoll", "T_Minsane", "T_Mode", "T_Mode7", "T_Monitor", "T_Month",
  "T_Mru", "T_Mssntp", "T_Multicastclient", "T_Nic", "T_Nolink",
  "T_Nomodify", "T_Nomrulist", "T_None", "T_Nonvolatile", "T_Noepeer",
  "T_Nopeer", "T_Noquery", "T_Noselect", "T_Noserve", "T_Notrap",
  "T_Notrust", "T_Ntp", "T_Ntpport", "T_NtpSignDsocket", "T_Orphan",
  "T_Orphanwait", "T_PCEdigest", "T_Panic", "T_Peer", "T_Peerstats",
  "T_Phone", "T_Pid", "T_Pidfile", "T_Poll", "T_PollSkewList", "T_Pool",
  "T_Port", "T_PpsData", "T_Preempt", "T_Prefer", "T_Protostats", "T_Pw",
  "T_Randfile", "T_Rawstats", "T_Refid", "T_Requestkey", "T_Reset",
  "T_Restrict", "T_Revoke", "T_Rlimit", "T_Saveconfigdir", "T_Server",
  "T_Serverresponse", "T_ServerresponseFuzz", "T_Setvar", "T_Source",
  "T_Stacksize", "T_Statistics", "T_Stats", "T_Statsdir", "T_Step",
  "T_Stepback", "T_Stepfwd", "T_Stepout", "T_Stratum", "T_String", "T_Sys",
  "T_Sysstats", "T_Tick", "T_Time1", "T_Time2", "T_TimeData", "T_Timer",
  "T_Timingstats", "T_Tinker", "T_Tos", "T_Trap", "T_True", "T_Trustedkey",
  "T_Ttl", "T_Type", "T_U_int", "T_UEcrypto", "T_UEcryptonak",
  "T_UEdigest", "T_Unconfig", "T_Unpeer", "T_User", "T_Version",
  "T_WanderThreshold", "T_Week", "T_Wildcard", "T_Xleave", "T_Xmtnonce",
  "T_Year", "T_Flag", "T_EOC", "T_Simulate", "T_Beep_Delay",
  "T_Sim_Duration", "T_Server_Offset", "T_Duration", "T_Freq_Offset",
  "T_Wander", "T_Jitter", "T_Prop_Delay", "T_Proc_Delay", "'|'", "'='",
  "'('", "')'", "'{'", "'}'", "$accept", "configuration", "command_list",
  "command", "server_command", "client_type", "address", "ip_address",
  "address_fam", "option_list", "option", "option_flag",
  "option_flag_keyword", "option_int", "option_int_keyword", "option_str",
  "option_str_keyword", "unpeer_command", "unpeer_keyword",
  "other_mode_command", "authentication_command", "crypto_command_list",
  "crypto_command", "crypto_str_keyword", "orphan_mode_command",
  "tos_option_list", "tos_option", "tos_option_int_keyword",
  "tos_option_dbl_keyword", "monitoring_command", "stats_list", "stat",
  "filegen_option_list", "filegen_option", "link_nolink", "enable_disable",
  "filegen_type", "access_control_command", "restrict_mask",
  "res_ippeerlimit", "ac_flag_list", "access_control_flag",
  "discard_option_list", "discard_option", "discard_option_keyword",
  "mru_option_list", "mru_option", "mru_option_keyword", "fudge_command",
  "fudge_factor_list", "fudge_factor", "fudge_factor_dbl_keyword",
  "fudge_factor_bool_keyword", "device_command", "device_item_list",
  "device_item", "device_item_path_keyword", "rlimit_command",
  "rlimit_option_list", "rlimit_option", "rlimit_option_keyword",
  "system_option_command", "system_option_list", "system_option",
  "system_option_flag_keyword", "system_option_local_flag_keyword",
  "tinker_command", "tinker_option_list", "tinker_option",
  "tinker_option_keyword", "miscellaneous_command", "misc_cmd_dbl_keyword",
  "misc_cmd_int_keyword", "opt_hash_check", "misc_cmd_str_keyword",
  "misc_cmd_str_lcl_keyword", "drift_parm", "pollskew_list",
  "pollskew_spec", "pollskew_cycle", "variable_assign",
  "t_default_or_zero", "trap_option_list", "trap_option",
  "log_config_list", "log_config_command", "interface_command",
  "interface_nic", "nic_rule_class", "nic_rule_action", "reset_command",
  "counter_set_list", "counter_set_keyword", "integer_list",
  "integer_list_range", "integer_list_range_elt", "integer_range",
  "string_list", "address_list", "boolean", "number", "basedate",
  "simulate_command", "sim_conf_start", "sim_init_statement_list",
  "sim_init_statement", "sim_init_keyword", "sim_server_list",
  "sim_server", "sim_server_offset", "sim_server_name", "sim_act_list",
  "sim_act", "sim_act_stmt_list", "sim_act_stmt", "sim_act_keyword", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-262)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-7)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,  -186,   -51,  -262,  -262,  -262,   -48,  -262,   -72,   -62,
     501,    -1,  -148,  -262,   501,  -262,   294,   -62,  -262,  -133,
    -262,  -127,  -126,   -97,  -262,   -95,  -262,  -262,   -62,    31,
     266,   -62,  -262,  -262,   -79,  -262,   -74,  -262,  -262,  -262,
      33,    32,    52,    36,   -31,  -262,  -262,   -58,   294,   -57,
    -262,   115,   624,   -52,   -66,    55,  -262,  -262,  -262,  -262,
     125,   222,   -80,  -262,   -62,  -262,   -62,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,   -15,    61,
     -43,   -35,  -262,     2,  -262,  -262,   -78,  -262,  -262,  -262,
       5,   -52,  -262,    54,  -262,  -262,  -131,  -262,   -23,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,   501,  -262,  -262,  -262,  -262,  -262,  -262,    -1,  -262,
      85,   118,  -262,   501,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,    87,   414,  -262,  -262,     8,  -262,   -95,
    -262,  -262,   -62,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,   266,  -262,    89,   -62,  -262,  -262,   -16,    17,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,    32,  -262,
      88,   132,   134,    88,    54,  -262,  -262,  -262,  -262,   -31,
    -262,    97,   -50,  -262,   294,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,   115,  -262,   -15,
      -2,  -262,  -262,  -262,   -38,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,   624,  -262,   106,   -15,  -262,  -262,  -262,
     108,   -66,  -262,  -262,  -262,   109,  -262,   -25,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
       1,  -183,  -262,  -262,  -262,  -262,  -262,   121,  -262,    22,
    -262,   -52,  -262,  -262,  -262,  -131,  -262,    23,  -262,  -262,
    -262,  -262,  -262,   -10,    24,  -262,  -262,  -262,  -262,  -262,
      26,   123,  -262,  -262,    87,  -262,   -15,   -38,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     141,  -262,   149,  -262,    88,    88,  -262,    88,  -262,  -262,
      28,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,   -65,   178,  -262,  -262,  -262,   170,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -110,    14,     3,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,    50,  -262,  -262,     0,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,     9,
    -262,   542,  -262,  -262,   542,  -262,   198,   -52,   160,  -262,
     166,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,   -60,  -262,    62,    18,    37,  -149,  -262,    21,  -262,
     -15,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     176,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,   193,  -262,  -262,
     542,   542,   542,  -262,  -262,  -262,  -262,    35,  -262,  -262,
    -262,   -62,  -262,  -262,  -262,    48,  -262,  -262,  -262,  -262,
    -262,    41,    66,   -15,    45,  -188,  -262,    65,   -15,  -262,
    -262,  -262,    59,   112,  -262,  -262,  -262,  -262,  -262,    60,
      78,    71,  -262,    90,  -262,   -15,  -262,  -262
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,    25,    60,   256,     0,    73,     0,     0,
       0,     0,   271,   259,     0,   248,     0,     0,   264,     0,
     289,     0,     0,     0,   260,     0,   265,    26,     0,     0,
       0,     0,   290,   257,     0,    24,     0,   266,   272,    23,
       0,     0,     0,     0,     0,   267,    22,     0,     0,     0,
     258,     0,     0,     0,     0,     0,    58,    59,   268,   326,
       0,     2,     0,     7,     0,     8,     0,     9,    10,    13,
      11,    12,    14,    20,    15,    16,    17,    18,     0,     0,
       0,     0,   240,     0,   241,    19,     0,     5,    64,    65,
      66,     0,    29,   139,    30,    31,     0,    27,     0,   214,
     215,   216,   217,   220,   218,   219,   221,   222,   223,   224,
     225,   209,   211,   212,   213,   166,   167,   168,   130,   164,
       0,   269,   249,   208,   105,   106,   107,   108,   112,   109,
     110,   111,   113,     0,     6,    67,    68,   263,   286,   250,
     285,   318,    61,    63,   172,   173,   174,   175,   176,   177,
     178,   179,   131,   170,     0,    62,    72,   316,   251,   252,
      69,   301,   302,   303,   304,   305,   306,   307,   298,   300,
     141,    30,    31,   141,   139,    70,   207,   205,   206,   201,
     203,     0,     0,   253,   100,   104,   101,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   226,   228,     0,
       0,    89,    90,    91,     0,    92,    93,    99,    94,    98,
      95,    96,    97,    82,    84,     0,     0,    88,   280,   312,
       0,    71,   311,   313,   309,   255,     1,     0,     4,    32,
      57,   323,   322,   242,   243,   244,   245,   297,   296,   295,
       0,     0,    81,    77,    78,    79,    80,     0,    74,     0,
     138,     0,   137,   200,   199,   195,   197,     0,    28,   210,
     163,   165,   270,   102,     0,   191,   192,   193,   194,   190,
       0,     0,   188,   189,   180,   182,     0,     0,   246,   262,
     261,   247,   284,   317,   169,   171,   315,   276,   275,   273,
       0,   299,     0,   143,   141,   141,   143,   141,   202,   204,
       0,   103,   227,   229,   324,   321,   319,   320,    87,    83,
      85,    86,   254,     0,   310,   308,     3,    21,   291,   292,
     293,   288,   294,   287,   330,   331,     0,     0,     0,    76,
      75,   140,   196,   198,   122,   121,     0,   119,   120,     0,
     114,   117,   118,   186,   187,   185,   181,   183,   184,     0,
     142,   133,   143,   143,   136,   143,   279,     0,     0,   281,
       0,    38,    39,    40,    56,    49,    51,    50,    53,    41,
      42,    43,    44,    52,    54,    45,    46,    33,    34,    37,
      35,     0,    36,     0,     0,     0,     0,   333,     0,   328,
       0,   115,   129,   125,   127,   123,   124,   126,   128,   116,
       0,   146,   147,   148,   149,   150,   151,   152,   154,   155,
     153,   156,   157,   158,   159,   160,   161,     0,   162,   144,
     134,   135,   132,   278,   277,   283,   282,     0,    47,    48,
      55,     0,   327,   325,   332,     0,   329,   274,   145,   314,
     336,     0,     0,     0,     0,     0,   338,     0,     0,   334,
     337,   335,     0,     0,   343,   344,   345,   346,   347,     0,
       0,     0,   339,     0,   341,     0,   340,   342
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,  -262,   -47,  -262,  -262,    -9,    -7,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,    81,  -262,  -262,  -262,
    -262,   -37,  -262,  -262,  -262,  -262,  -262,  -262,   117,   -88,
    -261,  -262,  -262,   177,  -262,  -262,   146,  -262,  -262,  -262,
      25,  -262,  -262,  -262,  -262,    46,  -262,  -262,  -262,   128,
    -262,  -262,   286,   -55,  -262,  -262,  -262,  -262,   107,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,   169,  -262,  -262,  -262,  -262,
    -262,  -262,   144,  -262,  -262,    92,  -262,  -262,   278,    39,
    -197,  -262,  -262,  -262,  -262,    -6,  -262,  -262,   -64,  -262,
    -262,  -262,  -116,  -262,  -125,  -262
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    60,    61,    62,    63,    64,   141,    97,    98,   317,
     377,   378,   379,   380,   381,   382,   383,    65,    66,    67,
      68,    90,   248,   249,    69,   213,   214,   215,   216,    70,
     184,   132,   263,   340,   341,   342,   399,    71,   252,   293,
     351,   419,   118,   119,   120,   152,   153,   154,    72,   274,
     275,   276,   277,    73,   255,   256,   257,    74,   179,   180,
     181,    75,   111,   112,   113,   114,    76,   197,   198,   199,
      77,    78,    79,   281,    80,    81,   122,   159,   289,   290,
     183,   424,   312,   359,   139,   140,    82,    83,   323,   240,
      84,   168,   169,   225,   221,   222,   223,   158,   142,   308,
     233,   217,    85,    86,   326,   327,   328,   386,   387,   442,
     388,   445,   446,   459,   460,   461
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    93,   303,   219,   392,   357,   318,   305,   133,   428,
     115,   185,   384,    94,   227,    95,   253,   176,    88,   311,
      87,    89,   231,   444,   334,   324,   325,   121,     1,   393,
     279,   306,   335,   174,   449,   354,   336,     2,   242,   161,
     162,   237,   134,     3,     4,     5,   218,   287,   135,   136,
     254,   384,     6,     7,   232,   229,   259,   230,     8,     9,
     163,    10,    11,   243,   238,    12,   244,    13,   259,    14,
      15,   280,   177,   433,    16,   319,   337,   320,   137,   347,
     138,   358,   170,    17,   250,   296,   288,   278,    18,   239,
     264,   420,   421,    91,   422,    19,   156,    20,   324,   325,
     143,   157,   160,    92,   164,   175,   116,    21,    22,   338,
      23,    24,   117,    92,   394,    25,    26,   182,   186,    27,
      28,   187,   395,    92,   224,   226,   228,   171,    29,   172,
     234,   429,   235,   283,   165,   178,   265,   266,   267,   268,
     236,   396,    30,   241,    31,    32,   283,   301,   251,   307,
      33,   188,   258,   220,   261,   262,   245,   246,   285,   286,
      34,   292,   294,   247,   295,    35,   299,    36,   300,    37,
     189,    38,    39,   304,   190,   310,   321,   313,   315,   361,
     339,   316,    40,    41,    42,    43,    44,    45,    46,   362,
     329,    47,   345,   436,    48,   269,    49,   330,   333,   343,
     397,   344,   322,   356,   398,    50,   352,   353,   166,   355,
     349,    51,    52,    53,   167,    54,    55,   173,   350,   360,
     389,   390,    56,    57,    58,   391,   400,    92,   423,   426,
     363,   364,     2,    -6,    59,   427,   431,   430,     3,     4,
       5,   270,   435,   432,   331,   437,   447,     6,     7,   365,
     438,   452,   191,     8,     9,   439,    10,    11,   441,   443,
      12,   271,    13,   448,    14,    15,   272,   273,   467,    16,
     366,   451,   454,   455,   456,   457,   458,   444,    17,   367,
     453,   368,   462,    18,   464,   192,   193,   194,   195,   465,
      19,   297,    20,   196,   309,   260,   466,   369,   284,   346,
     123,   332,    21,    22,   302,    23,    24,   298,   282,   155,
      25,    26,   291,   314,    27,    28,   348,   124,   370,   371,
     385,   125,   434,    29,   454,   455,   456,   457,   458,   450,
     144,   145,   146,   147,   463,     0,     0,    30,     0,    31,
      32,     0,     0,     0,     0,    33,     0,     0,     0,     0,
     425,     0,     0,     0,     0,    34,     0,   372,     0,   373,
      35,   148,    36,   149,    37,   150,    38,    39,   374,     0,
       0,   151,   375,   376,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,   126,     0,    47,     0,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,    56,    57,    58,
       0,     0,   440,     0,     2,     0,     0,     0,    -6,    59,
       3,     4,     5,   127,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,   128,     8,     9,   129,    10,    11,
       0,     0,    12,     0,    13,     0,    14,    15,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
      17,   130,     0,     0,     0,    18,     0,   131,     0,     0,
       0,     0,    19,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,    23,    24,     0,
       0,     0,    25,    26,     0,     0,    27,    28,     0,    99,
       0,     0,     0,     0,   100,    29,     0,     0,     0,     0,
       0,   101,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,    35,     0,    36,     0,    37,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,     0,     0,    47,   102,
       0,    48,     0,    49,     0,     0,   401,     0,     0,     0,
       0,     0,    50,     0,     0,   402,     0,     0,    51,    52,
      53,     0,    54,    55,   403,     0,     0,     0,     0,    56,
      57,    58,     0,   103,   104,     0,     0,     0,     0,     0,
       0,    59,     0,     0,   404,     0,     0,   405,     0,     0,
       0,     0,   105,   406,     0,     0,   200,   106,   201,   202,
       0,     0,     0,     0,     0,   203,     0,     0,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,     0,
       0,     0,   408,   409,     0,     0,   410,   411,   412,   107,
     413,   414,   415,     0,   416,     0,     0,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,     0,   207,     0,     0,     0,     0,     0,   208,     0,
     209,     0,     0,     0,   210,     0,     0,     0,     0,     0,
     418,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   212
};

static const yytype_int16 yycheck[] =
{
       9,     8,   199,    69,     4,    70,     5,    45,    17,    69,
      11,    48,   161,    75,    61,    77,   147,    48,    69,   216,
     206,    69,    37,   211,    34,   208,   209,   175,     1,    29,
      22,    69,    42,    42,   222,   296,    46,    10,    33,     7,
       8,    39,   175,    16,    17,    18,    53,    30,   175,   175,
     181,   161,    25,    26,    69,    64,   111,    66,    31,    32,
      28,    34,    35,    58,    62,    38,    61,    40,   123,    42,
      43,    63,   103,   222,    47,    74,    86,    76,   175,   276,
     175,   146,    30,    56,    91,   173,    69,   134,    61,    87,
       3,   352,   353,   165,   355,    68,   175,    70,   208,   209,
      69,   175,    69,   175,    72,    69,   107,    80,    81,   119,
      83,    84,   113,   175,   114,    88,    89,   175,   175,    92,
      93,     6,   122,   175,    69,     0,   206,    75,   101,    77,
      69,   191,   175,   142,   102,   166,    49,    50,    51,    52,
     175,   141,   115,   221,   117,   118,   155,   184,    94,   187,
     123,    36,   175,   219,    69,    37,   151,   152,    69,   175,
     133,    73,    30,   158,    30,   138,    69,   140,   218,   142,
      55,   144,   145,   175,    59,    69,   175,    69,    69,     9,
     190,   206,   155,   156,   157,   158,   159,   160,   161,    19,
      69,   164,    69,   390,   167,   108,   169,   175,   175,   175,
     200,   175,   201,   175,   204,   178,   294,   295,   176,   297,
      69,   184,   185,   186,   182,   188,   189,   165,    69,    41,
     206,   218,   195,   196,   197,   175,   217,   175,    30,    69,
      60,    61,    10,   206,   207,    69,   218,   175,    16,    17,
      18,   154,   221,   206,   251,    69,   443,    25,    26,    79,
      57,   448,   137,    31,    32,   220,    34,    35,   210,   218,
      38,   174,    40,   218,    42,    43,   179,   180,   465,    47,
     100,   206,   212,   213,   214,   215,   216,   211,    56,   109,
     221,   111,   222,    61,   206,   170,   171,   172,   173,   218,
      68,   174,    70,   178,   213,   118,   206,   127,   152,   274,
      14,   255,    80,    81,   197,    83,    84,   179,   139,    31,
      88,    89,   168,   221,    92,    93,   277,    23,   148,   149,
     326,    27,   386,   101,   212,   213,   214,   215,   216,   445,
      64,    65,    66,    67,   459,    -1,    -1,   115,    -1,   117,
     118,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,   133,    -1,   187,    -1,   189,
     138,    95,   140,    97,   142,    99,   144,   145,   198,    -1,
      -1,   105,   202,   203,    -1,    -1,    -1,   155,   156,   157,
     158,   159,   160,   161,    90,    -1,   164,    -1,    -1,   167,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,
      -1,    -1,   431,    -1,    10,    -1,    -1,    -1,   206,   207,
      16,    17,    18,   139,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,   150,    31,    32,   153,    34,    35,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,   177,    -1,    -1,    -1,    61,    -1,   183,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,     8,
      -1,    -1,    -1,    -1,    13,   101,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,   138,    -1,   140,    -1,   142,    -1,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   164,    78,
      -1,   167,    -1,   169,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    53,    -1,    -1,   184,   185,
     186,    -1,   188,   189,    62,    -1,    -1,    -1,    -1,   195,
     196,   197,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,   131,    91,    -1,    -1,    12,   136,    14,    15,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,    -1,    -1,   124,   125,   126,   168,
     128,   129,   130,    -1,   132,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     1,    10,    16,    17,    18,    25,    26,    31,    32,
      34,    35,    38,    40,    42,    43,    47,    56,    61,    68,
      70,    80,    81,    83,    84,    88,    89,    92,    93,   101,
     115,   117,   118,   123,   133,   138,   140,   142,   144,   145,
     155,   156,   157,   158,   159,   160,   161,   164,   167,   169,
     178,   184,   185,   186,   188,   189,   195,   196,   197,   207,
     224,   225,   226,   227,   228,   240,   241,   242,   243,   247,
     252,   260,   271,   276,   280,   284,   289,   293,   294,   295,
     297,   298,   309,   310,   313,   325,   326,   206,    69,    69,
     244,   165,   175,   230,    75,    77,   229,   230,   231,     8,
      13,    20,    78,   112,   113,   131,   136,   168,   192,   193,
     194,   285,   286,   287,   288,    11,   107,   113,   265,   266,
     267,   175,   299,   285,    23,    27,    90,   139,   150,   153,
     177,   183,   254,   229,   175,   175,   175,   175,   175,   307,
     308,   229,   321,    69,    64,    65,    66,    67,    95,    97,
      99,   105,   268,   269,   270,   321,   175,   175,   320,   300,
      69,     7,     8,    28,    72,   102,   176,   182,   314,   315,
      30,    75,    77,   165,   229,    69,    48,   103,   166,   281,
     282,   283,   175,   303,   253,   254,   175,     6,    36,    55,
      59,   137,   170,   171,   172,   173,   178,   290,   291,   292,
      12,    14,    15,    21,    24,    54,    96,    98,   104,   106,
     110,   134,   135,   248,   249,   250,   251,   324,   230,    69,
     219,   317,   318,   319,    69,   316,     0,   226,   206,   229,
     229,    37,    69,   323,    69,   175,   175,    39,    62,    87,
     312,   221,    33,    58,    61,   151,   152,   158,   245,   246,
     230,    94,   261,   147,   181,   277,   278,   279,   175,   286,
     266,    69,    37,   255,     3,    49,    50,    51,    52,   108,
     154,   174,   179,   180,   272,   273,   274,   275,   226,    22,
      63,   296,   308,   229,   269,    69,   175,    30,    69,   301,
     302,   315,    73,   262,    30,    30,   262,   261,   282,    69,
     218,   254,   291,   323,   175,    45,    69,   187,   322,   249,
      69,   323,   305,    69,   318,    69,   206,   232,     5,    74,
      76,   175,   201,   311,   208,   209,   327,   328,   329,    69,
     175,   230,   278,   175,    34,    42,    46,    86,   119,   190,
     256,   257,   258,   175,   175,    69,   273,   323,   322,    69,
      69,   263,   262,   262,   263,   262,   175,    70,   146,   306,
      41,     9,    19,    60,    61,    79,   100,   109,   111,   127,
     148,   149,   187,   189,   198,   202,   203,   233,   234,   235,
     236,   237,   238,   239,   161,   328,   330,   331,   333,   206,
     218,   175,     4,    29,   114,   122,   141,   200,   204,   259,
     217,    44,    53,    62,    82,    85,    91,   116,   120,   121,
     124,   125,   126,   128,   129,   130,   132,   162,   198,   264,
     263,   263,   263,    30,   304,   230,    69,    69,    69,   191,
     175,   218,   206,   222,   331,   221,   323,    69,    57,   220,
     229,   210,   332,   218,   211,   334,   335,   323,   218,   222,
     335,   206,   323,   221,   212,   213,   214,   215,   216,   336,
     337,   338,   222,   337,   206,   218,   206,   323
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   223,   224,   225,   225,   225,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   228,   228,   228,   228,   228,   229,   229,   230,
     231,   231,   232,   232,   233,   233,   233,   234,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   236,   236,   237,
     237,   237,   237,   237,   237,   238,   239,   240,   241,   241,
     242,   242,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   244,   244,   245,   245,   246,   246,   246,
     246,   246,   247,   248,   248,   249,   249,   249,   249,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   251,   251,
     252,   252,   252,   253,   253,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   256,   256,   257,
     257,   258,   258,   259,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   263,   263,   263,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   265,   265,   266,   267,   267,   267,   268,
     268,   269,   270,   270,   270,   270,   270,   270,   270,   270,
     271,   272,   272,   273,   273,   273,   273,   273,   274,   274,
     274,   275,   275,   275,   275,   276,   277,   277,   278,   279,
     279,   280,   281,   281,   282,   283,   283,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   287,   287,   287,   287,
     288,   288,   288,   288,   288,   288,   289,   290,   290,   291,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   294,   294,   294,   295,
     295,   296,   296,   296,   297,   298,   298,   298,   298,   299,
     299,   299,   300,   300,   301,   302,   302,   303,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   309,   309,   310,
     310,   311,   311,   311,   311,   312,   312,   312,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     317,   317,   318,   318,   319,   320,   320,   321,   321,   322,
     322,   322,   323,   323,   324,   325,   326,   327,   327,   328,
     329,   329,   330,   330,   331,   332,   333,   334,   334,   335,
     336,   336,   337,   338,   338,   338,   338,   338
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     5,     4,     5,     5,     4,     3,     3,     0,
       2,     0,     2,     0,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     2,     1,
       1,     2,     2,     1,     2,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     2,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     2,     4,     1,     1,     4,     1,     0,
       0,     2,     2,     2,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     5,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     5,     1,     3,     2,     3,
       1,     1,     2,     1,     5,     4,     3,     2,     1,     6,
       3,     2,     3,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* command_list: error T_EOC  */
#line 407 "ntp_parser.y"
                {
			/* I will need to incorporate much more fine grained
			 * error messages. The following should suffice for
			 * the time being.
			 */
			struct FILE_INFO * ip_ctx = lex_current();
			msyslog(LOG_ERR,
				"syntax error in %s line %d, column %d",
				ip_ctx->fname,
				ip_ctx->errpos.nline,
				ip_ctx->errpos.ncol);
		}
#line 1937 "ntp_parser.c"
    break;

  case 21: /* server_command: client_type address option_list  */
#line 444 "ntp_parser.y"
                {
			peer_node *my_node;

			my_node = create_peer_node((yyvsp[-2].Integer), (yyvsp[-1].Address_node), (yyvsp[0].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.peers, my_node);
		}
#line 1948 "ntp_parser.c"
    break;

  case 28: /* address: address_fam T_String  */
#line 463 "ntp_parser.y"
                        { (yyval.Address_node) = create_address_node((yyvsp[0].String), (yyvsp[-1].Integer)); }
#line 1954 "ntp_parser.c"
    break;

  case 29: /* ip_address: T_String  */
#line 468 "ntp_parser.y"
                        { (yyval.Address_node) = create_address_node((yyvsp[0].String), AF_UNSPEC); }
#line 1960 "ntp_parser.c"
    break;

  case 30: /* address_fam: T_Ipv4_flag  */
#line 473 "ntp_parser.y"
                        { (yyval.Integer) = AF_INET; }
#line 1966 "ntp_parser.c"
    break;

  case 31: /* address_fam: T_Ipv6_flag  */
#line 475 "ntp_parser.y"
                        { (yyval.Integer) = AF_INET6; }
#line 1972 "ntp_parser.c"
    break;

  case 32: /* option_list: %empty  */
#line 480 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 1978 "ntp_parser.c"
    break;

  case 33: /* option_list: option_list option  */
#line 482 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 1987 "ntp_parser.c"
    break;

  case 37: /* option_flag: option_flag_keyword  */
#line 496 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[0].Integer)); }
#line 1993 "ntp_parser.c"
    break;

  case 47: /* option_int: option_int_keyword T_Integer  */
#line 513 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 1999 "ntp_parser.c"
    break;

  case 48: /* option_int: option_int_keyword T_U_int  */
#line 515 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_uval((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 2005 "ntp_parser.c"
    break;

  case 55: /* option_str: option_str_keyword T_String  */
#line 529 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String)); }
#line 2011 "ntp_parser.c"
    break;

  case 57: /* unpeer_command: unpeer_keyword address  */
#line 543 "ntp_parser.y"
                {
			unpeer_node *my_node;

			my_node = create_unpeer_node((yyvsp[0].Address_node));
			if (my_node)
				APPEND_G_FIFO(cfgt.unpeers, my_node);
		}
#line 2023 "ntp_parser.c"
    break;

  case 60: /* other_mode_command: T_Broadcastclient  */
#line 564 "ntp_parser.y"
                        { cfgt.broadcastclient = 1; }
#line 2029 "ntp_parser.c"
    break;

  case 61: /* other_mode_command: T_Manycastserver address_list  */
#line 566 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.manycastserver, (yyvsp[0].Address_fifo)); }
#line 2035 "ntp_parser.c"
    break;

  case 62: /* other_mode_command: T_Multicastclient address_list  */
#line 568 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.multicastclient, (yyvsp[0].Address_fifo)); }
#line 2041 "ntp_parser.c"
    break;

  case 63: /* other_mode_command: T_Mdnstries T_Integer  */
#line 570 "ntp_parser.y"
                        { cfgt.mdnstries = (yyvsp[0].Integer); }
#line 2047 "ntp_parser.c"
    break;

  case 64: /* authentication_command: T_Automax T_Integer  */
#line 581 "ntp_parser.y"
                {
			attr_val *atrv;

			atrv = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer));
			APPEND_G_FIFO(cfgt.vars, atrv);
		}
#line 2058 "ntp_parser.c"
    break;

  case 65: /* authentication_command: T_ControlKey T_Integer  */
#line 588 "ntp_parser.y"
                        { cfgt.auth.control_key = (yyvsp[0].Integer); }
#line 2064 "ntp_parser.c"
    break;

  case 66: /* authentication_command: T_Crypto crypto_command_list  */
#line 590 "ntp_parser.y"
                {
			cfgt.auth.cryptosw++;
			CONCAT_G_FIFOS(cfgt.auth.crypto_cmd_list, (yyvsp[0].Attr_val_fifo));
		}
#line 2073 "ntp_parser.c"
    break;

  case 67: /* authentication_command: T_Keys T_String  */
#line 595 "ntp_parser.y"
                        { cfgt.auth.keys = (yyvsp[0].String); }
#line 2079 "ntp_parser.c"
    break;

  case 68: /* authentication_command: T_Keysdir T_String  */
#line 597 "ntp_parser.y"
                        { cfgt.auth.keysdir = (yyvsp[0].String); }
#line 2085 "ntp_parser.c"
    break;

  case 69: /* authentication_command: T_Requestkey T_Integer  */
#line 599 "ntp_parser.y"
                        { cfgt.auth.request_key = (yyvsp[0].Integer); }
#line 2091 "ntp_parser.c"
    break;

  case 70: /* authentication_command: T_Revoke T_Integer  */
#line 601 "ntp_parser.y"
                        { cfgt.auth.revoke = (yyvsp[0].Integer); }
#line 2097 "ntp_parser.c"
    break;

  case 71: /* authentication_command: T_Trustedkey integer_list_range  */
#line 603 "ntp_parser.y"
                {
			/* [Bug 948] leaves it open if appending or
			 * replacing the trusted key list is the right
			 * way. In any case, either alternative should
			 * be coded correctly!
			 */
			DESTROY_G_FIFO(cfgt.auth.trusted_key_list, destroy_attr_val); /* remove for append */
			CONCAT_G_FIFOS(cfgt.auth.trusted_key_list, (yyvsp[0].Attr_val_fifo));
		}
#line 2111 "ntp_parser.c"
    break;

  case 72: /* authentication_command: T_NtpSignDsocket T_String  */
#line 613 "ntp_parser.y"
                        { cfgt.auth.ntp_signd_socket = (yyvsp[0].String); }
#line 2117 "ntp_parser.c"
    break;

  case 73: /* crypto_command_list: %empty  */
#line 618 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 2123 "ntp_parser.c"
    break;

  case 74: /* crypto_command_list: crypto_command_list crypto_command  */
#line 620 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2132 "ntp_parser.c"
    break;

  case 75: /* crypto_command: crypto_str_keyword T_String  */
#line 628 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String)); }
#line 2138 "ntp_parser.c"
    break;

  case 76: /* crypto_command: T_Revoke T_Integer  */
#line 630 "ntp_parser.y"
                {
			(yyval.Attr_val) = NULL;
			cfgt.auth.revoke = (yyvsp[0].Integer);
			msyslog(LOG_WARNING,
				"'crypto revoke %d' is deprecated, "
				"please use 'revoke %d' instead.",
				cfgt.auth.revoke, cfgt.auth.revoke);
		}
#line 2151 "ntp_parser.c"
    break;

  case 82: /* orphan_mode_command: T_Tos tos_option_list  */
#line 655 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.orphan_cmds, (yyvsp[0].Attr_val_fifo)); }
#line 2157 "ntp_parser.c"
    break;

  case 83: /* tos_option_list: tos_option_list tos_option  */
#line 660 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2166 "ntp_parser.c"
    break;

  case 84: /* tos_option_list: tos_option  */
#line 665 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2175 "ntp_parser.c"
    break;

  case 85: /* tos_option: tos_option_int_keyword T_Integer  */
#line 673 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-1].Integer), (double)(yyvsp[0].Integer)); }
#line 2181 "ntp_parser.c"
    break;

  case 86: /* tos_option: tos_option_dbl_keyword number  */
#line 675 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-1].Integer), (yyvsp[0].Double)); }
#line 2187 "ntp_parser.c"
    break;

  case 87: /* tos_option: T_Cohort boolean  */
#line 677 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-1].Integer), (double)(yyvsp[0].Integer)); }
#line 2193 "ntp_parser.c"
    break;

  case 88: /* tos_option: basedate  */
#line 679 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival(T_Basedate, (yyvsp[0].Integer)); }
#line 2199 "ntp_parser.c"
    break;

  case 100: /* monitoring_command: T_Statistics stats_list  */
#line 706 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.stats_list, (yyvsp[0].Int_fifo)); }
#line 2205 "ntp_parser.c"
    break;

  case 101: /* monitoring_command: T_Statsdir T_String  */
#line 708 "ntp_parser.y"
                {
			if (lex_from_file()) {
				cfgt.stats_dir = (yyvsp[0].String);
			} else {
				YYFREE((yyvsp[0].String));
				yyerror("statsdir remote configuration ignored");
			}
		}
#line 2218 "ntp_parser.c"
    break;

  case 102: /* monitoring_command: T_Filegen stat filegen_option_list  */
#line 717 "ntp_parser.y"
                {
			filegen_node *fgn;

			fgn = create_filegen_node((yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.filegen_opts, fgn);
		}
#line 2229 "ntp_parser.c"
    break;

  case 103: /* stats_list: stats_list stat  */
#line 727 "ntp_parser.y"
                {
			(yyval.Int_fifo) = (yyvsp[-1].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 2238 "ntp_parser.c"
    break;

  case 104: /* stats_list: stat  */
#line 732 "ntp_parser.y"
                {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 2247 "ntp_parser.c"
    break;

  case 113: /* filegen_option_list: %empty  */
#line 751 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 2253 "ntp_parser.c"
    break;

  case 114: /* filegen_option_list: filegen_option_list filegen_option  */
#line 753 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2262 "ntp_parser.c"
    break;

  case 115: /* filegen_option: T_File T_String  */
#line 761 "ntp_parser.y"
                {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String));
			} else {
				(yyval.Attr_val) = NULL;
				YYFREE((yyvsp[0].String));
				yyerror("filegen file remote config ignored");
			}
		}
#line 2276 "ntp_parser.c"
    break;

  case 116: /* filegen_option: T_Type filegen_type  */
#line 771 "ntp_parser.y"
                {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				yyerror("filegen type remote config ignored");
			}
		}
#line 2289 "ntp_parser.c"
    break;

  case 117: /* filegen_option: link_nolink  */
#line 780 "ntp_parser.y"
                {
			const char *err;

			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[0].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				if (T_Link == (yyvsp[0].Integer))
					err = "filegen link remote config ignored";
				else
					err = "filegen nolink remote config ignored";
				yyerror(err);
			}
		}
#line 2308 "ntp_parser.c"
    break;

  case 118: /* filegen_option: enable_disable  */
#line 795 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[0].Integer)); }
#line 2314 "ntp_parser.c"
    break;

  case 130: /* access_control_command: T_Discard discard_option_list  */
#line 825 "ntp_parser.y"
                {
			CONCAT_G_FIFOS(cfgt.discard_opts, (yyvsp[0].Attr_val_fifo));
		}
#line 2322 "ntp_parser.c"
    break;

  case 131: /* access_control_command: T_Mru mru_option_list  */
#line 829 "ntp_parser.y"
                {
			CONCAT_G_FIFOS(cfgt.mru_opts, (yyvsp[0].Attr_val_fifo));
		}
#line 2330 "ntp_parser.c"
    break;

  case 132: /* access_control_command: T_Restrict address restrict_mask res_ippeerlimit ac_flag_list  */
#line 833 "ntp_parser.y"
                {
			restrict_node *rn;

			rn = create_restrict_node((yyvsp[-3].Address_node), (yyvsp[-2].Address_node), (yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo), FALSE,
						  lex_current()->curpos.nline,
						  lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2343 "ntp_parser.c"
    break;

  case 133: /* access_control_command: T_Restrict T_Default res_ippeerlimit ac_flag_list  */
#line 842 "ntp_parser.y"
                {
			restrict_node *rn;

			rn = create_restrict_node(NULL, NULL, (yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo), FALSE,
						  lex_current()->curpos.nline,
						  lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2356 "ntp_parser.c"
    break;

  case 134: /* access_control_command: T_Restrict T_Ipv4_flag T_Default res_ippeerlimit ac_flag_list  */
#line 851 "ntp_parser.y"
                {
			restrict_node *rn;

			rn = create_restrict_node(
				create_address_node(
					estrdup("0.0.0.0"),
					AF_INET),
				create_address_node(
					estrdup("0.0.0.0"),
					AF_INET),
				(yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo), FALSE,
				lex_current()->curpos.nline,
				lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2376 "ntp_parser.c"
    break;

  case 135: /* access_control_command: T_Restrict T_Ipv6_flag T_Default res_ippeerlimit ac_flag_list  */
#line 867 "ntp_parser.y"
                {
			restrict_node *rn;

			rn = create_restrict_node(
				create_address_node(
					estrdup("::"),
					AF_INET6),
				create_address_node(
					estrdup("::"),
					AF_INET6),
				(yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo), FALSE,
				lex_current()->curpos.nline,
				lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2396 "ntp_parser.c"
    break;

  case 136: /* access_control_command: T_Restrict T_Source res_ippeerlimit ac_flag_list  */
#line 883 "ntp_parser.y"
                {
			restrict_node *	rn;

			APPEND_G_FIFO((yyvsp[0].Attr_val_fifo), create_attr_ival((yyvsp[-2].Integer), 1));
			rn = create_restrict_node(NULL, NULL, (yyvsp[-1].Integer), (yyvsp[0].Attr_val_fifo), FALSE,
						  lex_current()->curpos.nline,
						  lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2410 "ntp_parser.c"
    break;

  case 137: /* access_control_command: T_Delrestrict ip_address restrict_mask  */
#line 893 "ntp_parser.y"
                {
			restrict_node *	rn;

			rn = create_restrict_node((yyvsp[-1].Address_node), (yyvsp[0].Address_node), -1, NULL, TRUE,
						  lex_current()->curpos.nline,
						  lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2423 "ntp_parser.c"
    break;

  case 138: /* access_control_command: T_Delrestrict T_Source ip_address  */
#line 902 "ntp_parser.y"
                {
			restrict_node *	rn;
			attr_val_fifo * avf;

			avf = NULL;
			APPEND_G_FIFO(avf, create_attr_ival((yyvsp[-1].Integer), 1));
			rn = create_restrict_node((yyvsp[0].Address_node), NULL, -1, avf, TRUE,
						  lex_current()->curpos.nline,
						  lex_current()->curpos.ncol);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
#line 2439 "ntp_parser.c"
    break;

  case 139: /* restrict_mask: %empty  */
#line 917 "ntp_parser.y"
                        { (yyval.Address_node) = NULL; }
#line 2445 "ntp_parser.c"
    break;

  case 140: /* restrict_mask: T_Mask ip_address  */
#line 919 "ntp_parser.y"
                {
			(yyval.Address_node) = (yyvsp[0].Address_node);
		}
#line 2453 "ntp_parser.c"
    break;

  case 141: /* res_ippeerlimit: %empty  */
#line 926 "ntp_parser.y"
                        { (yyval.Integer) = -1; }
#line 2459 "ntp_parser.c"
    break;

  case 142: /* res_ippeerlimit: T_Ippeerlimit T_Integer  */
#line 928 "ntp_parser.y"
                {
			if (((yyvsp[0].Integer) < -1) || ((yyvsp[0].Integer) > 100)) {
				struct FILE_INFO * ip_ctx;

				ip_ctx = lex_current();
				msyslog(LOG_ERR,
					"Unreasonable ippeerlimit value (%d) in %s line %d, column %d.  Using 0.",
					(yyvsp[0].Integer),
					ip_ctx->fname,
					ip_ctx->curpos.nline,
					ip_ctx->curpos.ncol);
				(yyvsp[0].Integer) = 0;
			}
			(yyval.Integer) = (yyvsp[0].Integer);
		}
#line 2479 "ntp_parser.c"
    break;

  case 143: /* ac_flag_list: %empty  */
#line 947 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 2485 "ntp_parser.c"
    break;

  case 144: /* ac_flag_list: ac_flag_list access_control_flag  */
#line 949 "ntp_parser.y"
                {
			attr_val *av;

			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			av = create_attr_ival((yyvsp[0].Integer), 1);
			APPEND_G_FIFO((yyval.Attr_val_fifo), av);
		}
#line 2497 "ntp_parser.c"
    break;

  case 145: /* ac_flag_list: ac_flag_list T_Serverresponse T_Fuzz  */
#line 957 "ntp_parser.y"
                {
			attr_val *av;

			(yyval.Attr_val_fifo) = (yyvsp[-2].Attr_val_fifo);
			av = create_attr_ival(T_ServerresponseFuzz, 1);
			APPEND_G_FIFO((yyval.Attr_val_fifo), av);
		}
#line 2509 "ntp_parser.c"
    break;

  case 163: /* discard_option_list: discard_option_list discard_option  */
#line 988 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2518 "ntp_parser.c"
    break;

  case 164: /* discard_option_list: discard_option  */
#line 993 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2527 "ntp_parser.c"
    break;

  case 165: /* discard_option: discard_option_keyword T_Integer  */
#line 1001 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 2533 "ntp_parser.c"
    break;

  case 169: /* mru_option_list: mru_option_list mru_option  */
#line 1012 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2542 "ntp_parser.c"
    break;

  case 170: /* mru_option_list: mru_option  */
#line 1017 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2551 "ntp_parser.c"
    break;

  case 171: /* mru_option: mru_option_keyword T_Integer  */
#line 1025 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 2557 "ntp_parser.c"
    break;

  case 180: /* fudge_command: T_Fudge address fudge_factor_list  */
#line 1045 "ntp_parser.y"
                {
			addr_opts_node *aon;

			aon = create_addr_opts_node((yyvsp[-1].Address_node), (yyvsp[0].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.fudge, aon);
		}
#line 2568 "ntp_parser.c"
    break;

  case 181: /* fudge_factor_list: fudge_factor_list fudge_factor  */
#line 1055 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2577 "ntp_parser.c"
    break;

  case 182: /* fudge_factor_list: fudge_factor  */
#line 1060 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2586 "ntp_parser.c"
    break;

  case 183: /* fudge_factor: fudge_factor_dbl_keyword number  */
#line 1068 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-1].Integer), (yyvsp[0].Double)); }
#line 2592 "ntp_parser.c"
    break;

  case 184: /* fudge_factor: fudge_factor_bool_keyword boolean  */
#line 1070 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 2598 "ntp_parser.c"
    break;

  case 185: /* fudge_factor: T_Stratum T_Integer  */
#line 1072 "ntp_parser.y"
                {
			if ((yyvsp[0].Integer) >= 0 && (yyvsp[0].Integer) <= 16) {
				(yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				yyerror("fudge factor: stratum value not in [0..16], ignored");
			}
		}
#line 2611 "ntp_parser.c"
    break;

  case 186: /* fudge_factor: T_Abbrev T_String  */
#line 1081 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String)); }
#line 2617 "ntp_parser.c"
    break;

  case 187: /* fudge_factor: T_Refid T_String  */
#line 1083 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String)); }
#line 2623 "ntp_parser.c"
    break;

  case 195: /* device_command: T_Device address device_item_list  */
#line 1105 "ntp_parser.y"
                {
			addr_opts_node *aon;

			aon = create_addr_opts_node((yyvsp[-1].Address_node), (yyvsp[0].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.device, aon);
		}
#line 2634 "ntp_parser.c"
    break;

  case 196: /* device_item_list: device_item_list device_item  */
#line 1115 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2643 "ntp_parser.c"
    break;

  case 197: /* device_item_list: device_item  */
#line 1120 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2652 "ntp_parser.c"
    break;

  case 198: /* device_item: device_item_path_keyword T_String  */
#line 1128 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String)); }
#line 2658 "ntp_parser.c"
    break;

  case 201: /* rlimit_command: T_Rlimit rlimit_option_list  */
#line 1142 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.rlimit, (yyvsp[0].Attr_val_fifo)); }
#line 2664 "ntp_parser.c"
    break;

  case 202: /* rlimit_option_list: rlimit_option_list rlimit_option  */
#line 1147 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2673 "ntp_parser.c"
    break;

  case 203: /* rlimit_option_list: rlimit_option  */
#line 1152 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2682 "ntp_parser.c"
    break;

  case 204: /* rlimit_option: rlimit_option_keyword T_Integer  */
#line 1160 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 2688 "ntp_parser.c"
    break;

  case 208: /* system_option_command: T_Enable system_option_list  */
#line 1176 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.enable_opts, (yyvsp[0].Attr_val_fifo)); }
#line 2694 "ntp_parser.c"
    break;

  case 209: /* system_option_command: T_Disable system_option_list  */
#line 1178 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.disable_opts, (yyvsp[0].Attr_val_fifo)); }
#line 2700 "ntp_parser.c"
    break;

  case 210: /* system_option_list: system_option_list system_option  */
#line 1183 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2709 "ntp_parser.c"
    break;

  case 211: /* system_option_list: system_option  */
#line 1188 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2718 "ntp_parser.c"
    break;

  case 212: /* system_option: system_option_flag_keyword  */
#line 1196 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[0].Integer)); }
#line 2724 "ntp_parser.c"
    break;

  case 213: /* system_option: system_option_local_flag_keyword  */
#line 1198 "ntp_parser.y"
                {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[0].Integer));
			} else {
				char err_str[128];

				(yyval.Attr_val) = NULL;
				snprintf(err_str, sizeof(err_str),
					 "enable/disable %s remote configuration ignored",
					 keyword((yyvsp[0].Integer)));
				yyerror(err_str);
			}
		}
#line 2742 "ntp_parser.c"
    break;

  case 226: /* tinker_command: T_Tinker tinker_option_list  */
#line 1237 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.tinker, (yyvsp[0].Attr_val_fifo)); }
#line 2748 "ntp_parser.c"
    break;

  case 227: /* tinker_option_list: tinker_option_list tinker_option  */
#line 1242 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2757 "ntp_parser.c"
    break;

  case 228: /* tinker_option_list: tinker_option  */
#line 1247 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 2766 "ntp_parser.c"
    break;

  case 229: /* tinker_option: tinker_option_keyword number  */
#line 1255 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-1].Integer), (yyvsp[0].Double)); }
#line 2772 "ntp_parser.c"
    break;

  case 242: /* miscellaneous_command: misc_cmd_dbl_keyword number  */
#line 1280 "ntp_parser.y"
                {
			attr_val *av;

			av = create_attr_dval((yyvsp[-1].Integer), (yyvsp[0].Double));
			APPEND_G_FIFO(cfgt.vars, av);
		}
#line 2783 "ntp_parser.c"
    break;

  case 243: /* miscellaneous_command: misc_cmd_int_keyword T_Integer  */
#line 1287 "ntp_parser.y"
                {
			attr_val *av;

			av = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer));
			APPEND_G_FIFO(cfgt.vars, av);
		}
#line 2794 "ntp_parser.c"
    break;

  case 244: /* miscellaneous_command: misc_cmd_str_keyword T_String  */
#line 1294 "ntp_parser.y"
                {
			attr_val *av;

			av = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String));
			APPEND_G_FIFO(cfgt.vars, av);
		}
#line 2805 "ntp_parser.c"
    break;

  case 245: /* miscellaneous_command: misc_cmd_str_lcl_keyword T_String  */
#line 1301 "ntp_parser.y"
                {
			char error_text[64];
			attr_val *av;

			if (lex_from_file()) {
				av = create_attr_sval((yyvsp[-1].Integer), (yyvsp[0].String));
				APPEND_G_FIFO(cfgt.vars, av);
			} else {
				YYFREE((yyvsp[0].String));
				snprintf(error_text, sizeof(error_text),
					 "%s remote config ignored",
					 keyword((yyvsp[-1].Integer)));
				yyerror(error_text);
			}
		}
#line 2825 "ntp_parser.c"
    break;

  case 246: /* miscellaneous_command: T_Includefile T_String command  */
#line 1317 "ntp_parser.y"
                {
			if (!lex_from_file()) {
				YYFREE((yyvsp[-1].String)); /* avoid leak */
				yyerror("remote includefile ignored");
				break;
			}
			if (lex_level() > MAXINCLUDELEVEL) {
				fprintf(stderr, "getconfig: Maximum include file level exceeded.\n");
				msyslog(LOG_ERR, "getconfig: Maximum include file level exceeded.");
			} else {
				const char * path = FindConfig((yyvsp[-1].String)); /* might return $2! */
				if (!lex_push_file(path, "r")) {
					fprintf(stderr, "getconfig: Couldn't open <%s>\n", path);
					msyslog(LOG_ERR, "getconfig: Couldn't open <%s>", path);
				}
			}
			YYFREE((yyvsp[-1].String)); /* avoid leak */
		}
#line 2848 "ntp_parser.c"
    break;

  case 247: /* miscellaneous_command: T_Leapfile T_String opt_hash_check  */
#line 1336 "ntp_parser.y"
                {
			attr_val *av;

			av = create_attr_sval((yyvsp[-2].Integer), (yyvsp[-1].String));
			av->flag = (yyvsp[0].Integer);
			APPEND_G_FIFO(cfgt.vars, av);
		}
#line 2860 "ntp_parser.c"
    break;

  case 248: /* miscellaneous_command: T_End  */
#line 1344 "ntp_parser.y"
                        { lex_flush_stack(); }
#line 2866 "ntp_parser.c"
    break;

  case 249: /* miscellaneous_command: T_Driftfile drift_parm  */
#line 1346 "ntp_parser.y"
                        { /* see drift_parm below for actions */ }
#line 2872 "ntp_parser.c"
    break;

  case 250: /* miscellaneous_command: T_Logconfig log_config_list  */
#line 1348 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.logconfig, (yyvsp[0].Attr_val_fifo)); }
#line 2878 "ntp_parser.c"
    break;

  case 251: /* miscellaneous_command: T_Phone string_list  */
#line 1350 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.phone, (yyvsp[0].String_fifo)); }
#line 2884 "ntp_parser.c"
    break;

  case 252: /* miscellaneous_command: T_PollSkewList pollskew_list  */
#line 1352 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.pollskewlist, (yyvsp[0].Attr_val_fifo)); }
#line 2890 "ntp_parser.c"
    break;

  case 253: /* miscellaneous_command: T_Setvar variable_assign  */
#line 1354 "ntp_parser.y"
                        { APPEND_G_FIFO(cfgt.setvar, (yyvsp[0].Set_var)); }
#line 2896 "ntp_parser.c"
    break;

  case 254: /* miscellaneous_command: T_Trap ip_address trap_option_list  */
#line 1356 "ntp_parser.y"
                {
			addr_opts_node *aon;

			aon = create_addr_opts_node((yyvsp[-1].Address_node), (yyvsp[0].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.trap, aon);
		}
#line 2907 "ntp_parser.c"
    break;

  case 255: /* miscellaneous_command: T_Ttl integer_list  */
#line 1363 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.ttl, (yyvsp[0].Attr_val_fifo)); }
#line 2913 "ntp_parser.c"
    break;

  case 260: /* misc_cmd_int_keyword: T_Leapsmearinterval  */
#line 1378 "ntp_parser.y"
                {
#ifndef LEAP_SMEAR
			yyerror("Built without LEAP_SMEAR support.");
#endif
		}
#line 2923 "ntp_parser.c"
    break;

  case 261: /* opt_hash_check: T_Ignorehash  */
#line 1387 "ntp_parser.y"
                        { (yyval.Integer) = FALSE; }
#line 2929 "ntp_parser.c"
    break;

  case 262: /* opt_hash_check: T_Checkhash  */
#line 1389 "ntp_parser.y"
                        { (yyval.Integer) = TRUE; }
#line 2935 "ntp_parser.c"
    break;

  case 263: /* opt_hash_check: %empty  */
#line 1391 "ntp_parser.y"
                        {  (yyval.Integer) = TRUE; }
#line 2941 "ntp_parser.c"
    break;

  case 269: /* drift_parm: T_String  */
#line 1407 "ntp_parser.y"
                {
			if (lex_from_file()) {
				attr_val *av;
				av = create_attr_sval(T_Driftfile, (yyvsp[0].String));
				APPEND_G_FIFO(cfgt.vars, av);
			} else {
				YYFREE((yyvsp[0].String));
				yyerror("driftfile remote configuration ignored");
			}
		}
#line 2956 "ntp_parser.c"
    break;

  case 270: /* drift_parm: T_String T_Double  */
#line 1418 "ntp_parser.y"
                {
			if (lex_from_file()) {
				attr_val *av;
				av = create_attr_sval(T_Driftfile, (yyvsp[-1].String));
				APPEND_G_FIFO(cfgt.vars, av);
				av = create_attr_dval(T_WanderThreshold, (yyvsp[0].Double));
				APPEND_G_FIFO(cfgt.vars, av);
			msyslog(LOG_WARNING,
				"'driftfile FILENAME WanderValue' is deprecated, "
				"please use separate 'driftfile FILENAME' and "
				"'nonvolatile WanderValue' lines instead.");
			} else {
				YYFREE((yyvsp[-1].String));
				yyerror("driftfile remote configuration ignored");
			}
		}
#line 2977 "ntp_parser.c"
    break;

  case 271: /* drift_parm: %empty  */
#line 1435 "ntp_parser.y"
                {
			if (lex_from_file()) {
				attr_val *av;
				av = create_attr_sval(T_Driftfile, estrdup(""));
				APPEND_G_FIFO(cfgt.vars, av);
			} else {
				yyerror("driftfile remote configuration ignored");
			}
		}
#line 2991 "ntp_parser.c"
    break;

  case 272: /* pollskew_list: %empty  */
#line 1448 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 2997 "ntp_parser.c"
    break;

  case 273: /* pollskew_list: pollskew_list pollskew_spec  */
#line 1450 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = append_gen_fifo((yyvsp[-1].Attr_val_fifo), (yyvsp[0].Attr_val)); }
#line 3003 "ntp_parser.c"
    break;

  case 274: /* pollskew_spec: pollskew_cycle T_Integer '|' T_Integer  */
#line 1455 "ntp_parser.y"
                {
			if ((yyvsp[-2].Integer) < 0 || (yyvsp[0].Integer) < 0) {
				/* bad numbers */
				yyerror("pollskewlist: skew values must be >=0");
				destroy_attr_val((yyvsp[-3].Attr_val));
				(yyvsp[-3].Attr_val) = NULL;
			} else if ((yyvsp[-3].Attr_val) == NULL) {
				yyerror("pollskewlist: poll value must be 3-17, inclusive");
			} else if ((yyvsp[-3].Attr_val)->attr <= 0) {
				/* process default range */
				(yyvsp[-3].Attr_val)->value.r.first = (yyvsp[-2].Integer);
				(yyvsp[-3].Attr_val)->value.r.last  = (yyvsp[0].Integer);
			} else if ((yyvsp[-2].Integer) < (1 << ((yyvsp[-3].Attr_val)->attr - 1)) && (yyvsp[0].Integer) < (1 << ((yyvsp[-3].Attr_val)->attr - 1))) {
				(yyvsp[-3].Attr_val)->value.r.first = (yyvsp[-2].Integer);
				(yyvsp[-3].Attr_val)->value.r.last  = (yyvsp[0].Integer);
			} else {
				yyerror("pollskewlist: randomization limit must be <= half the poll interval");
				destroy_attr_val((yyvsp[-3].Attr_val));
				(yyvsp[-3].Attr_val) = NULL;
			}
			(yyval.Attr_val) = (yyvsp[-3].Attr_val);
		}
#line 3030 "ntp_parser.c"
    break;

  case 275: /* pollskew_cycle: T_Integer  */
#line 1481 "ntp_parser.y"
                { 
			(yyval.Attr_val) = ((yyvsp[0].Integer) >= NTP_MINPOLL && (yyvsp[0].Integer) <= NTP_MAXPOLL) 
				? create_attr_rval((yyvsp[0].Integer), 0, 0) 
				: NULL;
		}
#line 3040 "ntp_parser.c"
    break;

  case 276: /* pollskew_cycle: T_Default  */
#line 1486 "ntp_parser.y"
                          { (yyval.Attr_val) = create_attr_rval(-1, 0, 0); }
#line 3046 "ntp_parser.c"
    break;

  case 277: /* variable_assign: T_String '=' T_String t_default_or_zero  */
#line 1492 "ntp_parser.y"
                        { (yyval.Set_var) = create_setvar_node((yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].Integer)); }
#line 3052 "ntp_parser.c"
    break;

  case 279: /* t_default_or_zero: %empty  */
#line 1498 "ntp_parser.y"
                        { (yyval.Integer) = 0; }
#line 3058 "ntp_parser.c"
    break;

  case 280: /* trap_option_list: %empty  */
#line 1503 "ntp_parser.y"
                        { (yyval.Attr_val_fifo) = NULL; }
#line 3064 "ntp_parser.c"
    break;

  case 281: /* trap_option_list: trap_option_list trap_option  */
#line 1505 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 3073 "ntp_parser.c"
    break;

  case 282: /* trap_option: T_Port T_Integer  */
#line 1513 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival((yyvsp[-1].Integer), (yyvsp[0].Integer)); }
#line 3079 "ntp_parser.c"
    break;

  case 283: /* trap_option: T_Interface ip_address  */
#line 1515 "ntp_parser.y"
                {
			(yyval.Attr_val) = create_attr_sval((yyvsp[-1].Integer), estrdup((yyvsp[0].Address_node)->address));
			destroy_address_node((yyvsp[0].Address_node));
		}
#line 3088 "ntp_parser.c"
    break;

  case 284: /* log_config_list: log_config_list log_config_command  */
#line 1523 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 3097 "ntp_parser.c"
    break;

  case 285: /* log_config_list: log_config_command  */
#line 1528 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 3106 "ntp_parser.c"
    break;

  case 286: /* log_config_command: T_String  */
#line 1536 "ntp_parser.y"
                {
			char	prefix;
			char *	type;

			switch ((yyvsp[0].String)[0]) {

			case '+':
			case '-':
			case '=':
				prefix = (yyvsp[0].String)[0];
				type = (yyvsp[0].String) + 1;
				break;

			default:
				prefix = '=';
				type = (yyvsp[0].String);
			}

			(yyval.Attr_val) = create_attr_sval(prefix, estrdup(type));
			YYFREE((yyvsp[0].String));
		}
#line 3132 "ntp_parser.c"
    break;

  case 287: /* interface_command: interface_nic nic_rule_action nic_rule_class  */
#line 1561 "ntp_parser.y"
                {
			nic_rule_node *nrn;

			nrn = create_nic_rule_node((yyvsp[0].Integer), NULL, (yyvsp[-1].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
#line 3143 "ntp_parser.c"
    break;

  case 288: /* interface_command: interface_nic nic_rule_action T_String  */
#line 1568 "ntp_parser.y"
                {
			nic_rule_node *nrn;

			nrn = create_nic_rule_node(0, (yyvsp[0].String), (yyvsp[-1].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
#line 3154 "ntp_parser.c"
    break;

  case 298: /* reset_command: T_Reset counter_set_list  */
#line 1596 "ntp_parser.y"
                        { CONCAT_G_FIFOS(cfgt.reset_counters, (yyvsp[0].Int_fifo)); }
#line 3160 "ntp_parser.c"
    break;

  case 299: /* counter_set_list: counter_set_list counter_set_keyword  */
#line 1601 "ntp_parser.y"
                {
			(yyval.Int_fifo) = (yyvsp[-1].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 3169 "ntp_parser.c"
    break;

  case 300: /* counter_set_list: counter_set_keyword  */
#line 1606 "ntp_parser.y"
                {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 3178 "ntp_parser.c"
    break;

  case 308: /* integer_list: integer_list T_Integer  */
#line 1630 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 3187 "ntp_parser.c"
    break;

  case 309: /* integer_list: T_Integer  */
#line 1635 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[0].Integer)));
		}
#line 3196 "ntp_parser.c"
    break;

  case 310: /* integer_list_range: integer_list_range integer_list_range_elt  */
#line 1643 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-1].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 3205 "ntp_parser.c"
    break;

  case 311: /* integer_list_range: integer_list_range_elt  */
#line 1648 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[0].Attr_val));
		}
#line 3214 "ntp_parser.c"
    break;

  case 312: /* integer_list_range_elt: T_Integer  */
#line 1656 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_ival('i', (yyvsp[0].Integer)); }
#line 3220 "ntp_parser.c"
    break;

  case 314: /* integer_range: '(' T_Integer T_Ellipsis T_Integer ')'  */
#line 1662 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_rval('-', (yyvsp[-3].Integer), (yyvsp[-1].Integer)); }
#line 3226 "ntp_parser.c"
    break;

  case 315: /* string_list: string_list T_String  */
#line 1667 "ntp_parser.y"
                {
			(yyval.String_fifo) = (yyvsp[-1].String_fifo);
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[0].String)));
		}
#line 3235 "ntp_parser.c"
    break;

  case 316: /* string_list: T_String  */
#line 1672 "ntp_parser.y"
                {
			(yyval.String_fifo) = NULL;
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[0].String)));
		}
#line 3244 "ntp_parser.c"
    break;

  case 317: /* address_list: address_list address  */
#line 1680 "ntp_parser.y"
                {
			(yyval.Address_fifo) = (yyvsp[-1].Address_fifo);
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[0].Address_node));
		}
#line 3253 "ntp_parser.c"
    break;

  case 318: /* address_list: address  */
#line 1685 "ntp_parser.y"
                {
			(yyval.Address_fifo) = NULL;
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[0].Address_node));
		}
#line 3262 "ntp_parser.c"
    break;

  case 319: /* boolean: T_Integer  */
#line 1693 "ntp_parser.y"
                {
			if ((yyvsp[0].Integer) != 0 && (yyvsp[0].Integer) != 1) {
				yyerror("Integer value is not boolean (0 or 1). Assuming 1");
				(yyval.Integer) = 1;
			} else {
				(yyval.Integer) = (yyvsp[0].Integer);
			}
		}
#line 3275 "ntp_parser.c"
    break;

  case 320: /* boolean: T_True  */
#line 1701 "ntp_parser.y"
                        { (yyval.Integer) = 1; }
#line 3281 "ntp_parser.c"
    break;

  case 321: /* boolean: T_False  */
#line 1702 "ntp_parser.y"
                        { (yyval.Integer) = 0; }
#line 3287 "ntp_parser.c"
    break;

  case 322: /* number: T_Integer  */
#line 1706 "ntp_parser.y"
                                { (yyval.Double) = (double)(yyvsp[0].Integer); }
#line 3293 "ntp_parser.c"
    break;

  case 324: /* basedate: T_Basedate T_String  */
#line 1712 "ntp_parser.y"
                        { (yyval.Integer) = basedate_eval_string((yyvsp[0].String)); YYFREE((yyvsp[0].String)); }
#line 3299 "ntp_parser.c"
    break;

  case 325: /* simulate_command: sim_conf_start '{' sim_init_statement_list sim_server_list '}'  */
#line 1720 "ntp_parser.y"
                {
			sim_node *sn;

			sn =  create_sim_node((yyvsp[-2].Attr_val_fifo), (yyvsp[-1].Sim_server_fifo));
			APPEND_G_FIFO(cfgt.sim_details, sn);

			/* Revert from ; to \n for end-of-command */
			old_config_style = 1;
		}
#line 3313 "ntp_parser.c"
    break;

  case 326: /* sim_conf_start: T_Simulate  */
#line 1737 "ntp_parser.y"
                           { old_config_style = 0; }
#line 3319 "ntp_parser.c"
    break;

  case 327: /* sim_init_statement_list: sim_init_statement_list sim_init_statement T_EOC  */
#line 1742 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-2].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[-1].Attr_val));
		}
#line 3328 "ntp_parser.c"
    break;

  case 328: /* sim_init_statement_list: sim_init_statement T_EOC  */
#line 1747 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[-1].Attr_val));
		}
#line 3337 "ntp_parser.c"
    break;

  case 329: /* sim_init_statement: sim_init_keyword '=' number  */
#line 1755 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-2].Integer), (yyvsp[0].Double)); }
#line 3343 "ntp_parser.c"
    break;

  case 332: /* sim_server_list: sim_server_list sim_server  */
#line 1765 "ntp_parser.y"
                {
			(yyval.Sim_server_fifo) = (yyvsp[-1].Sim_server_fifo);
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[0].Sim_server));
		}
#line 3352 "ntp_parser.c"
    break;

  case 333: /* sim_server_list: sim_server  */
#line 1770 "ntp_parser.y"
                {
			(yyval.Sim_server_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[0].Sim_server));
		}
#line 3361 "ntp_parser.c"
    break;

  case 334: /* sim_server: sim_server_name '{' sim_server_offset sim_act_list '}'  */
#line 1778 "ntp_parser.y"
                        { (yyval.Sim_server) = ONLY_SIM(create_sim_server((yyvsp[-4].Address_node), (yyvsp[-2].Double), (yyvsp[-1].Sim_script_fifo))); }
#line 3367 "ntp_parser.c"
    break;

  case 335: /* sim_server_offset: T_Server_Offset '=' number T_EOC  */
#line 1783 "ntp_parser.y"
                        { (yyval.Double) = (yyvsp[-1].Double); }
#line 3373 "ntp_parser.c"
    break;

  case 336: /* sim_server_name: T_Server '=' address  */
#line 1788 "ntp_parser.y"
                        { (yyval.Address_node) = (yyvsp[0].Address_node); }
#line 3379 "ntp_parser.c"
    break;

  case 337: /* sim_act_list: sim_act_list sim_act  */
#line 1793 "ntp_parser.y"
                {
			(yyval.Sim_script_fifo) = (yyvsp[-1].Sim_script_fifo);
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[0].Sim_script));
		}
#line 3388 "ntp_parser.c"
    break;

  case 338: /* sim_act_list: sim_act  */
#line 1798 "ntp_parser.y"
                {
			(yyval.Sim_script_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[0].Sim_script));
		}
#line 3397 "ntp_parser.c"
    break;

  case 339: /* sim_act: T_Duration '=' number '{' sim_act_stmt_list '}'  */
#line 1806 "ntp_parser.y"
                        { (yyval.Sim_script) = ONLY_SIM(create_sim_script_info((yyvsp[-3].Double), (yyvsp[-1].Attr_val_fifo))); }
#line 3403 "ntp_parser.c"
    break;

  case 340: /* sim_act_stmt_list: sim_act_stmt_list sim_act_stmt T_EOC  */
#line 1811 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = (yyvsp[-2].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[-1].Attr_val));
		}
#line 3412 "ntp_parser.c"
    break;

  case 341: /* sim_act_stmt_list: sim_act_stmt T_EOC  */
#line 1816 "ntp_parser.y"
                {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[-1].Attr_val));
		}
#line 3421 "ntp_parser.c"
    break;

  case 342: /* sim_act_stmt: sim_act_keyword '=' number  */
#line 1824 "ntp_parser.y"
                        { (yyval.Attr_val) = create_attr_dval((yyvsp[-2].Integer), (yyvsp[0].Double)); }
#line 3427 "ntp_parser.c"
    break;


#line 3431 "ntp_parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1835 "ntp_parser.y"


void
yyerror(
	const char *msg
	)
{
	int retval;
	struct FILE_INFO * ip_ctx;

	ip_ctx = lex_current();
	ip_ctx->errpos = ip_ctx->tokpos;

	msyslog(LOG_ERR, "line %d column %d %s",
		ip_ctx->errpos.nline, ip_ctx->errpos.ncol, msg);
	if (!lex_from_file()) {
		/* Save the error message in the correct buffer */
		retval = snprintf(remote_config.err_msg + remote_config.err_pos,
				  sizeof remote_config.err_msg - remote_config.err_pos,
				  "column %d %s",
				  ip_ctx->errpos.ncol, msg);

		/* Increment the value of err_pos */
		if (retval > 0)
			remote_config.err_pos += retval;

		/* Increment the number of errors */
		++remote_config.no_errors;
	}
}


/*
 * token_name - convert T_ token integers to text
 *		example: token_name(T_Server) returns "T_Server"
 */
const char *
token_name(
	int token
	)
{
	return yytname[YYTRANSLATE(token)];
}


/* Initial Testing function -- ignore */
#if 0
int main(int argc, char *argv[])
{
	ip_file = FOPEN(argv[1], "r");
	if (!ip_file)
		fprintf(stderr, "ERROR!! Could not open file: %s\n", argv[1]);
	yyparse();
	return 0;
}
#endif

