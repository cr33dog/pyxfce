#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.AboutDialog()
widget.set_program("testaboutdialog")
widget.set_version("0.1")
widget.set_description("Tests the About Dialog")
widget.set_copyright("Danny Milosavljevic")
widget.set_license("er... yeah... later")
widget.set_homepage("http://what.browser.will.it.choose.today.at/")
widget.add_credit("Danny Milosavljevic", "dannym@xfce.org", "Developer")
widget.add_credit("Fred Mustermann", "fred@bogus.example.com", "Potential Being")

def about_cb(button):
	global widget
	global w
	widget.set_transient_for(w)
	widget.run()
	widget.destroy()

	# tests for a bug by repeating
	widget.set_transient_for(w)
	widget.run()
	widget.destroy()
	
button = gtk.Button("About")
button.connect("clicked", about_cb)
button.show()

w = gtk.Window()
w.connect("destroy", lambda x: gtk.main_quit())

w.set_border_width(7)
w.add(button)

w.show()

gtk.main()
