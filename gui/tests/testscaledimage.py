#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

iv = gtk.Invisible()
pb = iv.render_icon(gtk.STOCK_DIALOG_INFO, gtk.ICON_SIZE_DIALOG)

widget = xfce4.gui.ScaledImage()
widget.set_from_pixbuf(pb)
widget.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(widget)

w.show()

gtk.main()
