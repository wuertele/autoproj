#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.61)

AC_INIT([autoproj], [1.0], [dave+autoproj@wuertele.com])

#AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE

LT_PREREQ([2.2])
LT_INIT([dlopen])

AC_CONFIG_SRCDIR([programs/hello.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_RANLIB
AM_PROG_CC_C_O

# Checks for headers.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h dlfcn.h])

# Checks for command line options
AC_ARG_ENABLE([async-exec], [  --disable-async-exec    disable async exec], [async_exec=${enableval}], [async_exec=yes])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for libraries.

# Checks for library functions.

AC_SEARCH_LIBS([dlopen], [dl])

have_pthreads=no
if test "x${async_exec}" = xyes
then
  AC_SEARCH_LIBS([pthread_create], [pthread], [have_pthreads=yes])
fi

if test "x${have_pthreads}" = xyes
then
  AC_CHECK_HEADERS([pthread.h], [],  [have_pthreads=no])
fi

if test "x${have_pthreads}" = xno
then
  if test "x${async_exec}" = xyes
  then
    echo "------------------------------------------"
    echo " Unable to find pthreads on this system.  "
    echo " Building a single-threaded version.      "
    echo "------------------------------------------"
  fi
  async_exec=no
fi

if test "x${async_exec}" = xyes; then
  AC_DEFINE([ASYNC_EXEC], 1, [async exec enabled])
fi

AC_CONFIG_FILES([Makefile
		 commonstat/Makefile
		 include/Makefile
		 libprojdyn1/Makefile
		 libprojdyn2/Makefile
		 programs/Makefile
		 programs/modules/Makefile
		 programs/modules/hithere/Makefile])

AC_OUTPUT


echo \
"-------------------------------------------------

 ${PACKAGE_NAME} Version ${PACKAGE_VERSION}

 Prefix: '${prefix}'.
 Compiler: '${CC} ${CFLAGS} ${CPPFLAGS}'
 Libraries: '${LIBS}'

 Package features:
   Async Execution: ${async_exec}

 Now type 'make @<:@<target>@:>@'
   where the optional <target> is:
     all                - build all binaries
     install            - install everything

--------------------------------------------------"
