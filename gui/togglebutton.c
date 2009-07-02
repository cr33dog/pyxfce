/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "togglebutton.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_TOGGLEBUTTON
#define XFCE_TYPE_TOGGLEBUTTON (xfce_togglebutton_get_type ())
#endif

#line 17 "togglebutton.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkToggleButton_Type;
#define PyGtkToggleButton_Type (*_PyGtkToggleButton_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceTogglebutton_Type;

#line 30 "togglebutton.c"



/* ----------- XfceTogglebutton ----------- */

static int
_wrap_xfce_togglebutton_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "arrow_type", NULL };
    PyObject *py_arrow_type = NULL;
    GtkArrowType arrow_type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:XfceTogglebutton.__init__", kwlist, &py_arrow_type))
        return -1;
    if (pyg_enum_get_value(GTK_TYPE_ARROW_TYPE, py_arrow_type, (gpointer)&arrow_type))
        return -1;
    self->obj = (GObject *)xfce_togglebutton_new(arrow_type);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceTogglebutton object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfce_togglebutton_set_arrow_type(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "arrow_type", NULL };
    PyObject *py_arrow_type = NULL;
    GtkArrowType arrow_type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:XfceTogglebutton.set_arrow_type", kwlist, &py_arrow_type))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_ARROW_TYPE, py_arrow_type, (gpointer)&arrow_type))
        return NULL;
    
    xfce_togglebutton_set_arrow_type(XFCE_TOGGLEBUTTON(self->obj), arrow_type);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_togglebutton_get_arrow_type(PyGObject *self)
{
    gint ret;

    
    ret = xfce_togglebutton_get_arrow_type(XFCE_TOGGLEBUTTON(self->obj));
    
    return pyg_enum_from_gtype(GTK_TYPE_ARROW_TYPE, ret);
}

static const PyMethodDef _PyXfceTogglebutton_methods[] = {
    { "set_arrow_type", (PyCFunction)_wrap_xfce_togglebutton_set_arrow_type, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_arrow_type", (PyCFunction)_wrap_xfce_togglebutton_get_arrow_type, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceTogglebutton_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "togglebutton.Togglebutton",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceTogglebutton_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_togglebutton_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

const PyMethodDef pytogglebutton_functions[] = {
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pytogglebutton_register_classes(PyObject *d)
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
        _PyGtkToggleButton_Type = (PyTypeObject *)PyObject_GetAttrString(module, "ToggleButton");
        if (_PyGtkToggleButton_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name ToggleButton from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 179 "togglebutton.c"
    pygobject_register_class(d, "XfceTogglebutton", XFCE_TYPE_TOGGLEBUTTON, &PyXfceTogglebutton_Type, Py_BuildValue("(O)", &PyGtkToggleButton_Type));
}
