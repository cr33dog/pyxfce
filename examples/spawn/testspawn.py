#!/usr/bin/env python2

import sys
import os
import pygtk
pygtk.require("2.0")
import gtk
import xfce4.ui
import xfce4.util
import shlex

def watch(inst, status):
	print(status)

#xfce4.ui.spawn_on_screen(gtk.gdk.screen_get_default(), "/", ["xterm"], os.environ, set(["search_path"]), False, gtk.get_current_event_time(), "xterm")
xfce4.ui.spawn_on_screen_with_child_watch(gtk.gdk.screen_get_default(), "/", ["xterm"], os.environ, set(["search_path"]), False, gtk.get_current_event_time(), "xterm", watch)
gtk.main()
