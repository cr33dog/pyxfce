/* Generated by GOB (v2.0.9) on Sat May 28 15:16:48 2005
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 9

#define selfp (self->_priv)

#include "xfce-mcs-channel.h"

#include "xfce-mcs-channel-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "xfce-mcs-channel.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include <stdlib.h>
#include "xfce-mcs-manager-private.h"
#include "xfce-mcs-client-private.h"

#line 40 "xfce-mcs-channel.c"

#line 13 "xfce-mcs-channel.gob"

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


#line 59 "xfce-mcs-channel.c"
static const GEnumValue _xfce_mcs_channel_side_values[] = {
	{ XFCE_MCS_CHANNEL_SIDE_CLIENT, (char *)"XFCE_MCS_CHANNEL_SIDE_CLIENT", (char *)"side-client" },
	{ XFCE_MCS_CHANNEL_SIDE_MANAGER, (char *)"XFCE_MCS_CHANNEL_SIDE_MANAGER", (char *)"side-manager" },
	{ 0, NULL, NULL }
};

GType
xfce_mcs_channel_side_get_type (void)
{
	static GType type = 0;
	if ___GOB_UNLIKELY(type == 0)
		type = g_enum_register_static ("XfceMcsChannelSide", _xfce_mcs_channel_side_values);
	return type;
}

/* self casting macros */
#define SELF(x) XFCE_MCS_CHANNEL(x)
#define SELF_CONST(x) XFCE_MCS_CHANNEL_CONST(x)
#define IS_SELF(x) XFCE_IS_MCS_CHANNEL(x)
#define TYPE_SELF XFCE_TYPE_MCS_CHANNEL
#define SELF_CLASS(x) XFCE_MCS_CHANNEL_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MCS_CHANNEL_GET_CLASS(x)

/* self typedefs */
typedef XfceMcsChannel Self;
typedef XfceMcsChannelClass SelfClass;

/* here are local prototypes */
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void xfce_mcs_channel_class_init (XfceMcsChannelClass * c) G_GNUC_UNUSED;
static McsSetting * xfce_mcs_channel_get_setting_low (XfceMcsChannel * self, gchar const * name) G_GNUC_UNUSED;
static void xfce_mcs_channel_init (XfceMcsChannel * self) G_GNUC_UNUSED;

/*
 * Signal connection wrapper macro shortcuts
 */
#define self_connect__setting_changed(object,func,data)	xfce_mcs_channel_connect__setting_changed((object),(func),(data))
#define self_connect_after__setting_changed(object,func,data)	xfce_mcs_channel_connect_after__setting_changed((object),(func),(data))
#define self_connect_data__setting_changed(object,func,data,destroy_data,flags)	xfce_mcs_channel_connect_data__setting_changed((object),(func),(data),(destroy_data),(flags))
#define self_connect__setting_deleted(object,func,data)	xfce_mcs_channel_connect__setting_deleted((object),(func),(data))
#define self_connect_after__setting_deleted(object,func,data)	xfce_mcs_channel_connect_after__setting_deleted((object),(func),(data))
#define self_connect_data__setting_deleted(object,func,data,destroy_data,flags)	xfce_mcs_channel_connect_data__setting_deleted((object),(func),(data),(destroy_data),(flags))
#define self_connect__setting_added(object,func,data)	xfce_mcs_channel_connect__setting_added((object),(func),(data))
#define self_connect_after__setting_added(object,func,data)	xfce_mcs_channel_connect_after__setting_added((object),(func),(data))
#define self_connect_data__setting_added(object,func,data,destroy_data,flags)	xfce_mcs_channel_connect_data__setting_added((object),(func),(data),(destroy_data),(flags))

typedef void  (*___Sig1) (XfceMcsChannel *, gchar *, gpointer);

