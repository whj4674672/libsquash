/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <linux/types.h> defines the type __le16 */
/* #undef HAVE_LINUX_TYPES_LE16 */

/* Define to 1 if you have the <lz4.h> header file. */
/* #undef HAVE_LZ4_H */

/* Define to 1 if you have the <lzma.h> header file. */
/* #undef HAVE_LZMA_H */

/* Define to 1 if you have the <lzo/lzo1x.h> header file. */
/* #undef HAVE_LZO_LZO1X_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
/* #undef HAVE_SYS_SYSMACROS_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Extra definition needed by non-POSIX daemon */
/* #undef NONSTD_DAEMON_DEF */

/* Extra definition needed by non-POSIX ENOATTR */
#define NONSTD_ENOATTR_DEF CHANGE_DARWIN_C_SOURCE

/* Extra definition needed by non-POSIX makedev */
#define NONSTD_MAKEDEV_DEF CHANGE_DARWIN_C_SOURCE

/* Extra definition needed by non-POSIX pread */
/* #undef NONSTD_PREAD_DEF */

/* Extra definition needed by non-POSIX S_IFSOCK */
/* #undef NONSTD_S_IFSOCK_DEF */

/* Name of package */
#define PACKAGE "libsquash"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "dave@vasilevsky.ca"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libsquash"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libsquash 0.1.100"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libsquash"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1.100"

/* define if makedev() is QNX-style */
/* #undef QNX_MAKEDEV */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.1.100"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* POSIX 2001 compatibility */
#define _POSIX_C_SOURCE 200112L