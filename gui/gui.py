#!/usr/bin/env python

from _gui import *

#!/usr/bin/env python

import xfce4
import gtk
import os

def spawn_xyz(spawner, in_terminal = False, use_startup_notification = True, screen = None, environment = None):
  if screen == None:
    screen = gtk.gdk.screen_get_default()
    
  if use_startup_notification == True:
    id = xfce4.gui.startup_notification_start(screen, "/usr/bin/devhelp")
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
  
def spawn_command_line(command_line, in_terminal = False, use_startup_notification = True, screen = None, environment = None):
  return spawn_xyz(lambda x: spawn_command_line_cb(command_line + " &", x), in_terminal, use_startup_notification, screen, environment)

def spawn_args(args, in_terminal = False, use_startup_notification = True, screen = None, environment = None):
  return spawn_xyz(lambda x: os.spawnle(os.P_NOWAIT, args[0], args, x), in_terminal, use_startup_notification, screen, environment)

