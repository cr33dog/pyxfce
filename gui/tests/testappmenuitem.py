#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.app_menu_item_new_with_label("Boo!")
#AppMenuItem()
widget.set_name("Boo!")
widget.set_command("xterm")
widget.set_needs_term(False)
widget.set_startup_notification(False)

pitem = gtk.MenuItem("Progs...")
pitem.show()
menubar = gtk.MenuBar()
menubar.append(pitem)
menubar.show()

menu1 = gtk.Menu()
menu1.append(widget)
widget.show()
pitem.set_submenu(menu1)

vbox = gtk.VBox()
vbox.pack_start(menubar, False)
vbox.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(vbox)

w.show()

gtk.main()
