#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk

import xfce4
import sys

w = gtk.Window()
h = gtk.HBox()

b = gtk.Button()
b.show()
h.pack_start(b, False, False)

h.show()
w.add(h)
w.show()

def icon_docked_cb(tray, item):
  global h
  
  h.pack_start(item)
  print "docked", item
  pass

def icon_undocked_cb(tray, item):
  global h
  
  h.remove(item)
  pass

def selection_cleared_cb(tray):
  pass 
 
def message_new_cb(tray, item, id, timeout, text):
  pass

def message_clear_cb(tray, item, id):
  pass

import xfce4
t = xfce4.gui.SystemTray()
t.connect("icon-docked", icon_docked_cb)
t.connect("icon-undocked", icon_undocked_cb)
t.connect("selection-cleared", selection_cleared_cb)
t.connect("message-new", message_new_cb)
t.connect("message-clear", message_clear_cb)

if xfce4.gui.system_tray_check_running(gtk.gdk.screen_get_default()) == True:
  print "there already is a system tray!"
  sys.exit(1)

if t.register(gtk.gdk.screen_get_default()) == True:
  print "ok"

# t.unregister()

gtk.main()
