#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk
import xfce4

screen = xfce4.netk.screen_get_default()

class Tasklist(gtk.VBox):
	def __init__(self):
		global screen
		gtk.VBox.__init__(self)
		self._wmap = {}
		self._windows = screen.get_windows()
		screen.connect("window-opened", self.opened_cb)
		screen.connect("window-closed", self.closed_cb)
		
		for window in self._windows:
			self.opened_cb(screen, window)
		
	def opened_cb(self, screen, window):
		pid = window.get_pid()
		if pid == None:
			pid = 0
			
		name = window.get_name()
		#skiptaskbar = window.get_skip_taskbar_hint()
		w = gtk.Button("%d: %s" % (pid, name))
		w.show()
		self._wmap[window] = w
		self.pack_start(w, True, True)
		
		window.connect("name-changed", self.window_name_changed_cb)
		#False, False)
		
	def window_name_changed_cb(self, window):
		name = window.get_name()
		if window in self._wmap:
			w = self._wmap[window]
			w.get_children()[0].set_text(name)
		
	def closed_cb(self, screen, window):
		if window in self._wmap:
			w = self._wmap[window]
			w.destroy()
		
tl = Tasklist()
tl.show()

w = gtk.Window()
w.add(tl)
w.connect("destroy", lambda x: gtk.main_quit())
w.show()

gtk.main()

