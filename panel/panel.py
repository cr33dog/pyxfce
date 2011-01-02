#!/usr/bin/env python

from _panel import *

import pygtk
pygtk.require("2.0")
import gtk
import sys

PLUGIN_ARGV_0, \
PLUGIN_ARGV_FILENAME, \
PLUGIN_ARGV_UNIQUE_ID, \
PLUGIN_ARGV_SOCKET_ID, \
PLUGIN_ARGV_NAME, \
PLUGIN_ARGV_DISPLAY_NAME, \
PLUGIN_ARGV_COMMENT, \
PLUGIN_ARGV_BACKGROUND_IMAGE, \
PLUGIN_ARGV_ARGUMENTS = range(9)

# and the other arguments are appended (at and including position PLUGIN_ARGV_ARGUMENTS).

PLUGIN_EXIT_SUCCESS, \
PLUGIN_EXIT_FAILURE, \
PLUGIN_EXIT_ARGUMENTS_FAILED, \
PLUGIN_EXIT_PREINIT_FAILED, \
PLUGIN_EXIT_CHECK_FAILED, \
PLUGIN_EXIT_NO_PROVIDER, \
PLUGIN_EXIT_SUCCESS_AND_RESTART = range(7)

class Plugin(PanelPlugin):
  def __init__(self):
    PanelPlugin.__init__(self)
    self.props.name = sys.argv[PLUGIN_ARGV_NAME]
    self.props.unique_id = sys.argv[PLUGIN_ARGV_UNIQUE_ID]
    self.props.display_name = sys.argv[PLUGIN_ARGV_DISPLAY_NAME]
    self.props.comment = sys.argv[PLUGIN_ARGV_COMMENT]
    self.props.arguments = sys.argv[PLUGIN_ARGV_ARGUMENTS : ]
    socket_id = int(sys.argv[PLUGIN_ARGV_SOCKET_ID])
    register_external_full_constructor(socket_id, self)
    # #define XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL_CONSTRUCTOR(socket_id, xpp)

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
  
  """ signals:
  
  screen-position-changed
  orientation-changed
  size-changed
  free-data
  save
  about
  configure-plugin
  
  """
  
  """ properties: (obj.props.xyz)
  
  name
  id
  display-name
  size
  screen-position
  expand
  """
  