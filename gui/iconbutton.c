/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "iconbutton.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_ICONBUTTON
#define XFCE_TYPE_ICONBUTTON (xfce_iconbutton_get_type ())
#endif

#line 17 "iconbutton.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)
static PyTypeObject *_PyGtkButton_Type;
#define PyGtkButton_Type (*_PyGtkButton_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceIconbutton_Type;

#line 32 "iconbutton.c"



/* ----------- XfceIconbutton ----------- */

static int
_wrap_xfce_iconbutton_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":iconbutton.Iconbutton.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create iconbutton.Iconbutton object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_xfce_iconbutton_set_pixbuf(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", NULL };
    PyGObject *pixbuf;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceIconbutton.set_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf))
        return NULL;
    
    xfce_iconbutton_set_pixbuf(XFCE_ICONBUTTON(self->obj), GDK_PIXBUF(pixbuf->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyXfceIconbutton_methods[] = {
    { "set_pixbuf", (PyCFunction)_wrap_xfce_iconbutton_set_pixbuf, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceIconbutton_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "iconbutton.Iconbutton",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyXfceIconbutton_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_iconbutton_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_iconbutton_new_from_pixbuf(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pb", NULL };
    PyGObject *pb;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:iconbutton_new_from_pixbuf", kwlist, &PyGdkPixbuf_Type, &pb))
        return NULL;
    
    ret = xfce_iconbutton_new_from_pixbuf(GDK_PIXBUF(pb->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pyiconbutton_functions[] = {
    { "iconbutton_new_from_pixbuf", (PyCFunction)_wrap_xfce_iconbutton_new_from_pixbuf, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyiconbutton_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkButton_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Button");
        if (_PyGtkButton_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Button from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkPixbuf_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 194 "iconbutton.c"
    pygobject_register_class(d, "XfceIconbutton", XFCE_TYPE_ICONBUTTON, &PyXfceIconbutton_Type, Py_BuildValue("(O)", &PyGtkButton_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_ICONBUTTON);
}
