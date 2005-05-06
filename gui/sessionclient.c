#include <libxfcegui4/session-client.h>

/*
typedef enum 
{
    SESSION_CLIENT_IDLE,
    SESSION_CLIENT_SAVING_PHASE_1,
    SESSION_CLIENT_WAITING_FOR_PHASE_2,
    SESSION_CLIENT_SAVING_PHASE_2,
    SESSION_CLIENT_WAITING_FOR_INTERACT,
    SESSION_CLIENT_DONE_WITH_INTERACT,   
    SESSION_CLIENT_FROZEN,
    SESSION_CLIENT_DISCONNECTED,
    SESSION_CLIENT_REGISTERING  
}
SessionClientState;
*/

/*
struct SessionClient
...
    gpointer data;
    gpointer session_connection;

    SessionClientState current_state;
    SessionRestartStyle restart_style;
    SessionInteractStyle interact_style;

    gchar priority;

    gchar *client_id;
    gchar *given_client_id;

    gchar *current_directory;
    gchar *program;
    gchar **clone_command;
    gchar **resign_command;
    gchar **restart_command;
    gchar **discard_command;
    gchar **shutdown_command;

*/

static void save_phase_2_cb (gpointer client_data)
{
}

static void interact_cb (gpointer client_data,
                                   SessionInteractStyle interact_style);
{
}

static void shutdown_cancelled_cb (gpointer client_data)
{
}

static void save_complete_cb (gpointer client_data)
{
}

static void die_cb (gpointer client_data)
{
}

static void save_yourself_cb (gpointer client_data, int save_style,
                                        gboolean shutdown, int interact_style,
                                        gboolean fast)
{
}

static int
_wrap_session_client_new((PyGObject *self, PyObject *args, PyObject *kwargs)
{
	static char *kwlist[] = { "priority", NULL };
	    	
	SessionClient*	client;
	gpointer	client_data;
	gchar		prio;
	int		prioi;
	char**		argv;
	int		argc;
	
	client_data = NULL;

	prio = 30;
	
	if (!PyArg_ParseTupleAndKeywords(args, kwargs, 
		"i:SessionClient.__init__", kwlist, &prioi))
		return -1;

	if (prioi < 0 || prioi > 127) {	/* fixme */
		prioi = 30;
	}
	
	prio = prioi;
	
	Py_GetArgcArgv(&argc, &argv);

	client = client_session_new (argc, argv, client_data, 
		SESSION_RESTART_IF_RUNNING, prio);

	client->save_phase_2 = save_phase_2_cb;
	client->interact = interact_cb;
	client->shutdown_cancelled = shutdown_cancelled_cb;
	client->save_complete = save_complete_cb;
	client->die = die_cb;
	client->save_yourself = save_yourself_cb;

	/* gboolean session_init(client); */
	/* void session_shutdown(client); */
	/* logout_session(client); */

	/* register client */
	
	/* pygobject_register_wrapper((PyObject *)self); */
		
	return 0;
}

PyTypeObject PyXfceScaledImage_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "sessionclient.SessionClient",			/* tp_name */
    sizeof(PyGObject),	        /* tp_basicsize */
    0,					/* tp_itemsize */
    /* methods */
    (destructor)0,	/* tp_dealloc */
    (printfunc)0,			/* tp_print */
    (getattrfunc)0,	/* tp_getattr */
    (setattrfunc)0,	/* tp_setattr */
    (cmpfunc)0,		/* tp_compare */
    (reprfunc)0,		/* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,		/* tp_hash */
    (ternaryfunc)0,		/* tp_call */
    (reprfunc)0,		/* tp_str */
    (getattrofunc)0,	/* tp_getattro */
    (setattrofunc)0,	/* tp_setattro */
    (PyBufferProcs*)0,	/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL, 				/* Documentation string */
    (traverseproc)0,	/* tp_traverse */
    (inquiry)0,		/* tp_clear */
    (richcmpfunc)0,	/* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,		/* tp_iter */
    (iternextfunc)0,	/* tp_iternext */
    _PyXfceScaledImage_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_scaled_image_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};

/* initialise stuff extension classes */
void
pysession_client_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGObject_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGtkImage_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Image");
        if (_PyGtkImage_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Image from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGdkPixbuf_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return;
    }


    pygobject_register_class(d, "XfceSessionClient", XFCE_TYPE_SESSION_CLIENT, &PyXfceSessionClient_Type, /* Py_BuildValue("(O)", &PyGtkImage_Type */));
}
