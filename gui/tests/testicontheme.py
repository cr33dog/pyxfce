#!/usr/bin/env python
# doesnt work. segfault.
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.IconTheme()
ic = widget.lookup("folder", 24)
print ic

image = gtk.Image()
image.set_from_pixbuf(ic)
image.show()
w = gtk.Window()
w.add(image)
w.show()

gtk.main()
