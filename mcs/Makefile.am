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
_mcs_la_LIBADD = $(XFCE4_MCS_CLIENT_LIBS) $(XFCE4_MCS_MANAGER_LIBS)
_mcs_la_SOURCES = \
	mcs_client.c \
	mcs_common.c \
	mcs_manager.c \
	mcsmodule.c

defsdir = $(pkgdatadir)/$(PLATFORM_VERSION)/defs
defs_DATA = \
	mcs_client.defs \
	mcs_common.defs \
	mcs_manager.defs
	
.defs.c:
	(cd $(srcdir) \
	 && $(PYTHON) $(CODEGEN_PATH)/codegen.py \
	   $(PYGTK_CODEGEN_DEFINES) \
	     --override $*.override \
	     --prefix py$* $*.defs) > gen-$*.c \
	 && cp gen-$*.c $*.c \
	 && rm -f gen-$*.c
