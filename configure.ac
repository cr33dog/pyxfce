-*- mode: m4 -*-
AC_PREREQ(2.52)

ACLOCAL_AMFLAGS = -I m4

m4_define(pyxfce_major_version, 4)
m4_define(pyxfce_minor_version, 2)
m4_define(pyxfce_micro_version, 1)
m4_define(pyxfce_version, pyxfce_major_version.pyxfce_minor_version.pyxfce_micro_version)

m4_define(xfce_required_version, 4.1.99)

AC_INIT(pyxfce, pyxfce_version, [])

AC_DEFINE(PYXFCE_MAJOR_VERSION, pyxfce_major_version, [pyxfce major version])
AC_DEFINE(PYXFCE_MINOR_VERSION, pyxfce_minor_version, [pyxfce minor version])
AC_DEFINE(PYXFCE_MICRO_VERSION, pyxfce_micro_version, [pyxfce micro version])

#AC_CONFIG_SRCDIR([])
AC_CONFIG_HEADER(config.h)

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

BM_DEPEND([XFCE4_UTIL], [libxfce4util-1.0], [4.1.0])
BM_DEPEND([XFCE4_GUI], [libxfcegui4-1.0], [4.4.2])
BM_DEPEND([XFCE4_PANEL], [xfce4-panel-1.0], [4.1.0])
BM_DEPEND([XFCE4_MCS_CLIENT], [libxfce4mcs-client-1.0], [4.1.0])
BM_DEPEND([XFCE4_MCS_MANAGER], [libxfce4mcs-manager-1.0], [4.1.0])
BM_DEPEND([GTK], [gtk+-2.0], [2.4])
BM_DEPEND([PYGTK], [pygtk-2.0], [2.4.0])

BM_DEBUG_SUPPORT

AC_C_CONST

PYGTK_CODEGEN_DEFINES=""

dnl add required cflags ...
JH_ADD_CFLAG([-Wall])
JH_ADD_CFLAG([-std=c9x])
JH_ADD_CFLAG([-fno-strict-aliasing]) 

dnl AC_DEFINE([CODEGEN_PATH], [/usr/share/pygtk/2.0/codegen], [codegen executeable directory])
AC_SUBST([CODEGEN_PATH], [/usr/share/pygtk/2.0/codegen])

dnl  pygtk-2.0.pc
dnl codegen/Makefile

AC_CONFIG_FILES(
  Makefile
  gui/Makefile
  mcs/Makefile
  netk/Makefile
  panel/Makefile
  util/Makefile
)
AC_OUTPUT
