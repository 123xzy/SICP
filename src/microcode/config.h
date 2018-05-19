/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/*

Copyright (C) 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994,
    1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
    2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014 Massachusetts
    Institute of Technology

This file is part of MIT/GNU Scheme.

MIT/GNU Scheme is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

MIT/GNU Scheme is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with MIT/GNU Scheme; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301,
USA.

*/

#ifndef SCM_CONFIG_H
#define SCM_CONFIG_H

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define GETPGRP_VOID 1

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the <bsdtty.h> header file. */
/* #undef HAVE_BSDTTY_H */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `closefrom' function. */
/* #undef HAVE_CLOSEFROM */

/* Define to 1 if you have the `ctermid' function. */
#define HAVE_CTERMID 1

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define if backslash-a works in C strings. */
#define HAVE_C_BACKSLASH_A 1

/* Define to 1 if you have the <db.h> header file. */
/* #undef HAVE_DB_H */

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the `expm1' function. */
#define HAVE_EXPM1 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the `feclearexcept' function. */
#define HAVE_FECLEAREXCEPT 1

/* Define to 1 if you have the `fedisableexcept' function. */
#define HAVE_FEDISABLEEXCEPT 1

/* Define to 1 if you have the `feenableexcept' function. */
#define HAVE_FEENABLEEXCEPT 1

/* Define to 1 if you have the `fegetenv' function. */
#define HAVE_FEGETENV 1

/* Define to 1 if you have the `fegetexcept' function. */
#define HAVE_FEGETEXCEPT 1

/* Define to 1 if you have the `fegetexceptflag' function. */
#define HAVE_FEGETEXCEPTFLAG 1

/* Define to 1 if you have the `fegetround' function. */
#define HAVE_FEGETROUND 1

/* Define to 1 if you have the `feholdexcept' function. */
#define HAVE_FEHOLDEXCEPT 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define to 1 if the system has the type `fenv_t'. */
#define HAVE_FENV_T 1

/* Define to 1 if you have the `feraiseexcept' function. */
#define HAVE_FERAISEEXCEPT 1

/* Define to 1 if you have the `fesetenv' function. */
#define HAVE_FESETENV 1

/* Define to 1 if you have the `fesetexceptflag' function. */
#define HAVE_FESETEXCEPTFLAG 1

/* Define to 1 if you have the `fesetround' function. */
#define HAVE_FESETROUND 1

/* Define to 1 if you have the `fetestexcept' function. */
#define HAVE_FETESTEXCEPT 1

/* Define to 1 if you have the `feupdateenv' function. */
#define HAVE_FEUPDATEENV 1

/* Define to 1 if the system has the type `fexcept_t'. */
#define HAVE_FEXCEPT_T 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `floor' function. */
#define HAVE_FLOOR 1

/* Define to 1 if you have the `fmod' function. */
#define HAVE_FMOD 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Define to 1 if you have the `fpgetround' function. */
/* #undef HAVE_FPGETROUND */

/* Define to 1 if you have the `fpsetround' function. */
/* #undef HAVE_FPSETROUND */

/* Define to 1 if you have the `frexp' function. */
#define HAVE_FREXP 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `fsync_range' function. */
/* #undef HAVE_FSYNC_RANGE */

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the <gdbm.h> header file. */
#define HAVE_GDBM_H 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpgrp' function. */
#define HAVE_GETPGRP 1

/* Define to 1 if you have the `getpt' function. */
#define HAVE_GETPT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Define to 1 if you have the `grantpt' function. */
#define HAVE_GRANTPT 1

/* Define if `struct hostent' has the `h_addr_list' member. */
#define HAVE_HOSTENT_H_ADDR_LIST 1

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if the system has the type `intmax_t'. */
#define HAVE_INTMAX_T 1

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `db-4' library (-ldb-4). */
/* #undef HAVE_LIBDB_4 */

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `gdbm' library (-lgdbm). */
#define HAVE_LIBGDBM 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `mcrypt' library (-lmcrypt). */
/* #undef HAVE_LIBMCRYPT */

