#!/usr/bin/env python
# doesnt work. segfault.
# TODO: other screens?
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.IconTheme(gtk.gdk.screen_get_default())
ic = widget.load("xfce-mail", 24)
print ic
icname = widget.lookup("xfce-mail", 24)
print icname

image = gtk.Image()
image.set_from_pixbuf(ic)
image.show()
w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())
w.add(image)
w.show()

gtk.main()
