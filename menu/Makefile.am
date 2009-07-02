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
	aboutdialog.c \
	appmenuitem.c \
	clock.c \
	colorbutton.c \
	decorbutton.c \
	decortoggle.c \
	dialogs.c \
	filechooser.c \
	framebox.c \
	gdk_extensions.c \
	gtk_extensions.c \
	gtk_style.c \
	gtktoxevent.c \
	iconbutton.c \
	icontheme.c \
	icons.c \
	menubutton.c \
	movehandler.c \
	scaled_image.c \
	session_client.c \
	systemtray.c \
	titled_dialog.c \
	togglebutton.c \
	menumodule.c \
	startup-notification.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
libxfce4menu_config.defs \
libxfce4menu.defs \
xfce_menu-and-rules.defs \
xfce_menu.defs \
xfce_menu-directory.defs \
xfce_menu-element.defs \
xfce_menu-environment.defs \
xfce_menu-item-cache.defs \
xfce_menu-item.defs \
xfce_menu-item-pool.defs \
xfce_menu-layout.defs \
xfce_menu-monitor.defs \
xfce_menu-move.defs \
xfce_menu-not-rules.defs \
xfce_menu-or-rules.defs \
xfce_menu-rules.defs \
xfce_menu-separator.defs \
xfce_menu-standard-rules.defs

menu_overrides = 


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

