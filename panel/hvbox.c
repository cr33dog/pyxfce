/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "hvbox.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/libxfce4panel.h>
#define XFCE_TYPE_HV_BOX XFCE_TYPE_HVBOX
#define XFCE_HV_BOX XFCE_HVBOX

extern PyTypeObject PyGtkWidget_Type;

#line 17 "hvbox.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkToggleButton_Type;
#define PyGtkToggleButton_Type (*_PyGtkToggleButton_Type)
static PyTypeObject *_PyGtkBox_Type;
#define PyGtkBox_Type (*_PyGtkBox_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceHVBox_Type;

#line 34 "hvbox.c"



/* ----------- XfceHVBox ----------- */

static PyObject *
_wrap_xfce_hvbox_set_orientation(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "orientation", NULL };
    GtkOrientation orientation;
    PyObject *py_orientation = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:XfceHVBox.set_orientation", kwlist, &py_orientation))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_ORIENTATION, py_orientation, (gpointer)&orientation))
        return NULL;
    
    xfce_hvbox_set_orientation(XFCE_HV_BOX(self->obj), orientation);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_hvbox_get_orientation(PyGObject *self)
{
    gint ret;

    
    ret = xfce_hvbox_get_orientation(XFCE_HV_BOX(self->obj));
    
    return pyg_enum_from_gtype(GTK_TYPE_ORIENTATION, ret);
}

static const PyMethodDef _PyXfceHVBox_methods[] = {
    { "set_orientation", (PyCFunction)_wrap_xfce_hvbox_set_orientation, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_orientation", (PyCFunction)_wrap_xfce_hvbox_get_orientation, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceHVBox_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "hvbox.HVBox",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceHVBox_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

const PyMethodDef pyhvbox_functions[] = {
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyhvbox_register_classes(PyObject *d)
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
        _PyGtkWidget_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return ;
        }
        _PyGtkToggleButton_Type = (PyTypeObject *)PyObject_GetAttrString(module, "ToggleButton");
        if (_PyGtkToggleButton_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name ToggleButton from gtk");
            return ;
        }
        _PyGtkBox_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Box");
        if (_PyGtkBox_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Box from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 174 "hvbox.c"
    pygobject_register_class(d, "XfceHVBox", XFCE_TYPE_HV_BOX, &PyXfceHVBox_Type, Py_BuildValue("(O)", &PyGtkBox_Type));
}
