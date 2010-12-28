@SET_MAKE@

PLATFORM_VERSION = 4.2

common_ldflags = -module -avoid-version -export-symbols-regex init_xfconf
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

INCLUDES = $(PYTHON_INCLUDES)

CODEGEN_PATH = @CODEGEN_PATH@

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _xfconf.la
pyxfceexec_PYTHON = xfconf.py
_xfconf_la_CFLAGS = $(XFCE4_XFCONF_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_xfconf_la_LDFLAGS = $(common_ldflags)
_xfconf_la_LIBADD = $(XFCE4_XFCONF_LIBS) $(PYTHON_LIBS)
_xfconf_la_SOURCES = \
	binding.c \
	channel.c \
	errors.c \
	types.c \
	xfconfmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	binding.defs \
	channel.defs \
	errors.defs \
	types.defs

xfconf_overrides = binding.override channel.override errors.override types.override

EXTRA_DIST = $(defs_DATA) $(xfconf_overrides) gen
nodist__xfconf_la_SOURCES =

PYGTK_DEFS="`pkg-config --variable=defsdir pygtk-2.0`"

.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register $(PYGTK_DEFS)/gtk-types.defs \
	     --register $(PYGTK_DEFS)/gdk-types.defs \
	     --register binding.defs \
	     --register channel.defs \
	     --register errors.defs \
	     --register types.defs \
	     --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c

