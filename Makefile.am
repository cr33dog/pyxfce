@SET_MAKE@

ACLOCAL_AMFLAGS = -I m4

AUTOMAKE_OPTIONS = 1.7

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = \
        pyxfce-1.0.pc
        
# have new panel
if HAVE_MIGHTY_MOUSE
SUBDIR_MIGHTY_MOUSE = panel
endif

SUBDIRS = gui mcs netk util $(SUBDIR_MIGHTY_MOUSE)
DIST_SUBDIRS = gui mcs netk util 

PLATFORM_VERSION = 4.2
PLATFORM_WIN32 =

pkgpythondir = $(pyexecdir)
#/xfce4
pkgpyexecdir = $(pyexecdir)
#/xfce4
pyxfceexecdir = $(pkgpyexecdir)/xfce4
pyxfcedir = $(pyxfceexecdir)
#pkgpyexec_PYTHON = xfce4.py
pyxfce_PYTHON = __init__.py

CLEANFILES =
EXTRA_DIST = $(defs_DATA) TODO_INFO TODO_WARNINGS update-warnings pyxfce-1.0.pc.in
pyexec_LTLIBRARIES = 
defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = 

#pkgconfigdir = $(libdir)/pkgconfig
#pkgconfig_DATA = pygtk-$(PLATFORM_VERSION).pc

INCLUDES = \
        $(PYTHON_INCLUDES) \
        $(XFCE4UTIL_CFLAGS) \
        $(XFCE4GUI_CFLAGS)
        

#pyexec_PYTHON = bla.py

# install-data-local
# install-exec-local
# uninstall-local

pkgpyexec_LTLIBRARIES = 

common_ldflags = -module -avoid-version
if PLATFORM_WIN32  
common_ldflags += -no-undefined
endif
