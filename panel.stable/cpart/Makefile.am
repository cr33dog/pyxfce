@SET_MAKE@

plugindir = $(libdir)/xfce4/panel-plugins

CLEANFILES = *~ *.bak core *.core *.o *.lo

#INCLUDES=

plugin_LTLIBRARIES = libpycpart.la

libpycpart_la_LDFLAGS = -avoid-version -export-dynamic -module
libpycpart_la_SOURCES = plugin.c
libpycpart_la_CFLAGS = @XFCE_MCS_CLIENT_CFLAGS@ @XFCE4_PANEL_CFLAGS@
libpycpart_la_LIBADD = @XFCE_MCS_CLIENT_LIBS@ @XFCE4_PANEL_LIBS@
libpycpart_la_DEPENDENCIES = 

EXTRA_DIST =

