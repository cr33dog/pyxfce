#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

label = gtk.Label("Boo!")
label.show()
ti = xfce4.netk.TrayIcon() # dependent on screen!
ti.add(label)
ti.show()

gtk.main()
