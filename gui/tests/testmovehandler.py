#!/usr/bin/env python
# beware!!! endless effect!! 
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

w = gtk.Window()

widget = xfce4.gui.Movehandler(w)
widget.show()

w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(widget)

w.show()

gtk.main()
