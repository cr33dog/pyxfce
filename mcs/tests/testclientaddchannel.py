#!/usr/bin/env python

import pygtk
pygtk.require("2.0")
import gtk

def setting_changed_cb(a,b,c):
	print "X"

import xfce4
mcsC = xfce4.mcs.Client()
channel = mcsC.add_channel("X")
channel.connect("setting-changed", setting_changed_cb)

gtk.main()
