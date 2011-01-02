@SET_MAKE@

PLATFORM_VERSION = 4.2

CODEGEN_PATH = @CODEGEN_PATH@

common_ldflags = -module -avoid-version -export-symbols-regex init_ui
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _ui.la
pyxfceexec_PYTHON = ui.py

_ui_la_CFLAGS = $(XFCE4_UI_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS)
_ui_la_LDFLAGS = $(common_ldflags)
_ui_la_LIBADD = $(XFCE4_UI_LIBS)
#-export-symbols-regex
_ui_la_SOURCES = \
	dialogs.c \
	gdk_extensions.c \
	gtk_extensions.c \
	sm_client.c \
	titled_dialog.c \
	uimodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	dialogs.defs \
	gdk_extensions.defs \
	gtk_extensions.defs \
	sm_client.defs \
	titled_dialog.defs

ui_overrides = \
	dialogs.override \
	gdk_extensions.override \
	gtk_extensions.override \
	sm_client.override \
	titled_dialog.override

EXTRA_DIST = $(defs_DATA) $(ui_overrides) gen

nodist__ui_la_SOURCES = 

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

startup-notification.c: startup-notification.defs
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --register $(PYGTK_DEFS)/gtk-types.defs \
	     --register $(PYGTK_DEFS)/gdk-types.defs \
	     --register ../util/desktopentry.defs \
	     --prefix pystartup_notification $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c

