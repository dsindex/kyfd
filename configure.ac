#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_INIT([kyfd], [0.0.5], [kyfd@phontron.com])
PACKAGE=kyfd

AC_PREREQ([2.63])

AC_CONFIG_AUX_DIR([build])

AC_CANONICAL_TARGET

AM_INIT_AUTOMAKE([foreign])

AC_PREFIX_DEFAULT(`pwd`/install)
AC_MSG_RESULT("prefix is $prefix.")
KYFD_RELEASE_DATE=`LANG=C date "+%a %b %d %T %Z %Y"`
AC_SUBST(PACKAGE)
AC_SUBST(KYFD_RELEASE_DATE)
AC_SUBST(LIBTOOL)
AC_SUBST(AM_CFLAGS)
AC_SUBST(AM_CPPFLAGS)
AC_SUBST(AM_LDFLAGS)
AC_SUBST(AM_LIBTOOLFLAGS)

AC_CONFIG_SRCDIR([src/lib/decoder.cc])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
    Makefile
    src/Makefile
    src/bin/Makefile
    src/lib/Makefile
    src/include/Makefile
])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([fst/fst.h xerces/dom/DOM.hpp])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T

# Checks for library functions.
AC_CHECK_FUNCS([floor])

AC_OUTPUT
