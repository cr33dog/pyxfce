/*
 * Copyright (C) 2009-2010 Nick Schermer <nick@xfce.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#ifndef __LIBXFCE4PANEL_47_H__
#define __LIBXFCE4PANEL_47_H__
#include <libxfce4panel/xfce-panel-plugin-provider.h>
#include <gdk/gdkx.h>
#include <stdlib.h>

#undef XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL

G_BEGIN_DECLS

/**
 * PYXFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL:
 * @construct_func : name of a function that can be cast to an
 *                   #XfcePanelPluginFunc
 * @preinit_func :   name of a function that can be case to #XfcePanelPluginPreInit
 *                   or %NULL
 * @check_func :     name of a function that can be cast to an
 *                   #XfcePanelPluginCheck or %NULL
 *
 * Same as XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_WITH_CHECK(), but with a
 * preinit function that is called before gtk_init(). This allows plugins
 * to initialize libraries or threads.
 *
 * Since: 4.8
 **/
#define PYXFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL_BODY(construct_func) \
  static GdkAtom          _xpp_atom = GDK_NONE; \
  static gdouble          _xpp_alpha = 1.00; \
  static guint            _xpp_bg_style = 0; \
  static GdkColor         _xpp_bg_color = { 0, }; \
  static const gchar     *_xpp_bg_image = NULL; \
  static cairo_pattern_t *_xpp_bg_image_cache = NULL; \
  static gboolean         _xpp_debug = FALSE; \
  static gint             _xpp_retval = PLUGIN_EXIT_FAILURE; \
  \
  static void \
  _xpp_quit_main_loop (void) \
  { \
     static gboolean quiting = FALSE; \
     \
     if (!quiting) \
       { \
         quiting = TRUE; \
         gtk_main_quit (); \
       } \
  } \
  \
  static gboolean \
  _xpp_client_event (GtkWidget       *plug, \
                     GdkEventClient  *event, \
                     XfcePanelPlugin *xpp) \
  { \
    XfcePanelPluginProvider          *provider = XFCE_PANEL_PLUGIN_PROVIDER (xpp); \
    gint                              value; \
    XfcePanelPluginProviderPropType   type; \
    \
    g_return_val_if_fail (XFCE_IS_PANEL_PLUGIN (xpp), TRUE); \
    g_return_val_if_fail (GTK_IS_PLUG (plug), TRUE); \
    g_return_val_if_fail (_xpp_atom != GDK_NONE, TRUE); \
    g_return_val_if_fail (XFCE_IS_PANEL_PLUGIN_PROVIDER (xpp), TRUE); \
    \
    if (event->message_type == _xpp_atom) \
      { \
        type = event->data.s[0]; \
        value = event->data.s[1]; \
        \
        switch (type) \
          { \
          case PROVIDER_PROP_TYPE_ACTION_REMOVED: \
            xfce_panel_plugin_provider_removed (provider); \
            break; \
            \
          case PROVIDER_PROP_TYPE_ACTION_SAVE: \
            xfce_panel_plugin_provider_save (provider); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_BACKGROUND_ALPHA: \
            _xpp_alpha = value / 100.00; \
            if (gtk_widget_is_composited (plug)) \
              gtk_widget_queue_draw (plug); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_LOCKED: \
            xfce_panel_plugin_provider_set_locked (provider, !!value); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_ORIENTATION: \
            xfce_panel_plugin_provider_set_orientation (provider, value); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_SCREEN_POSITION: \
            xfce_panel_plugin_provider_set_screen_position (provider, value); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_SENSITIVE: \
            gtk_widget_set_sensitive (plug, !!value); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_SIZE: \
            xfce_panel_plugin_provider_set_size (provider, value); \
            break; \
            \
          case PROVIDER_PROP_TYPE_ACTION_SHOW_ABOUT: \
            xfce_panel_plugin_provider_show_about (provider); \
            break; \
            \
          case PROVIDER_PROP_TYPE_ACTION_SHOW_CONFIGURE: \
            xfce_panel_plugin_provider_show_configure (provider); \
            break; \
            \
          case PROVIDER_PROP_TYPE_ACTION_QUIT_FOR_RESTART: \
            _xpp_retval = PLUGIN_EXIT_SUCCESS_AND_RESTART; \
          case PROVIDER_PROP_TYPE_ACTION_QUIT: \
            _xpp_quit_main_loop (); \
            break; \
            \
          case PROVIDER_PROP_TYPE_SET_BACKGROUND_COLOR: \
            _xpp_bg_color.red = event->data.s[1]; \
            _xpp_bg_color.green = event->data.s[2]; \
            _xpp_bg_color.blue = event->data.s[3]; \
            _xpp_bg_style = 1; \
            gtk_widget_queue_draw (plug); \
            break; \
            \
          case PROVIDER_PROP_TYPE_ACTION_BACKGROUND_UNSET: \
            _xpp_bg_style = 0; \
            gtk_widget_queue_draw (plug); \
            break; \
            \
          default: \
            g_warning ("Received unknow client event %u", type); \
            break; \
          } \
        \
        return FALSE; \
      } \
    \
    return TRUE; \
  } \
  \
  static void \
  _xpp_provider_signal (GtkWidget *xpp, \
                        guint      message, \
                        GtkWidget *plug) \
  { \
    GdkEventClient  event; \
    GdkWindow      *window; \
    gint            result; \
    \
    g_return_if_fail (GTK_IS_PLUG (plug)); \
    g_return_if_fail (XFCE_IS_PANEL_PLUGIN (xpp)); \
    g_return_if_fail (GTK_WIDGET_REALIZED (plug)); \
    g_return_if_fail (_xpp_atom != GDK_NONE); \
    g_return_if_fail (GTK_WIDGET_REALIZED (xpp)); \
    \
    if (_xpp_debug) \
      g_printerr ("xfce4-panel(%s): send provider signal %d\n", \
                  xfce_panel_plugin_get_name (XFCE_PANEL_PLUGIN (xpp)), message); \
    \
    event.type = GDK_CLIENT_EVENT; \
    event.window = gtk_widget_get_window (plug); \
    event.send_event = TRUE; \
    event.message_type = _xpp_atom; \
    event.data_format = 16; \
    event.data.s[0] = message; \
    event.data.s[1] = 0; \
    \
    window = gtk_plug_get_socket_window (GTK_PLUG (plug)); \
    g_return_if_fail (GDK_IS_WINDOW (window)); \
    \
    gdk_error_trap_push (); \
    gdk_event_send_client_message ((GdkEvent *) &event, GDK_WINDOW_XID (window)); \
    gdk_flush (); \
    result = gdk_error_trap_pop (); \
    if (G_UNLIKELY (result != 0)) \
      g_warning ("Failed to send provider-signal %d: X error code %d", message, result); \
  } \
  \
  static void \
  _xpp_realize (XfcePanelPlugin *xpp, \
                GtkPlug         *plug) \
  { \
    g_return_if_fail (XFCE_IS_PANEL_PLUGIN (xpp)); \
    g_return_if_fail (GTK_IS_PLUG (plug)); \
    g_return_if_fail (GTK_WIDGET_REALIZED (plug)); \
    \
    if (_xpp_debug) \
      g_printerr ("xfce4-panel(%s): calling plugin construct function\n", \
                  xfce_panel_plugin_get_name (xpp)); \
    \
    g_signal_handlers_disconnect_by_func (G_OBJECT (xpp), \
        G_CALLBACK (_xpp_realize), NULL); \
    \
    g_signal_connect (G_OBJECT (xpp), "provider-signal", \
        G_CALLBACK (_xpp_provider_signal), plug); \
    \
    ((XfcePanelPluginFunc) construct_func) (xpp); \
  } \
  \
  static gboolean \
  _xpp_expose_event (GtkWidget      *plug, \
                     GdkEventExpose *event) \
  { \
    cairo_t        *cr; \
    const GdkColor *color; \
    gdouble         real_alpha; \
    GdkPixbuf      *pixbuf; \
    GError         *error = NULL; \
    \
    if (!GTK_WIDGET_DRAWABLE (plug)) \
      return FALSE; \
    \
    if (G_UNLIKELY (_xpp_bg_style == 2)) \
      { \
        cr = gdk_cairo_create (gtk_widget_get_window (plug)); \
        cairo_set_operator (cr, CAIRO_OPERATOR_SOURCE); \
        gdk_cairo_rectangle (cr, &event->area); \
        cairo_clip (cr); \
        \
        if (G_LIKELY (_xpp_bg_image_cache != NULL)) \
          { \
            cairo_set_source (cr, _xpp_bg_image_cache); \
            cairo_paint (cr); \
          } \
        else \
          { \
            /* load the image in a pixbuf */ \
            pixbuf = gdk_pixbuf_new_from_file (_xpp_bg_image, &error); \
            if (G_LIKELY (pixbuf != NULL)) \
              { \
                gdk_cairo_set_source_pixbuf (cr, pixbuf, 0, 0); \
                g_object_unref (G_OBJECT (pixbuf)); \
                \
                _xpp_bg_image_cache = cairo_get_source (cr); \
                cairo_pattern_reference (_xpp_bg_image_cache); \
                cairo_pattern_set_extend (_xpp_bg_image_cache, CAIRO_EXTEND_REPEAT); \
                cairo_paint (cr); \
              } \
            else \
              { \
                /* print error message */ \
                g_warning ("Background image disabled, \"%s\" could not be loaded: %s", \
                           _xpp_bg_image, error != NULL ? error->message : "No error"); \
                g_error_free (error); \
                \
                /* disable background image */ \
                _xpp_bg_style = 0; \
              } \
          } \
        \
        cairo_destroy (cr); \
      } \
    else \
      { \
        real_alpha = gtk_widget_is_composited (plug) ? _xpp_alpha : 1.00; \
        \
        if (_xpp_bg_style == 1 || real_alpha < 1.00) \
          { \
            if (G_LIKELY (_xpp_bg_style == 0)) \
              color = &(gtk_widget_get_style (plug)->bg[GTK_STATE_NORMAL]); \
            else \
              color = &_xpp_bg_color; \
            \
            cr = gdk_cairo_create (gtk_widget_get_window (plug)); \
            cairo_set_operator (cr, CAIRO_OPERATOR_SOURCE); \
            cairo_set_source_rgba (cr, \
                                   color->red / 65535.00, \
                                   color->green / 65535.00, \
                                   color->blue / 65535.00, \
                                   real_alpha); \
            gdk_cairo_rectangle (cr, &event->area); \
            cairo_fill (cr); \
            cairo_destroy (cr); \
          } \
      } \
    \
    return FALSE; \
  } \
  \
  static void \
  _xpp_plug_embedded (GtkPlug *plug) \
  { \
    g_return_if_fail (GTK_IS_PLUG (plug)); \
    \
    if (!gtk_plug_get_embedded (plug)) \
      _xpp_quit_main_loop (); \
  }

