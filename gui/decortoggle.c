/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "decortoggle.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_DECORTOGGLE
#define XFCE_TYPE_DECORTOGGLE (xfce_decortoggle_get_type ())
#endif

#line 17 "decortoggle.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkMisc_Type;
#define PyGtkMisc_Type (*_PyGtkMisc_Type)
static PyTypeObject *_PyGtkArrow_Type;
#define PyGtkArrow_Type (*_PyGtkArrow_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceDecortoggle_Type;


/* ----------- XfceDecortoggle ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_xfce_decortoggle_toggled(PyGObject *self)
{
    xfce_decortoggle_toggled(XFCE_DECORTOGGLE(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_decortoggle_set_active(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "is_active", NULL };
    int is_active;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceDecortoggle.set_active", kwlist, &is_active))
        return NULL;
    xfce_decortoggle_set_active(XFCE_DECORTOGGLE(self->obj), is_active);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceDecortoggle_methods[] = {
    { "toggled", (PyCFunction)_wrap_xfce_decortoggle_toggled, METH_NOARGS },
    { "set_active", (PyCFunction)_wrap_xfce_decortoggle_set_active, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceDecortoggle_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "decortoggle.Decortoggle",			/* tp_name */
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
    _PyXfceDecortoggle_methods,			/* tp_methods */
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

PyMethodDef pydecortoggle_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pydecortoggle_register_classes(PyObject *d)
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

        _PyGtkMisc_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Misc");
        if (_PyGtkMisc_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Misc from gtk");
            return;
        }
        _PyGtkArrow_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Arrow");
        if (_PyGtkArrow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Arrow from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 167 "decortoggle.c"
    pygobject_register_class(d, "XfceDecortoggle", XFCE_TYPE_DECORTOGGLE, &PyXfceDecortoggle_Type, Py_BuildValue("(O)", &PyGtkMisc_Type));
}
