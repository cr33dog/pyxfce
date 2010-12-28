#!/usr/bin/env python

import xfce4.xfconf
print(xfce4.xfconf.list_channels())
wm = xfce4.xfconf.channel_get("xfwm4")
print(wm.get_properties("/"))
wm = xfce4.xfconf.channel_get("xfwm4")
print(wm.get_properties("/"))