#define PYXFCE_FOO(preinit_func, check_func) \
  gint \
  main (gint argc, gchar **argv) \
  { \
    GtkWidget       *plug; \
    GdkScreen       *screen; \
    GtkWidget       *xpp; \
    gint             unique_id; \
    GdkNativeWindow  socket_id; \
    GdkColormap     *colormap = NULL; \
    const gchar     *value; \
    gchar           *base_name; \
    \
    value = g_getenv ("PANEL_DEBUG"); \
    if (G_UNLIKELY (value != NULL)) \
      { \
        _xpp_debug = TRUE; \
        \
        base_name = g_filename_display_basename (argv[0]);\
        g_printerr ("xfce4-panel(%s): compiled against libxfce4panel %s\n", \
                    base_name, LIBXFCE4PANEL_VERSION); \
        g_free (base_name); \
      } \
    \
    if (G_UNLIKELY (argc < PLUGIN_ARGV_ARGUMENTS)) \
      { \
        g_critical ("Not enough arguments are passed to the plugin"); \
        return PLUGIN_EXIT_ARGUMENTS_FAILED; \
      } \
    \
    if (G_UNLIKELY (preinit_func != NULL)) \
      { \
        if (!((XfcePanelPluginPreInit) preinit_func) (argc, argv)) \
          return PLUGIN_EXIT_PREINIT_FAILED; \
      } \
    \
    gtk_init (&argc, &argv); \
    \
    if (check_func != NULL) \
      { \
        screen = gdk_screen_get_default (); \
        if (!((XfcePanelPluginCheck) check_func) (screen)) \
          return PLUGIN_EXIT_CHECK_FAILED; \
      } \
    \
    _xpp_atom = gdk_atom_intern_static_string (_PANEL_CLIENT_EVENT_ATOM); \
    \
    socket_id = strtol (argv[PLUGIN_ARGV_SOCKET_ID], NULL, 0); \
    plug = gtk_plug_new (socket_id); \
    gtk_widget_set_name (GTK_WIDGET (plug), "XfcePanelWindowExternal"); \
    g_signal_connect (G_OBJECT (plug), "embedded", \
        G_CALLBACK (_xpp_plug_embedded), NULL); \
    g_signal_connect (G_OBJECT (plug), "expose-event", \
        G_CALLBACK (_xpp_expose_event), NULL); \
    \
    gtk_widget_set_app_paintable (plug, TRUE); \
    \
    screen = gtk_widget_get_screen (plug); \
    \
    colormap = gdk_screen_get_rgba_colormap (screen); \
    if (colormap == NULL) \
      colormap = gdk_screen_get_rgb_colormap (screen); \
    if (colormap != NULL) \
      gtk_widget_set_colormap (plug, colormap); \
    \
    unique_id = strtol (argv[PLUGIN_ARGV_UNIQUE_ID], NULL, 0); \
    xpp = g_object_new (XFCE_TYPE_PANEL_PLUGIN, \
                        "name", argv[PLUGIN_ARGV_NAME], \
                        "unique-id", unique_id, \
                        "display-name", argv[PLUGIN_ARGV_DISPLAY_NAME], \
                        "comment", argv[PLUGIN_ARGV_COMMENT],  \
                        "arguments", argv + PLUGIN_ARGV_ARGUMENTS, NULL); \
    gtk_container_add (GTK_CONTAINER (plug), xpp); \
    g_signal_connect_after (G_OBJECT (xpp), "realize", \
        G_CALLBACK (_xpp_realize), plug); \
    g_signal_connect_after (G_OBJECT (xpp), "destroy", \
        G_CALLBACK (_xpp_quit_main_loop), NULL); \
    gtk_widget_show (xpp); \
    \
    if (*argv[PLUGIN_ARGV_BACKGROUND_IMAGE] != '\0') \
      { \
        _xpp_bg_image = argv[PLUGIN_ARGV_BACKGROUND_IMAGE]; \
        _xpp_bg_style = 2; \
      } \
    \
    g_signal_connect (G_OBJECT (plug), "client-event", \
       G_CALLBACK (_xpp_client_event), xpp); \
    gtk_widget_show (plug); \
    \
    gtk_main (); \
    \
    if (_xpp_retval != PLUGIN_EXIT_SUCCESS_AND_RESTART) \
      _xpp_retval = PLUGIN_EXIT_SUCCESS; \
    \
    if (_xpp_bg_image_cache != NULL) \
      cairo_pattern_destroy (_xpp_bg_image_cache); \
    \
    if (GTK_IS_WIDGET (plug)) \
      gtk_widget_destroy (plug); \
    \
    return _xpp_retval; \
  }