/* Define to 1 if you have the `mhash' library (-lmhash). */
/* #undef HAVE_LIBMHASH */

/* Define to 1 if you have the `pq' library (-lpq). */
/* #undef HAVE_LIBPQ */

/* Define to 1 if you have the <libpq-fe.h> header file. */
/* #undef HAVE_LIBPQ_FE_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `lockf' function. */
#define HAVE_LOCKF 1

/* Define to 1 if you have the `log1p' function. */
#define HAVE_LOG1P 1

/* Define to 1 if you support file names longer than 14 characters. */
#define HAVE_LONG_FILE_NAMES 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <mcrypt.h> header file. */
/* #undef HAVE_MCRYPT_H */

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <mhash.h> header file. */
/* #undef HAVE_MHASH_H */

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `modf' function. */
#define HAVE_MODF 1

/* Define to 1 if you have the <ncurses.h> header file. */
#define HAVE_NCURSES_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Define if `struct ntptimeval' has the `tai' member. */
#define HAVE_NTPTIMEVAL_TAI 1

/* Define if `struct ntptimeval' has the `time.tv_nsec' member. */
/* #undef HAVE_NTPTIMEVAL_TIME_TV_NSEC */

/* Define to 1 if you have the `ntp_adjtime' function. */
#define HAVE_NTP_ADJTIME 1

/* Define to 1 if you have the `ntp_gettime' function. */
#define HAVE_NTP_GETTIME 1

/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the <openssl/blowfish.h> header file. */
#define HAVE_OPENSSL_BLOWFISH_H 1

/* Define to 1 if you have the <openssl/md5.h> header file. */
#define HAVE_OPENSSL_MD5_H 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `pollts' function. */
/* #undef HAVE_POLLTS */

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `posix_madvise' function. */
#define HAVE_POSIX_MADVISE 1

/* Define to 1 if you have the `posix_openpt' function. */
#define HAVE_POSIX_OPENPT 1

/* Define to 1 if you have the `ppoll' function. */
#define HAVE_PPOLL 1

/* Define to 1 if you have the `prealloc' function. */
/* #undef HAVE_PREALLOC */

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* Define to 1 if you have the `rename' function. */
#define HAVE_RENAME 1

/* Define to 1 if you have the `rmdir' function. */
#define HAVE_RMDIR 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Define to 1 if you have the `setpgrp' function. */
#define HAVE_SETPGRP 1

/* Define to 1 if you have the `setpgrp2' function. */
/* #undef HAVE_SETPGRP2 */

/* Define to 1 if you have the <sgtty.h> header file. */
#define HAVE_SGTTY_H 1

/* Define to 1 if you have the `shmat' function. */
#define HAVE_SHMAT 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sighold' function. */
#define HAVE_SIGHOLD 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigsuspend' function. */
#define HAVE_SIGSUSPEND 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `statfs' function. */
#define HAVE_STATFS 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Does the compiler support C89? */
#define HAVE_STDC_89 1

/* Does the compiler support C99? */
#define HAVE_STDC_99 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if cpp supports the ANSI # stringizing operator. */
#define HAVE_STRINGIZE 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define if `struct ltchars' is defined in <bsdtty.h>. */
/* #undef HAVE_STRUCT_LTCHARS */

/* Define if `struct ntptimeval' is defined in <sys/timex.h>. */
#define HAVE_STRUCT_NTPTIMEVAL 1

/* Define if `struct sigcontext' is defined in <signal.h>. */
#define HAVE_STRUCT_SIGCONTEXT 1

/* Define if `struct timex' is defined in <sys/timex.h>. */
#define HAVE_STRUCT_TIMEX 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `sync_file_range' function. */
#define HAVE_SYNC_FILE_RANGE 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/ptyio.h> header file. */
/* #undef HAVE_SYS_PTYIO_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timex.h> header file. */
#define HAVE_SYS_TIMEX_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <termcap.h> header file. */
#define HAVE_TERMCAP_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the <term.h> header file. */
#define HAVE_TERM_H 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define if `struct timex' has the `tai' member. */
#define HAVE_TIMEX_TAI 1

