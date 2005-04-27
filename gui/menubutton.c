/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "menubutton.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_MENUBUTTON
#define XFCE_TYPE_MENUBUTTON (xfce_menubutton_get_type ())
#endif

#line 17 "menubutton.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkButton_Type;
#define PyGtkButton_Type (*_PyGtkButton_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceMenubutton_Type;


/* ----------- XfceMenubutton ----------- */

static int
_wrap_xfce_menubutton_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMenubutton.__init__", kwlist, &text))
        return -1;
    self->obj = (GObject *)xfce_menubutton_new(text);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceMenubutton object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfce_menubutton_set_text(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMenubutton.set_text", kwlist, &text))
        return NULL;
    xfce_menubutton_set_text(XFCE_MENUBUTTON(self->obj), text);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_menubutton_set_pixbuf(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", NULL };
    PyGObject *pixbuf;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfceMenubutton.set_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf))
        return NULL;
    xfce_menubutton_set_pixbuf(XFCE_MENUBUTTON(self->obj), GDK_PIXBUF(pixbuf->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_menubutton_set_stock_icon(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "stock", NULL };
    char *stock;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMenubutton.set_stock_icon", kwlist, &stock))
        return NULL;
    xfce_menubutton_set_stock_icon(XFCE_MENUBUTTON(self->obj), stock);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceMenubutton_methods[] = {
    { "set_text", (PyCFunction)_wrap_xfce_menubutton_set_text, METH_VARARGS|METH_KEYWORDS },
    { "set_pixbuf", (PyCFunction)_wrap_xfce_menubutton_set_pixbuf, METH_VARARGS|METH_KEYWORDS },
    { "set_stock_icon", (PyCFunction)_wrap_xfce_menubutton_set_stock_icon, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceMenubutton_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "menubutton.Menubutton",			/* tp_name */
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
    _PyXfceMenubutton_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_menubutton_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_menubutton_new_with_pixbuf(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", "pb", NULL };
    char *text;
    PyGObject *pb;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sO!:xfce_menubutton_new_with_pixbuf", kwlist, &text, &PyGdkPixbuf_Type, &pb))
        return NULL;
    ret = xfce_menubutton_new_with_pixbuf(text, GDK_PIXBUF(pb->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_menubutton_new_with_stock_icon(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", "stock", NULL };
    char *text, *stock;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:xfce_menubutton_new_with_stock_icon", kwlist, &text, &stock))
        return NULL;
    ret = xfce_menubutton_new_with_stock_icon(text, stock);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pymenubutton_functions[] = {
    { "xfce_menubutton_new_with_pixbuf", (PyCFunction)_wrap_xfce_menubutton_new_with_pixbuf, METH_VARARGS|METH_KEYWORDS },
    { "xfce_menubutton_new_with_stock_icon", (PyCFunction)_wrap_xfce_menubutton_new_with_stock_icon, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pymenubutton_register_classes(PyObject *d)
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

        _PyGtkButton_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Button");
        if (_PyGtkButton_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Button from gtk");
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


#line 233 "menubutton.c"
    pygobject_register_class(d, "XfceMenubutton", XFCE_TYPE_MENUBUTTON, &PyXfceMenubutton_Type, Py_BuildValue("(O)", &PyGtkButton_Type));
}
