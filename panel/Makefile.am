@SET_MAKE@

PLATFORM_VERSION = 4.2

common_ldflags = -module -avoid-version
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

CODEGEN_PATH = @CODEGEN_PATH@

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _panel.la
pyxfceexec_PYTHON = panel.py
_panel_la_CFLAGS = $(XFCE4_PANEL_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_panel_la_LDFLAGS = $(common_ldflags)
_panel_la_LIBADD = $(XFCE4_PANEL_LIBS) $(PYTHON_LIBS)
_panel_la_SOURCES = \
	icons.c \
	support.c \
	panelmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	icons.defs \
	support.defs

panel_overrides =
EXTRA_DIST = $(panel_overrides)
nodist__panel_la_SOURCES = 

PYGTK_DEFS="`pkg-config --variable=defsdir pygtk-2.0`"

.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register $(PYGTK_DEFS)/gtk-types.defs \
	     --register $(PYGTK_DEFS)/gdk-types.defs \
             --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c
