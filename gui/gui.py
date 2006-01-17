#!/usr/bin/env python

from _gui import *

#!/usr/bin/env python

import xfce4
import gtk
import os

def spawn_xyz(name, spawner, use_startup_notification = True, screen = None, environment = None):
  if screen == None:
    screen = gtk.gdk.screen_get_default()
    
  if use_startup_notification == True:
    id = xfce4.gui.startup_notification_start(screen, name)
  else:
    id = None

  if environment == None:
    environment = os.environ
    
  new_environment = environment.copy()
  if id != None: # want startup notification
    new_environment[xfce4.gui.STARTUP_NOTIFICATION_ID_KEY] = id

  ret = spawner(new_environment)
  if ret < 0:
    if id != None:
      xfce4.gui.startup_notification_cancel(id)
    
  return ret

def spawn_command_line_cb(command_line, new_environment):
  old_environment = os.environ
  os.environ = new_environment
  ret = os.system(command_line)
  os.environ = old_environment
  return ret
  
def get_executable_by_command_line(command_line):
  if isinstance(command_line, list):
    if len(command_line) > 0:
      executable = command_line[0]
    else:
      return None
  else:  
    foo = command_line.split(" ")
    if len(foo) >= 1:
      executable = foo[0]
    else:
      return None
    
    if executable.startswith("\""):
      executable = executable[1:]
    if executable.startswith("'"):
      executable = executable[1:]
    if executable.endswith("\""):
      executable = executable[:-1]
    if executable.endswith("'"):
      executable = executable[:-1]
  
  return executable

def spawn_command_line(command_line, in_terminal = False, use_startup_notification = True, screen = None, environment = None):
  name = get_executable_by_command_line(command_line)
  if name == None:
    name = "???"
  
  if in_terminal == True:
    command_line = "xfterm4 -e " + command_line
    
  return spawn_xyz(name, lambda x: spawn_command_line_cb(command_line + " &", x), use_startup_notification, screen, environment)

def spawn_args(args, use_startup_notification = True, screen = None, environment = None):
  name = args[0]
  return spawn_xyz(name, lambda x: os.spawnle(os.P_NOWAIT, args[0], args, x), use_startup_notification, screen, environment)

