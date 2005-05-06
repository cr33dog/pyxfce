#!/usr/bin/env python

# what is that for

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.Decorbutton("hide")  # "close"
widget.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(widget)

w.show()

gtk.main()
