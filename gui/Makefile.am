@SET_MAKE@

PLATFORM_VERSION = 4.2

CODEGEN_PATH = @CODEGEN_PATH@

common_ldflags = -module -avoid-version -export-symbols-regex init_gui
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _gui.la
pyxfceexec_PYTHON = gui.py

_gui_la_CFLAGS = $(XFCE4_GUI_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_gui_la_LDFLAGS = $(common_ldflags)
_gui_la_LIBADD = $(XFCE4_GUI_LIBS)
#-export-symbols-regex
_gui_la_SOURCES = \
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
	icons.c \
	icontheme.c \
	menubutton.c \
	movehandler.c \
	scaled_image.c \
	session_client.c \
	systemtray.c \
	togglebutton.c \
	guimodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA =
	aboutdialog.defs \
	appmenuitem.defs \
	clock.defs \
	colorbutton.defs \
	decorbutton.defs \
	decortoggle.defs \
	dialogs.defs \
	filechooser.defs \
	framebox.defs \
	gdk_extensions.defs \
	gtk_extensions.defs \
	gtk_style.defs \
	gtktoxevent.defs \
	iconbutton.defs \
	icons.defs \
	icontheme.defs \
	menubutton.defs \
	movehandler.defs \
	scaled_image.defs \
	session_client.defs \
	systemtray.defs \
	togglebutton.defs

gui_overrides = aboutdialog.override

EXTRA_DIST = $(gui_overrides)

nodist__gui_la_SOURCES = 

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

