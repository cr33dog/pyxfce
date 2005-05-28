/* test with:

gcc -o test-xfce-mcs-client test-xfce-mcs-client.c -g -I.. $(pkg-config --cflags --libs gtk+-2.0 libxfce4mcs-client-1.0 libxfce4mcs-manager-1.0) ../xfce-mcs-client.c ../xfce-mcs-channel.c ../xfce-mcs-manager.c

*/
#include <gtk/gtk.h>
#include "xfce-mcs-client.h"
#include "xfce-mcs-channel.h"


static void
setting_changed_cb(XfceMcsClient *client, gchar const *name, gpointer userdata)
{
	g_warning ("setting %s changed", name);
}

int main(int argc, char *argv[])
{
	XfceMcsClient *client;
	XfceMcsChannel *channel;
	
	gtk_init (&argc, &argv);

	client = xfce_mcs_client_new ();
	channel = xfce_mcs_client_add_channel (client, "X");
	
	/*g_signal_connect (G_OBJECT (channel), "setting-changed", G_CALLBACK (setting_changed_cb), NULL);*/
	
	gtk_main ();
}

