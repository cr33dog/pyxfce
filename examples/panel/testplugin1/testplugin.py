#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk

import xfce4.panel

class MyPlugin(xfce4.panel.Plugin):
	def __init__(self):
		xfce4.panel.Plugin.__init__(self)
		
		label = gtk.Label("test")
		label.show()
		
		self.add(label)
	

# argc, argv, &info
plugin = MyPlugin()
if plugin == None:
	# TODO exception
	pass

# plugin.run()

plugin.connect("destroy", lambda x: gtk.main_quit())

plugin.show()

gtk.main()
sys.exit(0)
