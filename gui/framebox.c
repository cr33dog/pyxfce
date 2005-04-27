/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "framebox.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_FRAMEBOX
#define XFCE_TYPE_FRAMEBOX (xfce_framebox_get_type ())
#endif

#line 17 "framebox.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkFrame_Type;
#define PyGtkFrame_Type (*_PyGtkFrame_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceFramebox_Type;


/* ----------- XfceFramebox ----------- */

static int
_wrap_xfce_framebox_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", "indent", NULL };
    char *text;
    int indent;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:XfceFramebox.__init__", kwlist, &text, &indent))
        return -1;
    self->obj = (GObject *)xfce_framebox_new(text, indent);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceFramebox object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfce_framebox_add(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "widget", NULL };
    PyGObject *widget;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfceFramebox.add", kwlist, &PyGtkWidget_Type, &widget))
        return NULL;
    xfce_framebox_add(XFCE_FRAMEBOX(self->obj), GTK_WIDGET(widget->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceFramebox_methods[] = {
    { "add", (PyCFunction)_wrap_xfce_framebox_add, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceFramebox_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "framebox.Framebox",			/* tp_name */
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
    _PyXfceFramebox_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_framebox_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyframebox_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyframebox_register_classes(PyObject *d)
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

        _PyGtkFrame_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Frame");
        if (_PyGtkFrame_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Frame from gtk");
            return;
        }
        _PyGtkWidget_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 167 "framebox.c"
    pygobject_register_class(d, "XfceFramebox", XFCE_TYPE_FRAMEBOX, &PyXfceFramebox_Type, Py_BuildValue("(O)", &PyGtkFrame_Type));
}
