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
_panel_la_CFLAGS = $(MIGHTY_MOUSE_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_panel_la_LDFLAGS = $(common_ldflags)
_panel_la_LIBADD = $(MIGHTY_MOUSE_LIBS) $(PYTHON_LIBS)
_panel_la_SOURCES = \
	arrow_button.c \
	enums.c \
	enum_types.c \
	external_plugin.c \
	itembar.c \
	plugin_iface.c \
	window.c \
	panelmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	arrow_button.defs \
	enums.defs \
	enum_types.defs \
	external_plugin.defs \
	itembar.defs \
	plugin_iface.defs \
	window.defs

panel_overrides = arrow_button.override enums.override external_plugin.override \
  itembar.override plugin_iface.override window.override

EXTRA_DIST = $(defs_DATA) $(panel_overrides) gen
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
