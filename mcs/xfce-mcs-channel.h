/* Generated by GOB (v2.0.9)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>
#ifndef __XFCE_MCS_CHANNEL_H__
#define __XFCE_MCS_CHANNEL_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#include <gtk/gtk.h>
#include <libxfce4mcs/mcs-common.h>
#include <libxfce4mcs/mcs-client.h>

#ifndef __TYPEDEF_XFCE_MCS_CLIENT__
#define __TYPEDEF_XFCE_MCS_CLIENT__
typedef struct _XfceMcsClient XfceMcsClient;
#endif

#ifndef __TYPEDEF_XFCE_MCS_MANAGER__
#define __TYPEDEF_XFCE_MCS_MANAGER__
typedef struct _XfceMcsManager XfceMcsManager;
#endif



typedef enum {
	XFCE_MCS_CHANNEL_SIDE_CLIENT,
	XFCE_MCS_CHANNEL_SIDE_MANAGER
} XfceMcsChannelSide;
#define XFCE_TYPE_MCS_CHANNEL_SIDE xfce_mcs_channel_side_get_type()
GType xfce_mcs_channel_side_get_type (void);


/*
 * Type checking and casting macros
 */
#define XFCE_TYPE_MCS_CHANNEL	(xfce_mcs_channel_get_type())
#define XFCE_MCS_CHANNEL(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), xfce_mcs_channel_get_type(), XfceMcsChannel)
#define XFCE_MCS_CHANNEL_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), xfce_mcs_channel_get_type(), XfceMcsChannel const)
#define XFCE_MCS_CHANNEL_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), xfce_mcs_channel_get_type(), XfceMcsChannelClass)
#define XFCE_IS_MCS_CHANNEL(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), xfce_mcs_channel_get_type ())

#define XFCE_MCS_CHANNEL_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), xfce_mcs_channel_get_type(), XfceMcsChannelClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_XFCE_MCS_CHANNEL__
#define __TYPEDEF_XFCE_MCS_CHANNEL__
typedef struct _XfceMcsChannel XfceMcsChannel;
#endif
struct _XfceMcsChannel {
	GObject __parent__;
	/*< private >*/
	gchar * channel_name; /* protected */
	XfceMcsClient * client; /* protected */
	XfceMcsManager * manager; /* protected */
};

/*
 * Class definition
 */
typedef struct _XfceMcsChannelClass XfceMcsChannelClass;
struct _XfceMcsChannelClass {
	GObjectClass __parent__;
	/*signal*/void (* setting_changed) (XfceMcsChannel * self, gchar const * name);
	/*signal*/void (* setting_deleted) (XfceMcsChannel * self, gchar const * name);
	/*signal*/void (* setting_added) (XfceMcsChannel * self, gchar const * name);
};


/*
 * Public methods
 */
GType	xfce_mcs_channel_get_type	(void);
gchar * 	xfce_mcs_channel_get_channel_name	(XfceMcsChannel * self);
void 	xfce_mcs_channel_setting_changed	(XfceMcsChannel * self,
					gchar const * name);
void 	xfce_mcs_channel_setting_deleted	(XfceMcsChannel * self,
					gchar const * name);
void 	xfce_mcs_channel_setting_added	(XfceMcsChannel * self,
					gchar const * name);
XfceMcsChannel * 	xfce_mcs_channel_new	(gpointer actor,
					XfceMcsChannelSide side,
					gchar const * name);
gchar * 	xfce_mcs_channel_get_setting	(XfceMcsChannel * self,
					gchar const * name);
gchar * 	xfce_mcs_channel_get_setting_string	(XfceMcsChannel * self,
					gchar const * name);
gboolean 	xfce_mcs_channel_get_setting_color	(XfceMcsChannel * self,
					gchar const * name,
					McsColor * color);
gboolean 	xfce_mcs_channel_get_setting_int	(XfceMcsChannel * self,
					gchar const * name,
					int * result);
