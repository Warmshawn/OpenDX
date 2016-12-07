/* include/dxconfig.h.  Generated by configure.  */
/* include/dxconfig.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 to use alternate signal argument list in C++ */
/* #undef ALTERNATE_CXX_SIGNAL */

/* Path to the system's Bourne shell. */
#define BSH "/bin/sh"

/* Define to 1 if c++ compiler defines false */
#define CXX_HAS_FALSE 1

/* Define to 1 if c++ compiler defines true */
#define CXX_HAS_TRUE 1

/* Define to 1 to enable distributed DX */
/* #undef DDX */

/* define architecture name */
#define DXD_ARCHNAME "linux"

/* Copyright string placed on splash screen startup. */
#define DXD_COPYRIGHT_STRING "Open Visualization Data Explorer\nMore Info at www.research.ibm.com/dx\nand www.opendx.org\nVersion - 4.4.4"

/* Modification Number */
#define DXD_MODIFICATION 4

/* Release Number */
#define DXD_RELEASE 4

/* Version Number */
#define DXD_VERSION 4

/* Version String Number */
#define DXD_VERSION_STRING "04.4.4000"

/* Architecture exports */
#define DXEXEC_EXP -Wl,-export-dynamic

/* Architecture imports */
/* #undef DXEXEC_IMP */

/* Added arch specific LDFLAGS */
/* #undef DXUI_ALDFLAGS */

/* Define to 1 if you want the new accelerator keys. */
/* #undef DX_NEW_KEYLAYOUT */

/* Define to 1 if you need large arenas on SGI */
/* #undef ENABLE_LARGE_ARENAS */

/* Define to 1 to enable SMP Linux version */
#define ENABLE_SMP_LINUX 0

/* getenv argument requires const */
#define GETENV_ARG const char *

/* Define to 1 if have symbol M_PI */
#define HAS_M_PI 1

/* Define to 1 if have symbol M_SQRT2 */
#define HAS_M_SQRT2 1

/* Define to 1 if have symbol S_ISDIR */
#define HAS_S_ISDIR 1

/* Define to 1 if have symbol sysmp */
/* #undef HAS_sysmp */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <CC/libc.h> header file. */
/* #undef HAVE_CC_LIBC_H */

/* Define to 1 if you have the <CC/osfcn.h> header file. */
/* #undef HAVE_CC_OSFCN_H */

/* Define to 1 if you have the <conio.h> header file. */
/* #undef HAVE_CONIO_H */

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <cygwin/socket.h> header file. */
/* #undef HAVE_CYGWIN_SOCKET_H */

/* Define to 1 if you have the <dfsd.h> header file. */
/* #undef HAVE_DFSD_H */

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the <fstream> header file. */
#define HAVE_FSTREAM 1

/* Define to 1 if you have the <fstream.h> header file. */
/* #undef HAVE_FSTREAM_H */

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <get.h> header file. */
/* #undef HAVE_GET_H */

/* Define to 1 if Windows has XmInit fnct */
/* #undef HAVE_HCLXMINIT */

/* Define to 1 if Windows has XtInit fnct */
/* #undef HAVE_HCLXTINIT */

/* Define to 1 if you have the <hdf/dfsd.h> header file. */
/* #undef HAVE_HDF_DFSD_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <iostream> header file. */
#define HAVE_IOSTREAM 1

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* Define to 1 if you have the CDF libraries */
/* #undef HAVE_LIBCDF */

/* Define to 1 if you have the HDF libraries */
/* #undef HAVE_LIBDF */

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `gen' library (-lgen). */
/* #undef HAVE_LIBGEN */

/* Define to 1 if you have the `GL' library (-lGL). */
#define HAVE_LIBGL 1

/* Define to 1 if you have the `GLU' library (-lGLU). */
#define HAVE_LIBGLU 1

/* Define to 1 if you have the `glwstati' library (-lglwstati). */
/* #undef HAVE_LIBGLWSTATI */

/* Define to 1 if you have the `g++' library (-lg++). */
/* #undef HAVE_LIBG__ */

/* Define to 1 if you have the `hclglu' library (-lhclglu). */
/* #undef HAVE_LIBHCLGLU */

/* Define to 1 if you have the `hclglx' library (-lhclglx). */
/* #undef HAVE_LIBHCLGLX */

/* Define to 1 if you have the `ICE' library (-lICE). */
#define HAVE_LIBICE 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the ImageMagick libraries */
/* #undef HAVE_LIBMAGICK */

/* Define to 1 if you have the NetCDF libraries */
/* #undef HAVE_LIBNETCDF */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `regex' library (-lregex). */
/* #undef HAVE_LIBREGEX */

/* Define to 1 if you have the `REXP' library (-lREXP). */
/* #undef HAVE_LIBREXP */

