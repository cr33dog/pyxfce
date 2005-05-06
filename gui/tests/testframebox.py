#!/usr/bin/env python
# not working
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.FrameBox()

button = gtk.Button("About")
button.connect("clicked", about_cb)
button.show()

widget.add(button)
widget.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(widget)

w.show()

gtk.main()
