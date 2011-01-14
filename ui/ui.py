#!/usr/bin/env python

from _ui import *

def spawn_command_line(*args, **kwargs):
	import gtk
	return(spawn_command_line_on_screen(gtk.gdk.screen_get_default(), *args, **kwargs))

SPAWN_LEAVE_DESCRIPTORS_OPEN = 1 << 0
SPAWN_DO_NOT_REAP_CHILD      = 1 << 1
SPAWN_SEARCH_PATH            = 1 << 2
SPAWN_STDOUT_TO_DEV_NULL     = 1 << 3
SPAWN_STDERR_TO_DEV_NULL     = 1 << 4
SPAWN_CHILD_INHERITS_STDIN   = 1 << 5
SPAWN_FILE_AND_ARGV_ZERO     = 1 << 6

def to_c_envp(source):
	if hasattr(source, "items"):
		return ["%s=%s" % (key, value) for key, value in source.items()]
	else:
		return source

def to_c_flags(source):
	if isinstance(source, int):
		return(source)
	else:
		result = 0
		bits = ["leave_descriptors_open", "do_not_reap_child", "search_path", "stdout_to_dev_null", "stderr_to_dev_null", "child_inherits_stdin", "file_and_argv_zero"]
		for i, name in enumerate(bits):
			if name in source:
				result |= 1 << i
		return result

def spawn_on_screen(screen, working_directory, argv, envp, flags, startup_notify, startup_timestamp, startup_icon_name):
	import _ui
	return(_ui.spawn_on_screen(screen, working_directory, argv, to_c_envp(envp), to_c_flags(flags), startup_notify, startup_timestamp, startup_icon_name))

def spawn_on_screen_with_child_watch(screen, working_directory, argv, envp, flags, startup_notify, startup_timestamp, startup_icon_name, callback):
	import _ui
	return(_ui.spawn_on_screen_with_child_watch(screen, working_directory, argv, to_c_envp(envp), to_c_flags(flags), startup_notify, startup_timestamp, startup_icon_name, callback))
