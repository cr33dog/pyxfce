#!/usr/bin/env python
# beware!!! endless effect!! 
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

menu = gtk.Menu()
item = gtk.MenuItem("Test")
item.show()
menu.append(item)

widget = xfce4.gui.Menubutton("Hello")
widget.set_text("Buh")
widget.set_stock_icon(gtk.STOCK_DIALOG_INFO)
#widget.set_pixbuf(pb)
widget.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(widget)

w.show()

gtk.main()