/* Define if `struct timex' has the `time.tv_usec' member. */
#define HAVE_TIMEX_TIME_TV_USEC 1

/* Define if timezone variable is available. */
/* #undef HAVE_TIMEZONE */

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define if `struct tm' has the `tm_gmtoff' member. */
#define HAVE_TM_GMTOFF 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Define to 1 if you have the `truncate' function. */
#define HAVE_TRUNCATE 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if the system has the type `uintmax_t'. */
#define HAVE_UINTMAX_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `wait3' system call. Deprecated, you should no
   longer depend upon `wait3'. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-mit-scheme@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "MIT/GNU Scheme microcode"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "MIT/GNU Scheme microcode 15.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mit-scheme"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "15.3"

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `intmax_t', as computed by sizeof. */
#define SIZEOF_INTMAX_T 8

/* The size of `intptr_t', as computed by sizeof. */
#define SIZEOF_INTPTR_T 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `uintmax_t', as computed by sizeof. */
#define SIZEOF_UINTMAX_T 8

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 8

/* The size of `unsigned char', as computed by sizeof. */
#define SIZEOF_UNSIGNED_CHAR 1

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to name of timezone variable if available. */
/* #undef TIMEZONE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to name of `tm_gmtoff' member if available. */
#define TM_GMTOFF tm_gmtoff

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if termcap should be used. */
#define USE_TERMCAP 1

/* Define to 1 if unix dynamic loading support is enabled. */
#define UX_DLD_ENABLED 1

/* Define if RETSIGTYPE is `void'. */
#define VOID_SIGNAL_HANDLERS 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1

/* Define to `unsigned char' if <termios.h> doesn't define. */
/* #undef cc_t */

/* Define to `unsigned long' if <time.h> doesn't define. */
/* #undef clock_t */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to the widest signed integer type if <stdint.h> and <inttypes.h> do
   not define. */
/* #undef intmax_t */

/* Define to the type of a signed integer type wide enough to hold a pointer,
   if such a type exists, and if the system does not define it. */
/* #undef intptr_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to 'short' if undefined. */
/* #undef nlink_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/socket.h> doesn't define. */
/* #undef socklen_t */

/* Define to `short' if <termios.h> doesn't define. */
/* #undef speed_t */

/* Define to `long' if <time.h> doesn't define. */
/* #undef time_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define to the widest unsigned integer type if <stdint.h> and <inttypes.h>
   do not define. */
/* #undef uintmax_t */

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */
/* #undef uintptr_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */

#ifndef __unix__
#  define __unix__
#endif

#if defined(_IRIX) || defined(_IRIX4) || defined(_IRIX6)
#  define __IRIX__
#endif

#if defined(__hpux) || defined(hpux)
#  define __HPUX__
#endif

/* If we're running under GNU libc, turn on all the features.
   Otherwise this should be harmless.  */
#define _GNU_SOURCE

#include <sys/types.h>

#ifdef TIME_WITH_SYS_TIME
#  include <sys/time.h>
#  include <time.h>
#else
#  ifdef HAVE_SYS_TIME_H
#    include <sys/time.h>
#  else
#    include <time.h>
#  endif
#endif

#ifdef HAVE_TERMIOS_H
#  include <termios.h>
#else
#  ifdef HAVE_TERMIO_H
#    include <termio.h>
#  endif
#endif

#ifdef HAVE_SYS_MMAN_H
#  include <sys/mman.h>
#endif

#ifdef HAVE_MMAP
#  if defined(MAP_ANON) && !defined(MAP_ANONYMOUS)
#    define MAP_ANONYMOUS MAP_ANON
#  endif
#  ifdef MAP_ANONYMOUS
#    define USE_MMAP_HEAP_MALLOC
#  endif
#endif

/* Include the shared configuration header.  */
#include "confshared.h"

#endif /* SCM_CONFIG_H */