void 	xfce_mcs_channel_set_setting	(XfceMcsChannel * self,
					gchar const * name,
					gchar const * value);
void 	xfce_mcs_channel_set_setting_string	(XfceMcsChannel * self,
					gchar const * name,
					gchar const * value);
void 	xfce_mcs_channel_set_setting_int	(XfceMcsChannel * self,
					gchar const * name,
					int value);
void 	xfce_mcs_channel_set_setting_color	(XfceMcsChannel * self,
					gchar const * name,
					McsColor const * value);
void 	xfce_mcs_channel_delete_setting	(XfceMcsChannel * self,
					gchar const * name);
void 	xfce_mcs_channel_add_channel_from_file	(XfceMcsChannel * self,
					gchar const * filename);
void 	xfce_mcs_channel_save_channel_to_file	(XfceMcsChannel * self,
					gchar const * filename);

/*
 * Signal connection wrapper macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define xfce_mcs_channel_connect__setting_changed(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_changed",(GCallback) __extension__ ({void (* ___setting_changed) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_changed; }), (data))
#define xfce_mcs_channel_connect_after__setting_changed(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_changed",(GCallback) __extension__ ({void (* ___setting_changed) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_changed; }), (data))
#define xfce_mcs_channel_connect_data__setting_changed(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_changed",(GCallback) __extension__ ({void (* ___setting_changed) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_changed; }), (data), (destroy_data), (GConnectFlags)(flags))
#define xfce_mcs_channel_connect__setting_deleted(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_deleted",(GCallback) __extension__ ({void (* ___setting_deleted) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_deleted; }), (data))
#define xfce_mcs_channel_connect_after__setting_deleted(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_deleted",(GCallback) __extension__ ({void (* ___setting_deleted) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_deleted; }), (data))
#define xfce_mcs_channel_connect_data__setting_deleted(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_deleted",(GCallback) __extension__ ({void (* ___setting_deleted) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_deleted; }), (data), (destroy_data), (GConnectFlags)(flags))
#define xfce_mcs_channel_connect__setting_added(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_added",(GCallback) __extension__ ({void (* ___setting_added) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_added; }), (data))
#define xfce_mcs_channel_connect_after__setting_added(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_added",(GCallback) __extension__ ({void (* ___setting_added) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_added; }), (data))
#define xfce_mcs_channel_connect_data__setting_added(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(__extension__ ({XfceMcsChannel *___object = (object); ___object; })),"setting_added",(GCallback) __extension__ ({void (* ___setting_added) (XfceMcsChannel * ___fake___self, gchar const * ___fake___name, gpointer ___data ) = (func); ___setting_added; }), (data), (destroy_data), (GConnectFlags)(flags))
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define xfce_mcs_channel_connect__setting_changed(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(object),"setting_changed",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_after__setting_changed(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(object),"setting_changed",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_data__setting_changed(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(object),"setting_changed",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#define xfce_mcs_channel_connect__setting_deleted(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(object),"setting_deleted",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_after__setting_deleted(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(object),"setting_deleted",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_data__setting_deleted(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(object),"setting_deleted",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#define xfce_mcs_channel_connect__setting_added(object,func,data)	g_signal_connect(XFCE_MCS_CHANNEL(object),"setting_added",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_after__setting_added(object,func,data)	g_signal_connect_after(XFCE_MCS_CHANNEL(object),"setting_added",(GCallback)(func),(data))
#define xfce_mcs_channel_connect_data__setting_added(object,func,data,destroy_data,flags)	g_signal_connect_data(XFCE_MCS_CHANNEL(object),"setting_added",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#endif /* __GNUC__ && !__STRICT_ANSI__ */


/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define XFCE_MCS_CHANNEL_GET_PROP_CHANNEL_NAME(arg)	"channel_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define XFCE_MCS_CHANNEL_GET_PROP_CHANNEL_NAME(arg)	"channel_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
