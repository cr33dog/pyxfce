#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

label = gtk.Label("Boo!")
label.show()

ti = xfce4.netk.TrayIcon() # dependent on screen!
ti.add(label)

ti.set_screen(gtk.gdk.screen_get_default())
ti.set_screen(xfce4.netk.screen_get_default())
ti.show()

gtk.main()