/* Define to 1 if you have the `SM' library (-lSM). */
#define HAVE_LIBSM 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the TIFF libraries */
/* #undef HAVE_LIBTIFF */

/* Define to 1 if you have the `X11' library (-lX11). */
#define HAVE_LIBX11 1

/* Define to 1 if you have the `Xext' library (-lXext). */
#define HAVE_LIBXEXT 1

/* Define to 1 if you have the `xlib' library (-lxlib). */
/* #undef HAVE_LIBXLIB */

/* Define to 1 if you have the `xlibcon' library (-lxlibcon). */
/* #undef HAVE_LIBXLIBCON */

/* Define to 1 if you have the `Xm' library (-lXm). */
#define HAVE_LIBXM 1

/* Define to 1 if you have the `xmstatic' library (-lxmstatic). */
/* #undef HAVE_LIBXMSTATIC */

/* Define to 1 if you have the `xmstatxt' library (-lxmstatxt). */
/* #undef HAVE_LIBXMSTATXT */

/* Define to 1 if you have the `Xmu' library (-lXmu). */
/* #undef HAVE_LIBXMU */

/* Define to 1 if you have the `Xp' library (-lXp). */
/* #undef HAVE_LIBXP */

/* Define to 1 if you have the xpm libraries */
/* #undef HAVE_LIBXPM */

/* Define to 1 if you have the `Xt' library (-lXt). */
#define HAVE_LIBXT 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `pclose' function. */
#define HAVE_PCLOSE 1

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `rand' function. */
#define HAVE_RAND 1

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if RAND_MAX is in stdlib.h */
#define HAVE_RAND_MAX 1

/* Define to 1 if you have the `regcmp' function. */
/* #undef HAVE_REGCMP */

/* Define to 1 if you have the `regcomp' function. */
#define HAVE_REGCOMP 1

/* Define to 1 if you have the <regexp.h> header file. */
/* #undef HAVE_REGEXP_H */

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `re_comp' function. */
#define HAVE_RE_COMP 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT 1

/* Define to 1 if you have the `shmat' function. */
#define HAVE_SHMAT 1

/* Define to 1 if signal defines SIGBUS */
#define HAVE_SIGBUS 1

/* Define to 1 if signal defines SIGDANGER */
/* #undef HAVE_SIGDANGER */

/* Define to 1 if signal defines SIGKILL */
#define HAVE_SIGKILL 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if signal defines SIGPIPE */
#define HAVE_SIGPIPE 1

/* Define to 1 if signal defines SIGQUIT */
#define HAVE_SIGQUIT 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `spawnvp' function. */
/* #undef HAVE_SPAWNVP */

/* Define to 1 if you have the `srand' function. */
#define HAVE_SRAND 1

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if you have the <sstream> header file. */
#define HAVE_SSTREAM 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcspn' function. */
#define HAVE_STRCSPN 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <stream> header file. */
/* #undef HAVE_STREAM */

/* Define to 1 if you have the <stream.h> header file. */
/* #undef HAVE_STREAM_H */

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `stricmp' function. */
/* #undef HAVE_STRICMP */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrstr' function. */
/* #undef HAVE_STRRSTR */

/* Define to 1 if you have the `strspn' function. */
#define HAVE_STRSPN 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <strstream.h> header file. */
/* #undef HAVE_STRSTREAM_H */

/* Define to 1 if you have the <strstrea.h> header file. */
/* #undef HAVE_STRSTREA_H */

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have systemcfg to check for ncpus */
/* #undef HAVE_SYSCONFIG_NCPUS */

/* Define to 1 if you have the <sysent.h> header file. */
/* #undef HAVE_SYSENT_H */

/* Define to 1 if you have the `sysmp' function. */
/* #undef HAVE_SYSMP */

/* Define to 1 if you have the <sys/bsd_types.h> header file. */
/* #undef HAVE_SYS_BSD_TYPES_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/errno.h> header file. */
#define HAVE_SYS_ERRNO_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ldr.h> header file. */
/* #undef HAVE_SYS_LDR_H */

/* Define to 1 if you have the <sys/m_wait.h> header file. */
/* #undef HAVE_SYS_M_WAIT_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmp.h> header file. */
/* #undef HAVE_SYS_SYSMP_H */

/* Define to 1 if you have the <sys/systemcfg.h> header file. */
/* #undef HAVE_SYS_SYSTEMCFG_H */

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if you have the <types.h> header file. */
/* #undef HAVE_TYPES_H */

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlink' function. */
#define HAVE_UNLINK 1

