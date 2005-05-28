/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "xfce_mcs-manager.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include "xfce-mcs-manager.h"

extern PyTypeObject PyXfceMcsChannel_Type;

#line 15 "xfce_mcs-manager.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyXfceMcsChannel_Type;
#define PyXfceMcsChannel_Type (*_PyXfceMcsChannel_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceMcsManager_Type;


/* ----------- XfceMcsManager ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_xfce_mcs_manager_add_channel(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "channel", NULL };
    PyGObject *channel;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfceMcsManager.add_channel", kwlist, &PyXfceMcsChannel_Type, &channel))
        return NULL;
    xfce_mcs_manager_add_channel(XFCE_MCS_MANAGER(self->obj), XFCE_MCS_CHANNEL(channel->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_manager_delete_channel(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsManager.delete_channel", kwlist, &name))
        return NULL;
    xfce_mcs_manager_delete_channel(XFCE_MCS_MANAGER(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceMcsManager_methods[] = {
    { "add_channel", (PyCFunction)_wrap_xfce_mcs_manager_add_channel, METH_VARARGS|METH_KEYWORDS },
    { "delete_channel", (PyCFunction)_wrap_xfce_mcs_manager_delete_channel, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceMcsManager_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "xfce4.mcs.Manager",			/* tp_name */
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
    _PyXfceMcsManager_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyxfce_mcs_manager_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyxfce_mcs_manager_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("xfce4.mcs")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyXfceMcsChannel_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Channel");
        if (_PyXfceMcsChannel_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Channel from xfce4.mcs");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import xfce4.mcs");
        return;
    }


#line 162 "xfce_mcs-manager.c"
    pygobject_register_class(d, "XfceMcsManager", XFCE_TYPE_MCS_MANAGER, &PyXfceMcsManager_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
