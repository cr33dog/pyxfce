#!/usr/bin/env python
# doesnt work. segfault.
# TODO: other screens?
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.IconTheme()
ic = widget.load("folder", 24)
print ic
icname = widget.lookup("folder", 24)
print icname

image = gtk.Image()
image.set_from_pixbuf(ic)
image.show()
w = gtk.Window()
w.add(image)
w.show()

gtk.main()
