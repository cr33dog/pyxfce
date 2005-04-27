/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "pager.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "pager.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkContainer_Type;
#define PyGtkContainer_Type (*_PyGtkContainer_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkPager_Type;


/* ----------- NetkPager ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_netk_pager_set_n_rows(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "n_rows", NULL };
    int n_rows;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkPager.set_n_rows", kwlist, &n_rows))
        return NULL;
    netk_pager_set_n_rows(NETK_PAGER(self->obj), n_rows);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_pager_set_display_mode(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "mode", NULL };
    NetkPagerDisplayMode mode;
    PyObject *py_mode = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:NetkPager.set_display_mode", kwlist, &py_mode))
        return NULL;
    if (pyg_enum_get_value(NETK_TYPE_PAGER_DISPLAY_MODE, py_mode, (gint *)&mode))
        return NULL;
    netk_pager_set_display_mode(NETK_PAGER(self->obj), mode);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_pager_set_show_all(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show_all_workspaces", NULL };
    int show_all_workspaces;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkPager.set_show_all", kwlist, &show_all_workspaces))
        return NULL;
    netk_pager_set_show_all(NETK_PAGER(self->obj), show_all_workspaces);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyNetkPager_methods[] = {
    { "set_n_rows", (PyCFunction)_wrap_netk_pager_set_n_rows, METH_VARARGS|METH_KEYWORDS },
    { "set_display_mode", (PyCFunction)_wrap_netk_pager_set_display_mode, METH_VARARGS|METH_KEYWORDS },
    { "set_show_all", (PyCFunction)_wrap_netk_pager_set_show_all, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkPager_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "pager.Pager",			/* tp_name */
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
    _PyNetkPager_methods,			/* tp_methods */
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

PyMethodDef pypager_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pypager_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "PagerDisplayMode", strip_prefix, NETK_TYPE_PAGER_DISPLAY_MODE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pypager_register_classes(PyObject *d)
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

        _PyGtkContainer_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Container");
        if (_PyGtkContainer_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Container from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 189 "pager.c"
    pygobject_register_class(d, "NetkPager", NETK_TYPE_PAGER, &PyNetkPager_Type, Py_BuildValue("(O)", &PyGtkContainer_Type));
}
