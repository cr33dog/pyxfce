/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "desktopentry.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "desktopentry.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceDesktopEntry_Type;

#line 24 "desktopentry.c"



/* ----------- XfceDesktopEntry ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_xfce_desktop_entry_parse(PyGObject *self)
{
    int ret;

    ret = xfce_desktop_entry_parse(XFCE_DESKTOP_ENTRY(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_desktop_entry_get_file(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_desktop_entry_get_file(XFCE_DESKTOP_ENTRY(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

#line 29 "desktopentry.override"
static PyObject *
_wrap_xfce_desktop_entry_get_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    gchar *value;
    PyObject *ret;
    gchar *key;
    int translated;
    static char *kwlist[] = { "key", "translated", NULL };

    translated = TRUE;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s|i:xfce_desktop_entry_get_string", kwlist, &key, &translated))
        return NULL;

    if (xfce_desktop_entry_get_string (XFCE_DESKTOP_ENTRY(self->obj), key, translated, &value)) {
        ret = PyString_FromString (value);
        g_free (value);
        return ret;
    }

    Py_INCREF(Py_None);
    return Py_None;
}
#line 86 "desktopentry.c"


#line 54 "desktopentry.override"
static PyObject *
_wrap_xfce_desktop_entry_get_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    int value;
    gchar *key;
    static char *kwlist[] = { "key", NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:xfce_desktop_entry_get_int", kwlist, &key))
        return NULL;

    if (xfce_desktop_entry_get_int (XFCE_DESKTOP_ENTRY(self->obj), key, &value)) {
        return PyInt_FromLong((long) value);
    }

    Py_INCREF(Py_None);
    return Py_None;
}
#line 107 "desktopentry.c"


static PyMethodDef _PyXfceDesktopEntry_methods[] = {
    { "parse", (PyCFunction)_wrap_xfce_desktop_entry_parse, METH_NOARGS },
    { "get_file", (PyCFunction)_wrap_xfce_desktop_entry_get_file, METH_NOARGS },
    { "get_string", (PyCFunction)_wrap_xfce_desktop_entry_get_string, METH_VARARGS|METH_KEYWORDS },
    { "get_int", (PyCFunction)_wrap_xfce_desktop_entry_get_int, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceDesktopEntry_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "desktopentry.DesktopEntry",			/* tp_name */
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
    _PyXfceDesktopEntry_methods,			/* tp_methods */
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

PyMethodDef pydesktopentry_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pydesktopentry_register_classes(PyObject *d)
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


#line 193 "desktopentry.c"
    pygobject_register_class(d, "XfceDesktopEntry", XFCE_TYPE_DESKTOP_ENTRY, &PyXfceDesktopEntry_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
