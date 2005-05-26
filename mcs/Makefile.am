@SET_MAKE@

PLATFORM_VERSION = 4.2

common_ldflags = -module -avoid-version -export-symbols-regex init_mcs
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

CODEGEN_PATH = @CODEGEN_PATH@

# pyxfce_PYTHON = __init__.py

INCLUDES = $(PYTHON_INCLUDES)

pyxfceexecdir = $(pyexecdir)/xfce4
pyxfceexec_LTLIBRARIES = _mcs.la
pyxfceexec_PYTHON = mcs.py

_mcs_la_CFLAGS = $(GTK_CFLAGS) $(PYTHON_CFLAGS) $(PYGTK_CFLAGS) $(XFCE4_MCS_CLIENT_CFLAGS) $(XFCE4_MCS_MANAGER_CFLAGS)
_mcs_la_LDFLAGS = $(common_ldflags)
_mcs_la_LIBADD = $(XFCE4_MCS_CLIENT_LIBS) $(XFCE4_MCS_MANAGER_LIBS) $(GTK_LIBS)
_mcs_la_SOURCES = \
	mcs_client.c \
	mcs_common.c \
	xfce-mcs-channel.c xfce-mcs-channel.h xfce-mcs-channel-private.h \
	xfce-mcs-client.c xfce-mcs-client.h xfce-mcs-client-private.h \
	xfce-mcs-manager.c xfce-mcs-manager.h xfce-mcs-manager-private.h \
	gen-xfce_mcs-manager.c gen-xfce_mcs-client.c gen-xfce_mcs-channel.c \
	mcs_manager.c \
	mcsmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	mcs_client.defs \
	mcs_common.defs \
	mcs_manager.defs \
	xfce_mcs-channel.defs \
	xfce_mcs-manager.defs \
	xfce_mcs-client.defs

mcs_overrides = mcs_client.override  mcs_manager.override \
  mcs_common.override  template.override

EXTRA_DIST = $(defs_DATA) $(mcs_overrides) gen gobs
	
gen-xfce_mcs-client.c: xfce_mcs-client.defs xfce_mcs-client.override
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override xfce_mcs-client.override \
	     --prefix pyxfce_mcs_client xfce_mcs-client.defs) > genx-$*.c \
	 && cp genx-$*.c $*.c \
	 && rm -f genx-$*.c

gen-xfce_mcs-manager.c: xfce_mcs-manager.defs xfce_mcs-manager.override
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override xfce_mcs-manager.override \
	     --prefix pyxfce_mcs_manager xfce_mcs-manager.defs) > genx-$*.c \
	 && cp genx-$*.c $*.c \
	 && rm -f genx-$*.c

gen-xfce_mcs-channel.c: xfce_mcs-channel.defs xfce_mcs-channel.override
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override xfce_mcs-channel.override \
	     --prefix pyxfce_mcs_channel xfce_mcs-channel.defs) > genx-$*.c \
	 && cp genx-$*.c $*.c \
	 && rm -f genx-$*.c
