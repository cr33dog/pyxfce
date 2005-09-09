#!/usr/bin/env python

from _panel import *

class Plugin(ExternalPanelPlugin):
  def _get_horizontal(self):
    position = self.get_property("screen-position")
    return position in (
      SCREEN_POSITION_NW_H,
      SCREEN_POSITION_N,
      SCREEN_POSITION_NE_H,

      SCREEN_POSITION_SW_H,
      SCREEN_POSITION_S,
      SCREEN_POSITION_SE_H,

      SCREEN_POSITION_FLOATING_H,
    )
    
  def _get_vertical(self):
    position = self.get_property("screen-position")
    return position in (
      SCREEN_POSITION_NW_V,
      SCREEN_POSITION_W,
      SCREEN_POSITION_SW_V,

      SCREEN_POSITION_NE_V,
      SCREEN_POSITION_E,
      SCREEN_POSITION_SE_V,

      SCREEN_POSITION_FLOATING_V,
    )
  
  horizontal = property(_get_horizontal)
  vertical = property(_get_vertical)
  
  
