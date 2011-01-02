@SET_MAKE@

PLATFORM_VERSION = 4.2

CODEGEN_PATH = @CODEGEN_PATH@

common_ldflags = -module -avoid-version -export-symbols-regex init_menu
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _menu.la
pyxfceexec_PYTHON = menu.py

_menu_la_CFLAGS = $(XFCE4_MENU_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_menu_la_LDFLAGS = $(common_ldflags)
_menu_la_LIBADD = $(XFCE4_MENU_LIBS)
#-export-symbols-regex
_menu_la_SOURCES = \
	libxfce4menu_config.c \
	libxfce4menu.c \
	menu_and_rules.c \
	menu_directory.c \
	menu_element.c \
	menu_environment.c \
	menu_item_cache.c \
	menu_item.c \
	menu_item_pool.c \
	menu_layout.c \
	menu_monitor.c \
	menu_move.c \
	menu_not_rules.c \
	menu_or_rules.c \
	menu.c \
	menu_rules.c \
	menu_separator.c \
	menu_standard_rules.c \
	menumodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	libxfce4menu_config.defs \
	libxfce4menu.defs \
	menu_and_rules.defs \
	menu_directory.defs \
	menu_element.defs \
	menu_environment.defs \
	menu_item_cache.defs \
	menu_item.defs \
	menu_item_pool.defs \
	menu_layout.defs \
	menu_monitor.defs \
	menu_move.defs \
	menu_not_rules.defs \
	menu_or_rules.defs \
	menu.defs \
	menu_rules.defs \
	menu_separator.defs \
	menu_standard_rules.defs

menu_overrides = \
	libxfce4menu_config.override \
	libxfce4menu.override \
	menu_and_rules.override \
	menu_directory.override \
	menu_element.override \
	menu_environment.override \
	menu_item_cache.override \
	menu_item.override \
	menu_item_pool.override \
	menu_layout.override \
	menu_monitor.override \
	menu_move.override \
	menu_not_rules.override \
	menu_or_rules.override \
	menu.override \
	menu_rules.override \
	menu_separator.override \
	menu_standard_rules.override

EXTRA_DIST = $(defs_DATA) $(menu_overrides) gen

nodist__menu_la_SOURCES = 

PYGTK_DEFS="`pkg-config --variable=defsdir pygtk-2.0`"

.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register $(PYGTK_DEFS)/gtk-types.defs \
	     --register $(PYGTK_DEFS)/gdk-types.defs \
	     --register ../util/desktopentry.defs \
	     --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c

