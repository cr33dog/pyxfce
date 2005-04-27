@SET_MAKE@

PLATFORM_VERSION = 4.2

common_ldflags = -module -avoid-version -export-symbols-regex init_util
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

CODEGEN_PATH = @CODEGEN_PATH@

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _util.la
pyxfceexec_PYTHON = util.py

_util_la_CFLAGS = $(XFCE4_UTIL_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS) $(GTK_CFLAGS)
_util_la_LDFLAGS = $(common_ldflags)
_util_la_LIBADD = $(XFCE4_UTIL_LIBS) $(PYTHON_LIBS) $(GTK_LIBS)
_util_la_SOURCES = \
	desktopentry.c \
	fileutils.c \
	i18n.c \
	kiosk.c \
	miscutils.c \
	rc.c \
	resource.c \
	utf8.c \
	utilmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	desktopentry.defs \
	fileutils.defs \
	i18n.defs \
	kiosk.defs \
	miscutils.defs \
	rc.defs \
	resource.defs \
	utf8.defs

util_overrides = 
EXTRA_DIST = $(util_overrides)
nodist__util_la_SOURCES =

.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register resource.defs \
	     --register rc.defs \
	     --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c