static void
___marshal_Sig1 (GClosure *closure,
	GValue *return_value G_GNUC_UNUSED,
	guint n_param_values,
	const GValue *param_values,
	gpointer invocation_hint G_GNUC_UNUSED,
	gpointer marshal_data)
{
	register ___Sig1 callback;
	register GCClosure *cc = (GCClosure*) closure;
	register gpointer data1, data2;

	g_return_if_fail (n_param_values == 2);

	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = g_value_peek_pointer (param_values + 0);
	} else {
		data1 = g_value_peek_pointer (param_values + 0);
		data2 = closure->data;
	}

	callback = (___Sig1) (marshal_data != NULL ? marshal_data : cc->callback);

	callback ((XfceMcsChannel *)data1,
		(gchar *) g_value_get_string (param_values + 1),
		data2);
}


enum {
	SETTING_CHANGED_SIGNAL,
	SETTING_DELETED_SIGNAL,
	SETTING_ADDED_SIGNAL,
	LAST_SIGNAL
};

enum {
	PROP_0,
	PROP_CHANNEL_NAME
};

static guint object_signals[LAST_SIGNAL] = {0};

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_get_channel_name xfce_mcs_channel_get_channel_name
#define self_setting_changed xfce_mcs_channel_setting_changed
#define self_setting_deleted xfce_mcs_channel_setting_deleted
#define self_setting_added xfce_mcs_channel_setting_added
#define self_new xfce_mcs_channel_new
#define self_add_to_driver xfce_mcs_channel_add_to_driver
#define self_get_setting_low xfce_mcs_channel_get_setting_low
#define self_get_setting xfce_mcs_channel_get_setting
#define self_get_setting_string xfce_mcs_channel_get_setting_string
#define self_get_setting_color xfce_mcs_channel_get_setting_color
#define self_get_setting_int xfce_mcs_channel_get_setting_int
#define self_set_setting xfce_mcs_channel_set_setting
#define self_delay_notify xfce_mcs_channel_delay_notify
#define self_set_setting_string xfce_mcs_channel_set_setting_string
#define self_set_setting_int xfce_mcs_channel_set_setting_int
#define self_set_setting_color xfce_mcs_channel_set_setting_color
#define self_delete_setting xfce_mcs_channel_delete_setting
#define self_add_channel_from_file xfce_mcs_channel_add_channel_from_file
#define self_save_channel_to_file xfce_mcs_channel_save_channel_to_file
GType
xfce_mcs_channel_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMcsChannelClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mcs_channel_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMcsChannel),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mcs_channel_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "XfceMcsChannel", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMcsChannel *)g_object_new(xfce_mcs_channel_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMcsChannel * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMcsChannel *
GET_NEW_VARG (const char *first, ...)
{
	XfceMcsChannel *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMcsChannel *)g_object_new_valist (xfce_mcs_channel_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::finalize"
	XfceMcsChannel *self  G_GNUC_UNUSED = XFCE_MCS_CHANNEL (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#define channel_name (self->channel_name)
#define VAR channel_name
	{
#line 38 "xfce-mcs-channel.gob"
	
			g_free (VAR);
			VAR = NULL;
		}
#line 234 "xfce-mcs-channel.c"
	memset(&channel_name, 0, sizeof(channel_name));
#undef VAR
#undef channel_name
#define client (self->client)
#define VAR client
	{
#line 44 "xfce-mcs-channel.gob"
	
			if (VAR) {
				g_object_unref ((GObject *) VAR);
				VAR = NULL;
			}
		}
#line 248 "xfce-mcs-channel.c"
	memset(&client, 0, sizeof(client));
#undef VAR
#undef client
#define manager (self->manager)
#define VAR manager
	{
#line 52 "xfce-mcs-channel.gob"
	
			if (VAR) {
				g_object_unref ((GObject *) VAR);
				VAR = NULL;
			}
		}
#line 262 "xfce-mcs-channel.c"
	memset(&manager, 0, sizeof(manager));
#undef VAR
#undef manager
}
#undef __GOB_FUNCTION__

static void 
xfce_mcs_channel_class_init (XfceMcsChannelClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

	object_signals[SETTING_CHANGED_SIGNAL] =
		g_signal_new ("setting_changed",
			G_TYPE_FROM_CLASS (g_object_class),
			(GSignalFlags)(G_SIGNAL_RUN_FIRST | G_SIGNAL_ACTION),
			G_STRUCT_OFFSET (XfceMcsChannelClass, setting_changed),
			NULL, NULL,
			___marshal_Sig1,
			G_TYPE_NONE, 1,
			G_TYPE_STRING);
	if ___GOB_UNLIKELY(sizeof(gchar const * ) != sizeof(gchar *) || parent_class == NULL /* avoid warning */) {
		g_error("xfce-mcs-channel.gob line 69: Type mismatch of \"setting_changed\" signal signature");
	}
	object_signals[SETTING_DELETED_SIGNAL] =
		g_signal_new ("setting_deleted",
			G_TYPE_FROM_CLASS (g_object_class),
			(GSignalFlags)(G_SIGNAL_RUN_FIRST | G_SIGNAL_ACTION),
			G_STRUCT_OFFSET (XfceMcsChannelClass, setting_deleted),
			NULL, NULL,
			___marshal_Sig1,
			G_TYPE_NONE, 1,
			G_TYPE_STRING);
	if ___GOB_UNLIKELY(sizeof(gchar const * ) != sizeof(gchar *) || parent_class == NULL /* avoid warning */) {
		g_error("xfce-mcs-channel.gob line 74: Type mismatch of \"setting_deleted\" signal signature");
	}
	object_signals[SETTING_ADDED_SIGNAL] =
		g_signal_new ("setting_added",
			G_TYPE_FROM_CLASS (g_object_class),
			(GSignalFlags)(G_SIGNAL_RUN_FIRST | G_SIGNAL_ACTION),
			G_STRUCT_OFFSET (XfceMcsChannelClass, setting_added),
			NULL, NULL,
			___marshal_Sig1,
			G_TYPE_NONE, 1,
			G_TYPE_STRING);
	if ___GOB_UNLIKELY(sizeof(gchar const * ) != sizeof(gchar *) || parent_class == NULL /* avoid warning */) {
		g_error("xfce-mcs-channel.gob line 79: Type mismatch of \"setting_added\" signal signature");
	}

	c->setting_changed = NULL;
	c->setting_deleted = NULL;
	c->setting_added = NULL;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_string
		("channel_name" /* name */,
		 "channel name" /* nick */,
		 "The MCS channel name" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE));
	g_object_class_install_property (g_object_class,
		PROP_CHANNEL_NAME,
		param_spec);
    }
}
#undef __GOB_FUNCTION__
#line 188 "xfce-mcs-channel.gob"
static void 
xfce_mcs_channel_init (XfceMcsChannel * self G_GNUC_UNUSED)
#line 337 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::init"
#line 13 "xfce-mcs-channel.gob"
	self->channel_name = NULL;
