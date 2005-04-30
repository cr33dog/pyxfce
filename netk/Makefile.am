@SET_MAKE@

PLATFORM_VERSION = 4.2

common_ldflags = -module -avoid-version -export-symbols-regex init_netk
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

INCLUDES = $(PYTHON_INCLUDES)

CODEGEN_PATH = @CODEGEN_PATH@

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _netk.la
pyxfceexec_PYTHON = netk.py
_netk_la_CFLAGS = $(XFCE4_GUI_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_netk_la_LDFLAGS = $(common_ldflags)
_netk_la_LIBADD = $(XFCE4_GUI_LIBS) $(PYTHON_LIBS)
_netk_la_SOURCES = \
	application.c \
	class_group.c \
	enum_types.c \
	pager.c \
	screen.c \
	tasklist.c \
	trayicon.c \
	util.c \
	window_action_menu.c \
	window.c \
	window_menu.c \
	workspace.c \
	netkmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	application.defs \
	class_group.defs \
	enum_types.defs \
	pager.defs \
	screen.defs \
	tasklist.defs \
	trayicon.defs \
	util.defs \
	window_action_menu.defs \
	window.defs \
	window_menu.defs \
	workspace.defs

netk_overrides = application.override tasklist.override window_menu.override \
class_group.override  template.override            window.override \
enum_types.override   trayicon.override            workspace.override \
pager.override        util.override \
screen.override       window_action_menu.override

EXTRA_DIST = $(defs_DATA) $(netk_overrides) gen
nodist__netk_la_SOURCES =

PYGTK_DEFS="`pkg-config --variable=defsdir pygtk-2.0`"

.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register $(PYGTK_DEFS)/gtk-types.defs \
	     --register $(PYGTK_DEFS)/gdk-types.defs \
	     --register workspace.defs \
	     --register window.defs \
	     --register screen.defs \
	     --register application.defs \
	     --register class_group.defs \
	     --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c

