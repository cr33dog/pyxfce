#!/usr/bin/env python

import gtk
import xfce4

def get_cmap(drawable):
	cmap = drawable.get_colormap()
	if cmap == None:
		if drawable.get_depth() == 1:
			cmap = None # try null cmap
		else: # try system
			cmap = gtk.gdk.colormap_get_system()

	if cmap != None:
		# dont crash with visual mismatch
		if cmap.get_visual().depth != drawable.get_depth():
			cmap = None

	return cmap

def pixbuf_from_pixmap(pixmap):
	width, height = pixmap.get_size()
	pb = gtk.gdk.Pixbuf(gtk.gdk.COLORSPACE_RGB, True, 8, width, height)
	cmap = get_cmap(pixmap)
	buf = pb.get_from_drawable(pixmap, cmap, 0, 0, 0, 0, width, height)
	return buf
	
screen = xfce4.netk.screen_get_default()
map = screen.get_background_pixmap()
buf = pixbuf_from_pixmap(map)

if __name__ == "__main__":
	pb = buf.scale_simple(buf.get_width() / 4, buf.get_height() / 4, gtk.gdk.INTERP_BILINEAR)
	w = gtk.Window()
	w.connect("destroy", lambda x: gtk.main_quit())
	image = gtk.Image()
	image.set_from_pixbuf(pb)
	image.show()
	w.add(image)
	w.show()
	
	gtk.main()
