#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk

import xfce4.panel

class MyPlugin(xfce4.panel.Plugin):
	def __init__(self):
		xfce4.panel.Plugin.__init__(self)
		
		button1 = gtk.Button("test")
		button1.show()
		
		self.add(button1)
		
		l1 = dir(self)
		l2 = dir(gtk.Window)
		for item in l1:
			if item not in l2:
				print item
	
		print self.horizontal
		print self.vertical
		
		print dir(self.props)
		
		self.add_action_widget(button1)
		
		mi = gtk.MenuItem("Hello")
		mi.show()
		
		print self.menu_insert_item(mi)
		
		#print self.get_orientation()
		
		#print self.

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
