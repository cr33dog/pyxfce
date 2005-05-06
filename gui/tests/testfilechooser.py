#!/usr/bin/env python
# not working
import pygtk
pygtk.require("2.0")
import gtk
import xfce4

widget = xfce4.gui.FileChooser()
widget.run()