#line 342 "xfce-mcs-channel.c"
#line 38 "xfce-mcs-channel.gob"
	self->client = NULL;
#line 345 "xfce-mcs-channel.c"
#line 44 "xfce-mcs-channel.gob"
	self->manager = NULL;
#line 348 "xfce-mcs-channel.c"
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_property"
{
	XfceMcsChannel *self G_GNUC_UNUSED;

	self = XFCE_MCS_CHANNEL (object);

	switch (property_id) {
	case PROP_CHANNEL_NAME:
		{
#line 63 "xfce-mcs-channel.gob"

			g_value_set_string (VAL, self->channel_name);
		
#line 370 "xfce-mcs-channel.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__


#line 63 "xfce-mcs-channel.gob"
gchar * 
xfce_mcs_channel_get_channel_name (XfceMcsChannel * self)
#line 389 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_channel_name"
{
#line 59 "xfce-mcs-channel.gob"
		gchar* val; g_object_get (G_OBJECT (self), "channel_name", &val, NULL); return val;
}}
#line 396 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 69 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_setting_changed (XfceMcsChannel * self, gchar const * name)
#line 402 "xfce-mcs-channel.c"
{
	GValue ___param_values[2];
	GValue ___return_val;

memset (&___return_val, 0, sizeof (___return_val));
memset (&___param_values, 0, sizeof (___param_values));

#line 69 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 69 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 414 "xfce-mcs-channel.c"

	___param_values[0].g_type = 0;
	g_value_init (&___param_values[0], G_TYPE_FROM_INSTANCE (self));
	g_value_set_instance (&___param_values[0], (gpointer) self);

	___param_values[1].g_type = 0;
	g_value_init (&___param_values[1], G_TYPE_STRING);
	g_value_set_static_string (&___param_values[1], (gchar *) name);

	g_signal_emitv (___param_values,
		object_signals[SETTING_CHANGED_SIGNAL],
		0 /* detail */,
		&___return_val);

	g_value_unset (&___param_values[0]);
	g_value_unset (&___param_values[1]);
}

#line 74 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_setting_deleted (XfceMcsChannel * self, gchar const * name)
#line 436 "xfce-mcs-channel.c"
{
	GValue ___param_values[2];
	GValue ___return_val;

memset (&___return_val, 0, sizeof (___return_val));
memset (&___param_values, 0, sizeof (___param_values));

#line 74 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 74 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 448 "xfce-mcs-channel.c"

	___param_values[0].g_type = 0;
	g_value_init (&___param_values[0], G_TYPE_FROM_INSTANCE (self));
	g_value_set_instance (&___param_values[0], (gpointer) self);

	___param_values[1].g_type = 0;
	g_value_init (&___param_values[1], G_TYPE_STRING);
	g_value_set_static_string (&___param_values[1], (gchar *) name);

	g_signal_emitv (___param_values,
		object_signals[SETTING_DELETED_SIGNAL],
		0 /* detail */,
		&___return_val);

	g_value_unset (&___param_values[0]);
	g_value_unset (&___param_values[1]);
}

#line 79 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_setting_added (XfceMcsChannel * self, gchar const * name)
#line 470 "xfce-mcs-channel.c"
{
	GValue ___param_values[2];
	GValue ___return_val;

memset (&___return_val, 0, sizeof (___return_val));
memset (&___param_values, 0, sizeof (___param_values));

#line 79 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 79 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 482 "xfce-mcs-channel.c"

	___param_values[0].g_type = 0;
	g_value_init (&___param_values[0], G_TYPE_FROM_INSTANCE (self));
	g_value_set_instance (&___param_values[0], (gpointer) self);

	___param_values[1].g_type = 0;
	g_value_init (&___param_values[1], G_TYPE_STRING);
	g_value_set_static_string (&___param_values[1], (gchar *) name);

	g_signal_emitv (___param_values,
		object_signals[SETTING_ADDED_SIGNAL],
		0 /* detail */,
		&___return_val);

	g_value_unset (&___param_values[0]);
	g_value_unset (&___param_values[1]);
}

#line 84 "xfce-mcs-channel.gob"
XfceMcsChannel * 
xfce_mcs_channel_new (gchar const * name)
#line 504 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::new"
{
#line 85 "xfce-mcs-channel.gob"
	
		XfceMcsChannel* channel;
		channel = GET_NEW;

		channel->channel_name = g_strdup (name);

		return channel;
	}}
#line 517 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 94 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_add_to_driver (XfceMcsChannel * self, gpointer actor, XfceMcsChannelSide side)
#line 523 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::add_to_driver"
#line 94 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 94 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 530 "xfce-mcs-channel.c"
{
#line 95 "xfce-mcs-channel.gob"
	
		g_return_if_fail(self->client == NULL && self->manager == NULL);
		if (side == XFCE_MCS_CHANNEL_SIDE_CLIENT)
			self->client = (XfceMcsClient*)g_object_ref ((GObject *) actor);
		else if (side == XFCE_MCS_CHANNEL_SIDE_MANAGER)
			self->manager = (XfceMcsManager*)g_object_ref ((GObject *) actor);
			
	}}
