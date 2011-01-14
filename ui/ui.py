#!/usr/bin/env python

from _ui import *

def spawn_command_line(*args, **kwargs):
	import gtk
	return(spawn_command_line_on_screen(gtk.gdk.screen_get_default(), *args, **kwargs))
