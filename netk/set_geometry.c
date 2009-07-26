#include <libxfcegui4/libxfcegui4.h>

static void p_netk_move_window (Screen * screen, Window xwindow, int x, int y, int width, int height);
Screen *p_netk_screen_get_xscreen (NetkScreen * screen);
Atom p_netk_atom_get (const char *atom_name);

#define NETK_SCREEN_XSCREEN(screen) (p_netk_screen_get_xscreen (screen))

/**
* netk_window_set_geometry:
* @window: a #NetkWindow
* @x: the new x coordinate of the default corner, or -1 to leave unchanged.
* @y: the new y coordinate of the default corner, or -1 to leave unchanged.
* @width: the new width of the window, or -1 to leave unchanged.
* @height: the new height of the window, or -1 to leave unchanged.
* 
* Note that the geometry is NOT changed immediately but rather by the window manager when or if it sees fit.
*/
void
netk_window_set_geometry(NetkWindow* window, int x, int y, int width, int height)
/*const GdkGeometry* geometry*/
{
    g_return_if_fail (NETK_IS_WINDOW (window));
    /** uses "_NET_MOVERESIZE_WINDOW" to set the geometry. */
    p_netk_move_window (NETK_SCREEN_XSCREEN (netk_window_get_screen (window)), netk_window_get_xid (window), x, y, width, height);
}

/* TODO maybe fallback to manual XMoveWindow since Xfce <= 4.4 didn't support "_NET_MOVERESIZE_WINDOW".*/
/* pass -1 for the field that you do not want to change. */
void
p_netk_move_window (Screen * screen, Window xwindow, int x, int y, int width, int height)
{
    XEvent xev;
    unsigned long grflags = 0; /* default gravity, */

    xev.xclient.type = ClientMessage;
    xev.xclient.serial = 0;
    xev.xclient.send_event = True;
    xev.xclient.display = gdk_display;
    xev.xclient.window = xwindow;
    xev.xclient.message_type = p_netk_atom_get ("_NET_MOVERESIZE_WINDOW");
    xev.xclient.format = 32;

    if (x != -1)
        grflags |= (1 << 8);
        
    if (y != -1)
        grflags |= (1 << 9);
        
    if (width != -1)
        grflags |= (1 << 10);
        
    if (height != -1)
        grflags |= (1 << 11);
    
    xev.xclient.data.l[0] = grflags;
    xev.xclient.data.l[1] = x;
    xev.xclient.data.l[2] = y;
    xev.xclient.data.l[3] = width;
    xev.xclient.data.l[4] = height;

    XSendEvent (gdk_display, RootWindowOfScreen (screen), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);
}