#line 541 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 104 "xfce-mcs-channel.gob"
static McsSetting * 
xfce_mcs_channel_get_setting_low (XfceMcsChannel * self, gchar const * name)
#line 547 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_setting_low"
#line 104 "xfce-mcs-channel.gob"
	g_return_val_if_fail (self != NULL, (McsSetting * )0);
#line 104 "xfce-mcs-channel.gob"
	g_return_val_if_fail (XFCE_IS_MCS_CHANNEL (self), (McsSetting * )0);
#line 554 "xfce-mcs-channel.c"
{
#line 105 "xfce-mcs-channel.gob"
	
		McsSetting*	setting;
		setting = NULL;
		if (self->client) {
			setting = xfce_mcs_client_get_setting (self->client, self->channel_name, name);
		} else if (self->manager) {
			setting = xfce_mcs_manager_get_setting (self->manager, self->channel_name, name);
		}

		return setting;
	}}
#line 568 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 117 "xfce-mcs-channel.gob"
gchar * 
xfce_mcs_channel_get_setting (XfceMcsChannel * self, gchar const * name)
#line 574 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_setting"
#line 117 "xfce-mcs-channel.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 117 "xfce-mcs-channel.gob"
	g_return_val_if_fail (XFCE_IS_MCS_CHANNEL (self), (gchar * )0);
