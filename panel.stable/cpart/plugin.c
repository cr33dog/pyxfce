#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>

#include <libxfce4util/libxfce4util.h>  
#include <libxfcegui4/dialogs.h>
#include <panel/plugins.h>
#include <panel/xfce.h>
#include "xfce-cpart-slider-tiny.h"
#include "xfce-cpart-prefbox.h"
#include "xfce-cpart-preferences.h"
#include "xfce-cpart-control-vc.h"
#include "xfce-cpart-cache-vc.h"
#include "vcs.h"

/* DO: timeout -> update volume */
#define UPDATE_TIMEOUT 1000

typedef struct
{
	GtkSocket *socket;
} t_cpart;

GtkTooltips *tooltips = NULL;

static t_cpart *
cpart_new(void)
{
	t_cpart *cpart;
	GdkPixbuf *pb;
	GtkWidget *align;
	
	cpart = g_new0 (t_cpart, 1);

	cpart->socket = gtk_socket_new ();
	gtk_widget_show (cpart->socket);
	
	printf("X-Socket-ID=%ld\n", gtk_socket_get_id (cpart->socket));

	return cpart;
}

static gboolean
cpart_control_new (Control *ctrl)
{
	t_cpart *cpart;
	cpart = cpart_new ();
	gtk_container_add (GTK_CONTAINER(ctrl->base), cpart->socket);
	ctrl->data = (gpointer) cpart;
	ctrl->with_popup = FALSE;

	gtk_widget_set_size_request (ctrl->base, -1, -1);

	return TRUE;	
}

static void
cpart_control_free (Control *ctrl)
{
	t_cpart *cpart;
	g_return_if_fail(ctrl != NULL);
	g_return_if_fail(ctrl->data != NULL);
	vc_set_volume_callback (NULL, NULL);

	cpart = (t_cpart *)ctrl->data;
	g_free (cpart);
}

static void
cpart_read_config (Control *ctrl, xmlNodePtr parent)
{
	t_cpart *cpart;
	cpart = (t_cpart *) ctrl->data;

}

static void
cpart_write_config (Control *ctrl, xmlNodePtr parent)
{
	t_cpart *cpart;
	cpart = (t_cpart *) ctrl->data;
	
}

static void
cpart_attach_callback(Control *ctrl, const gchar *signal, GCallback cb,
                gpointer data)
{
	t_cpart *cpart;

	cpart = (t_cpart *) ctrl->data;
	
	/*
	g_signal_connect(cpart->ib, signal, cb, data);
	g_signal_connect(cpart->slider, signal, cb, data);
	*/
}

static void
cpart_set_size(Control *ctrl, int size)
{
	t_cpart	*cpart;
	
	cpart = (t_cpart *)ctrl->data;
	
	/*
	gtk_widget_set_size_request(GTK_WIDGET(cpart->ib), icon_size[size], icon_size[size]);
	gtk_widget_set_size_request(GTK_WIDGET(cpart->slider), slider_width, icon_size[size]);
	gtk_widget_queue_resize (GTK_WIDGET (cpart->slider));
	*/
}

static void
cpart_create_options (Control *ctrl, GtkContainer *con, GtkWidget *done)
{
	t_cpart	*cpart = (t_cpart *)ctrl->data;

	/*gtk_container_add (GTK_CONTAINER (con), w);*/
}

static void
cpart_set_theme(Control * control, const char *theme)
{
	GdkPixbuf	*pb;
	t_cpart		*cpart;
	
	cpart = (t_cpart *)control->data;
}

static void
cpart_set_orientation (Control * control, int orientation)
{
	t_cpart		*cpart;

	cpart = (t_cpart *)control->data;

	/*gtk_container_add (GTK_CONTAINER (control->base), sb->box);*/
}  

/* initialization */
G_MODULE_EXPORT void
xfce_control_class_init(ControlClass *cc)
{
	xfce_textdomain(GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR, "UTF-8");

	if (!tooltips)
		tooltips = gtk_tooltips_new ();
	register_vcs ();

	/* these are required */
	cc->name                = "cpart";
	cc->caption             = "Python Bindings CPart";
	cc->create_control      = (CreateControlFunc)cpart_control_new;
	cc->free                = cpart_control_free;
	cc->attach_callback     = cpart_attach_callback;

	/* options; don't define if you don't have any ;) */
	cc->read_config         = cpart_read_config;
	cc->write_config        = cpart_write_config;
	cc->create_options      = cpart_create_options;

	/* Don't use this function at all if you want xfce to
	 * do the sizing.
	 * Just define the set_size function to NULL, or rather, don't
         * set it to something else.
         */
	cc->set_size            = cpart_set_size;
	cc->set_theme		= cpart_set_theme;

	cc->set_orientation     = cpart_set_orientation;
	 
	control_class_set_unique (cc, TRUE);
}

G_MODULE_EXPORT void 
g_module_unload() 
{
}

/* required! defined in panel/plugins.h */
XFCE_PLUGIN_CHECK_INIT
