/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "xfce_mcs-client.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include "xfce-mcs-client.h"

extern PyTypeObject PyXfceMcsChannel_Type;

#line 15 "xfce_mcs-client.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceMcsClient_Type;


/* ----------- XfceMcsClient ----------- */

static int
_wrap_xfce_mcs_client_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    GType obj_type = pyg_type_from_object((PyObject *) self);
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":xfce4.mcs.Client.__init__", kwlist))
        return -1;

    self->obj = g_object_newv(obj_type, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create %(typename)s object");
        return -1;
    }

    pygobject_register_wrapper((PyObject *)self);
    return 0;
}


static PyObject *
_wrap_xfce_mcs_client_get_screen(PyGObject *self)
{
    GObject *ret;

    ret = xfce_mcs_client_get_screen(XFCE_MCS_CLIENT(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_mcs_client_set_screen(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "val", NULL };
    PyGObject *val;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfceMcsClient.set_screen", kwlist, &PyGObject_Type, &val))
        return NULL;
    xfce_mcs_client_set_screen(XFCE_MCS_CLIENT(self->obj), G_OBJECT(val->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_client_manager_reconnect(PyGObject *self)
{
    xfce_mcs_client_manager_reconnect(XFCE_MCS_CLIENT(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_client_delete_channel(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsClient.delete_channel", kwlist, &name))
        return NULL;
    xfce_mcs_client_delete_channel(XFCE_MCS_CLIENT(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_client_add_channel(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "channel", NULL };
    PyGObject *channel;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfceMcsClient.add_channel", kwlist, &PyXfceMcsChannel_Type, &channel))
        return NULL;
    xfce_mcs_client_add_channel(XFCE_MCS_CLIENT(self->obj), XFCE_MCS_CHANNEL(channel->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_client_check_manager(PyGObject *self)
{
    int ret;

    ret = xfce_mcs_client_check_manager(XFCE_MCS_CLIENT(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_mcs_client_show_dialog(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "message", NULL };
    char *message;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsClient.show_dialog", kwlist, &message))
        return NULL;
    xfce_mcs_client_show_dialog(XFCE_MCS_CLIENT(self->obj), message);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceMcsClient_methods[] = {
    { "get_screen", (PyCFunction)_wrap_xfce_mcs_client_get_screen, METH_NOARGS },
    { "set_screen", (PyCFunction)_wrap_xfce_mcs_client_set_screen, METH_VARARGS|METH_KEYWORDS },
    { "manager_reconnect", (PyCFunction)_wrap_xfce_mcs_client_manager_reconnect, METH_NOARGS },
    { "delete_channel", (PyCFunction)_wrap_xfce_mcs_client_delete_channel, METH_VARARGS|METH_KEYWORDS },
    { "add_channel", (PyCFunction)_wrap_xfce_mcs_client_add_channel, METH_VARARGS|METH_KEYWORDS },
    { "check_manager", (PyCFunction)_wrap_xfce_mcs_client_check_manager, METH_NOARGS },
    { "show_dialog", (PyCFunction)_wrap_xfce_mcs_client_show_dialog, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceMcsClient_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "xfce4.mcs.Client",			/* tp_name */
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
    _PyXfceMcsClient_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_mcs_client_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyxfce_mcs_client_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyxfce_mcs_client_register_classes(PyObject *d)
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


#line 215 "xfce_mcs-client.c"
    pygobject_register_class(d, "XfceMcsClient", XFCE_TYPE_MCS_CLIENT, &PyXfceMcsClient_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