#line 581 "xfce-mcs-channel.c"
{
#line 118 "xfce-mcs-channel.gob"
	
		McsSetting*	setting;
		setting = self_get_setting_low (self, name);
		if (setting) {
			switch (setting->type) {
			case MCS_TYPE_INT:
				return g_strdup_printf ("%d", setting->data.v_int);

			case MCS_TYPE_STRING:
				if (setting->data.v_string)
					return g_strdup (setting->data.v_string);
				break;
			case MCS_TYPE_COLOR:
				return g_strdup_printf ("(%d,%d,%d,%d)", 
					setting->data.v_color.red, 
					setting->data.v_color.green,
					setting->data.v_color.blue,
					setting->data.v_color.alpha
				);
			}
		}

		return NULL;
	}}
#line 608 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 143 "xfce-mcs-channel.gob"
gchar * 
xfce_mcs_channel_get_setting_string (XfceMcsChannel * self, gchar const * name)
#line 614 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_setting_string"
#line 143 "xfce-mcs-channel.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 143 "xfce-mcs-channel.gob"
	g_return_val_if_fail (XFCE_IS_MCS_CHANNEL (self), (gchar * )0);
#line 621 "xfce-mcs-channel.c"
{
#line 144 "xfce-mcs-channel.gob"
	
		McsSetting*	setting;
		setting = self_get_setting_low (self, name);
		if (setting) {
			if (setting->data.v_string)
				return g_strdup (setting->data.v_string);
		}
		return NULL;
	}}
#line 633 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 154 "xfce-mcs-channel.gob"
gboolean 
xfce_mcs_channel_get_setting_color (XfceMcsChannel * self, gchar const * name, McsColor * color)
#line 639 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_setting_color"
#line 154 "xfce-mcs-channel.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 154 "xfce-mcs-channel.gob"
	g_return_val_if_fail (XFCE_IS_MCS_CHANNEL (self), (gboolean )0);
#line 646 "xfce-mcs-channel.c"
{
#line 155 "xfce-mcs-channel.gob"
	
		McsSetting*	setting;
		
		(*color).red = 0;
		(*color).green = 0;
		(*color).blue = 0;
		(*color).alpha = 0;
		
		
		setting = self_get_setting_low (self, name);
		if (setting) {
			if (setting->type == MCS_TYPE_COLOR) {
				*color = setting->data.v_color;
				return TRUE;
			}
		}
		return FALSE;
	}}
#line 667 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 174 "xfce-mcs-channel.gob"
gboolean 
xfce_mcs_channel_get_setting_int (XfceMcsChannel * self, gchar const * name, int * result)
#line 673 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::get_setting_int"
#line 174 "xfce-mcs-channel.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 174 "xfce-mcs-channel.gob"
	g_return_val_if_fail (XFCE_IS_MCS_CHANNEL (self), (gboolean )0);
#line 680 "xfce-mcs-channel.c"
{
#line 175 "xfce-mcs-channel.gob"
	
		McsSetting*	setting;
		setting = self_get_setting_low (self, name);
		if (setting) {
			if (setting->type == MCS_TYPE_INT) {
				*result = setting->data.v_int;
				return TRUE;
			}
		}

		return FALSE;
	}}
#line 695 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__


