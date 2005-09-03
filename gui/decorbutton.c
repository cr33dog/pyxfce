/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "decorbutton.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/gui-enum-types.h>

#ifndef XFCE_TYPE_DECORBUTTON
#define XFCE_TYPE_DECORBUTTON (xfce_decorbutton_get_type ())
#endif
#define XFCE_TYPE_DECORBUTTON_TYPE GUI_TYPE_DECORBUTTON_TYPE

#line 19 "decorbutton.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkMisc_Type;
#define PyGtkMisc_Type (*_PyGtkMisc_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceDecorbutton_Type;

#line 32 "decorbutton.c"



/* ----------- XfceDecorbutton ----------- */

static int
_wrap_xfce_decorbutton_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", NULL };
    PyObject *py_type = NULL;
    XfceDecorbuttonType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfceDecorbutton.__init__", kwlist, &py_type))
        return -1;
    if (pyg_enum_get_value(XFCE_TYPE_DECORBUTTON_TYPE, py_type, (gint *)&type))
        return -1;
    self->obj = (GObject *)xfce_decorbutton_new(type);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceDecorbutton object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

PyTypeObject PyXfceDecorbutton_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "clock.Decorbutton",			/* tp_name */
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
    NULL,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_decorbutton_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pydecorbutton_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pydecorbutton_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "DecorbuttonType", strip_prefix, XFCE_TYPE_DECORBUTTON_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pydecorbutton_register_classes(PyObject *d)
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
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 160 "decorbutton.c"
    pygobject_register_class(d, "XfceDecorbutton", XFCE_TYPE_DECORBUTTON, &PyXfceDecorbutton_Type, Py_BuildValue("(O)", &PyGtkMisc_Type));
}
