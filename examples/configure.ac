-*- mode: m4 -*-
AC_PREREQ(2.52)

ACLOCAL_AMFLAGS = -I m4

AC_INIT(example, [1.0.0], [])

AM_MAINTAINER_MODE

AM_INIT_AUTOMAKE
AC_CHECK_FUNCS(bind_textdomain_codeset)

ACLOCAL="$ACLOCAL $ACLOCAL_FLAGS"

AC_CANONICAL_BUILD
AC_CANONICAL_HOST


AM_CONDITIONAL(PLATFORM_WIN32, test "$platform_win32" = "yes")


AC_DISABLE_STATIC
AC_PROG_LIBTOOL
AM_PATH_PYTHON(2.3)

AM_CHECK_PYTHON_HEADERS(,[AC_MSG_ERROR(could not find Python headers)])

dnl get rid of the -export-dynamic stuff from the configure flags ...
export_dynamic=`(./libtool --config; echo eval echo \\$export_dynamic_flag_spec) | sh`

BM_DEPEND([PYXFCE], [pyxfce-1.0], [4.3.0])

BM_DEPEND_CHECK([MIGHTY_MOUSE], [libxfce4panel-1.0], [4.3.17], [mighty-mouse], [the new panel], [yes])
AM_CONDITIONAL([HAVE_MIGHTY_MOUSE], [test x"$ac_cv_MIGHTY_MOUSE_check" = x"yes"])

XFCE_MIGHTY_MOUSE_PANEL_PLUGIN([PANEL], [4.3])
dnl PANEL_EXTERNALPLUGINDIR
dnl PANEL_DESKTOPDATADIR

dnl BM_DEPEND([GTK], [gtk+-2.0], [2.4])
dnl BM_DEPEND([PYGTK], [pygtk-2.0], [2.6.0])

BM_DEBUG_SUPPORT

AC_C_CONST

PYGTK_CODEGEN_DEFINES=""

dnl add required cflags ...
JH_ADD_CFLAG([-Wall])
JH_ADD_CFLAG([-std=c9x])
JH_ADD_CFLAG([-fno-strict-aliasing]) 

dnl AC_DEFINE([CODEGEN_PATH], [/usr/share/pygtk/2.0/codegen], [codegen executeable directory])
AC_MSG_CHECKING([for codegen executeable directory])
CODEGEN_PATH="`pkg-config --variable=codegendir pygtk-2.0`"
AC_MSG_RESULT([$CODEGEN_PATH])
AC_SUBST([CODEGEN_PATH])

dnl  pygtk-2.0.pc
dnl codegen/Makefile

AC_CONFIG_FILES(
  Makefile
  panel/Makefile
  panel/testplugin1/Makefile
  systemtray/Makefile
)
AC_OUTPUT