/* Define to 1 if you have the <values.h> header file. */
#define HAVE_VALUES_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <wait.h> header file. */
#define HAVE_WAIT_H 1

/* Define to 1 if you have the <winbase.h> header file. */
/* #undef HAVE_WINBASE_H */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <wingdi.h> header file. */
/* #undef HAVE_WINGDI_H */

/* Define to 1 if you have the <winioctl.h> header file. */
/* #undef HAVE_WINIOCTL_H */

/* Define to 1 if you have the <winsock.h> header file. */
/* #undef HAVE_WINSOCK_H */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if you have the <X11/extensions/Xinerama.h> header file. */
#define HAVE_X11_EXTENSIONS_XINERAMA_H 1

/* Define to 1 if you have the <X11/Xmu/Editres.h> header file. */
/* #undef HAVE_X11_XMU_EDITRES_H */

/* Define to 1 if you have the <X11/xpm.h> header file. */
/* #undef HAVE_X11_XPM_H */

/* Define to 1 if you have the Xinerama libraries */
#define HAVE_XINERAMA 1

/* Define to 1 if your Motif can use _XmMapKeyEvents */
#define HAVE_XMMAPKEYEVENTS 1

/* Define to 1 if you have the <xpm.h> header file. */
/* #undef HAVE_XPM_H */

/* Define to 1 if you have the `_Errno' function. */
/* #undef HAVE__ERRNO */

/* Define to 1 if you have the `_findfirst' function. */
/* #undef HAVE__FINDFIRST */

/* Define to 1 if you have the `_getpid' function. */
/* #undef HAVE__GETPID */

/* Define to 1 if you have the `_isatty' function. */
/* #undef HAVE__ISATTY */

/* Define to 1 if you have the `_pclose' function. */
/* #undef HAVE__PCLOSE */

/* Define to 1 if you have the `_pipe' function. */
/* #undef HAVE__PIPE */

/* Define to 1 if you have the `_popen' function. */
/* #undef HAVE__POPEN */

/* Define to 1 if you have the `_spawnvp' function. */
/* #undef HAVE__SPAWNVP */

/* Define to 1 if you have the `_unlink' function. */
/* #undef HAVE__UNLINK */

/* Define to 1 if Using old version of lesstif */
/* #undef OLD_LESSTIF */

/* O_RDONLY is defined somewhere */
/* #undef O_RDONLY */

/* Name of package */
#define PACKAGE "dx"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "dx"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dx 4.4.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dx"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.4"

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Define to 1 if bzero needs declared */
#define REQUIRES_BZERO_DECLARATION 0

/* Define to 1 if gethostname needs declared */
#define REQUIRES_GETHOSTNAME_DECLARATION 0

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Path to the system's remote shell. */
#define RSH "/usr/bin/rsh"

/* Arguments for select */
#define SELECT_ARG_TYPE fd_set

/* Define to 1 if the `setvbuf' function takes the buffering type as its
   second argument and the buffer pointer as the third, as on System V before
   release 3. */
/* #undef SETVBUF_REVERSED */

/* SGI specific ABI */
/* #undef SGI_ABI */

/* socket length type */
#define SOCK_LENGTH_TYPE socklen_t

/* What is the defined stat func */
#define STATFUNC stat

/* What is the stat struct */
#define STATSTRUCT stat

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 if using bison */
#define USING_BISON 1

/* Define to 1 if using flex */
#define USING_FLEX 1

/* Version number of package */
#define VERSION "4.4.4"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* set to 1 if lexer adds yylineno */
#define YYLINENO_DEFINED 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1

/* Do not define __int64 if already have type __int64 */
#define __int64 long long

/* Do not define byte if already have type byte */
#define byte signed char

/* Do not define float32 if already have type float32 */
#define float32 float

/* Do not define float64 if already have type float64 */
#define float64 double

/* Do not define int16 if already have type int16 */
#define int16 short

/* Do not define int32 if already have type int32 */
#define int32 int

/* Do not define int64 if already have type int64 */
#define int64 long

/* Do not define int8 if already have type int8 */
#define int8 char

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Do not define short if already have type short */
/* #undef short */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Do not define ubyte if already have type ubyte */
#define ubyte unsigned char

/* Do not define uint if already have type uint */
/* #undef uint */

/* Do not define uint16 if already have type uint16 */
#define uint16 unsigned short

/* Do not define uint32 if already have type uint32 */
#define uint32 unsigned int

/* Do not define uint64 if already have type uint64 */
#define uint64 unsigned long

/* Do not define uint8 if already have type uint8 */
#define uint8 unsigned char

/* Do not define ulong if already have type ulong */
/* #undef ulong */

/* Do not define ushort if already have type ushort */
/* #undef ushort */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */