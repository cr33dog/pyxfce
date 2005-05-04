#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import xfce4

label = gtk.Label("Boo!")
label.show()
ti = xfce4.netk.TrayIcon(gtk.gdk.screen_get_default())
ti.add(label)
ti.show()

gtk.main()