#define PYXFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL_CONSTRUCTOR(socket_id, xpp) \
    GtkWidget       *plug; \
    GdkScreen       *screen; \
    GdkColormap     *colormap = NULL; \
    _xpp_atom = gdk_atom_intern_static_string (_PANEL_CLIENT_EVENT_ATOM); \
    plug = gtk_plug_new (socket_id); \
    gtk_widget_set_name (GTK_WIDGET (plug), "XfcePanelWindowExternal"); \
    g_signal_connect (G_OBJECT (plug), "embedded", \
        G_CALLBACK (_xpp_plug_embedded), NULL); \
    g_signal_connect (G_OBJECT (plug), "expose-event", \
        G_CALLBACK (_xpp_expose_event), NULL); \
    \
    gtk_widget_set_app_paintable (plug, TRUE); \
    \
    screen = gtk_widget_get_screen (plug); \
    \
    colormap = gdk_screen_get_rgba_colormap (screen); \
    if (colormap == NULL) \
      colormap = gdk_screen_get_rgb_colormap (screen); \
    if (colormap != NULL) \
      gtk_widget_set_colormap (plug, colormap); \
    gtk_container_add (GTK_CONTAINER (plug), xpp); \
    g_signal_connect_after (G_OBJECT (xpp), "realize", \
        G_CALLBACK (_xpp_realize), plug); \
    g_signal_connect_after (G_OBJECT (xpp), "destroy", \
        G_CALLBACK (_xpp_quit_main_loop), NULL); \
    gtk_widget_show (xpp); \
    \
    if (0) \
      { \
        /*_xpp_bg_image = argv[PLUGIN_ARGV_BACKGROUND_IMAGE];FIXME*/ \
        /*_xpp_bg_style = 2; FIXME */ \
      } \
    \
    g_signal_connect (G_OBJECT (plug), "client-event", \
       G_CALLBACK (_xpp_client_event), xpp); \
    gtk_widget_show (plug);

G_END_DECLS

#endif /* !__LIBXFCE4PANEL_47_H__ */
