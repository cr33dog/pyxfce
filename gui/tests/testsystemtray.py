#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

box = gtk.HBox()
box.show()

def icon_docked_cb(tray, widget):
	global box
	box.pack_start(widget)
	
def icon_undocked_cb(tray, widget):
	global box
	box.remove(widget)

def selection_cleared_cb(tray):
	#tray.register(...)
	pass

def message_new_cb(tray, widget, id, timeout, text):
	pass

def message_clear_cb(tray, widget, id):
	pass

tray = xfce4.gui.SystemTray()
tray.connect("icon-docked", icon_docked_cb)
tray.connect("icon-undocked", icon_undocked_cb)
tray.connect("selection-cleared", selection_cleared_cb)
tray.connect("message-new", message_new_cb)
tray.connect("message-clear", message_clear_cb)

#tray.register(gtk.gdk.screen_get_default())
#tray.unregister()
#tray.check_running(gtk.gdk.screen_get_default())
#tray.error_quark()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(box)

w.show()

gtk.main()