#line 192 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_set_setting (XfceMcsChannel * self, gchar const * name, gchar const * value)
#line 702 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::set_setting"
#line 192 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 192 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 709 "xfce-mcs-channel.c"
{
#line 193 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		McsSetting*	setting;
		McsColor	color;
		if (!self->manager) {
			g_warning ("XfceMcsChannel: cannot set setting. I'm not a mcs manager plugin.");
			return;
		}
		setting = xfce_mcs_manager_get_setting (self->manager, self->channel_name, name);
		if (setting) {
			switch (setting->type) {
			case MCS_TYPE_INT:
				xfce_mcs_channel_set_setting_int (self, name, atoi (value));
				break;
			case MCS_TYPE_COLOR:
				if (sscanf (value, "(%hd,%hd,%hd,%hd)", &color.red, &color.green, 
					&color.blue, &color.alpha) != 4) 
				{
					g_warning ("color format was wrong, expected (red,green,blue,alpha)");
					return;
				}
				xfce_mcs_channel_set_setting_color (self, name, &color);
				/* FIXME memory management ? */
				break;
			default: /* case MCS_TYPE_STRING: */
				xfce_mcs_channel_set_setting_string (self, name, value);
				break;
			}
		} else {
			xfce_mcs_channel_set_setting_string (self, name, value);
		}

		self_delay_notify (self);
	}}
#line 745 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 227 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_delay_notify (XfceMcsChannel * self)
#line 751 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::delay_notify"
#line 227 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 227 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 758 "xfce-mcs-channel.c"
{
#line 228 "xfce-mcs-channel.gob"
	
		/* todo delay that a bit */
		if (self->manager)
			xfce_mcs_manager_notify (self->manager, self->channel_name);
	}}
#line 766 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 234 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_set_setting_string (XfceMcsChannel * self, gchar const * name, gchar const * value)
#line 772 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::set_setting_string"
#line 234 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 234 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 779 "xfce-mcs-channel.c"
{
#line 235 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_set_setting_string (self->manager, self->channel_name, name, value);

		self_delay_notify (self);
	}}
#line 788 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 242 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_set_setting_int (XfceMcsChannel * self, gchar const * name, int value)
#line 794 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::set_setting_int"
#line 242 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 242 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 801 "xfce-mcs-channel.c"
{
#line 243 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_set_setting_int (self->manager, self->channel_name, name, value);
		self_delay_notify (self);
	}}
#line 809 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 249 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_set_setting_color (XfceMcsChannel * self, gchar const * name, McsColor const * value)
#line 815 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::set_setting_color"
#line 249 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 249 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 822 "xfce-mcs-channel.c"
{
#line 250 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_set_setting_color (self->manager, self->channel_name, name, value);
			
		self_delay_notify (self);
	}}
#line 831 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 257 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_delete_setting (XfceMcsChannel * self, gchar const * name)
#line 837 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::delete_setting"
#line 257 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 257 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 844 "xfce-mcs-channel.c"
{
#line 258 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_delete_setting (self->manager, self->channel_name, name);
	}}
#line 851 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 263 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_add_channel_from_file (XfceMcsChannel * self, gchar const * filename)
#line 857 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::add_channel_from_file"
#line 263 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 263 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 864 "xfce-mcs-channel.c"
{
#line 264 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_add_channel_from_file (self->manager, self->channel_name, filename);
	}}
#line 871 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__

#line 269 "xfce-mcs-channel.gob"
void 
xfce_mcs_channel_save_channel_to_file (XfceMcsChannel * self, gchar const * filename)
#line 877 "xfce-mcs-channel.c"
{
#define __GOB_FUNCTION__ "Xfce:Mcs:Channel::save_channel_to_file"
#line 269 "xfce-mcs-channel.gob"
	g_return_if_fail (self != NULL);
#line 269 "xfce-mcs-channel.gob"
	g_return_if_fail (XFCE_IS_MCS_CHANNEL (self));
#line 884 "xfce-mcs-channel.c"
{
#line 270 "xfce-mcs-channel.gob"
	 /* only mcs manager */
		if (self->manager)
			xfce_mcs_manager_save_channel_to_file (self->manager, self->channel_name, filename);
	}}
#line 891 "xfce-mcs-channel.c"
#undef __GOB_FUNCTION__
