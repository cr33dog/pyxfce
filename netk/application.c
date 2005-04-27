/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "application.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "application.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkApplication_Type;


/* ----------- NetkApplication ----------- */

static PyObject *
_wrap_netk_application_get_xid(PyGObject *self)
{
    gulong ret;

    ret = netk_application_get_xid(NETK_APPLICATION(self->obj));
    return PyLong_FromUnsignedLong(ret);
}

#line 25 "application.override"
static PyObject *
_wrap_netk_application_get_windows(PyGObject *self)
{
    GList *icon_list = NULL;
    PyObject *pywindow;

    if ((icon_list = netk_application_get_windows(NETK_APPLICATION(self->obj)))) {
        PyObject *py_list;
        GList *tmp;

        if ((py_list = PyList_New(0)) == NULL) {
            g_list_free(icon_list);
            return NULL;
        }
        for (tmp = icon_list; tmp != NULL; tmp = tmp->next) {
            pywindow = pygobject_new(G_OBJECT(tmp->data));

            if (pywindow == NULL) {
                g_list_free(icon_list);
                Py_DECREF(py_list);
                return NULL;
            }
            PyList_Append(py_list, pywindow);
            Py_DECREF(pywindow);
        }
        g_list_free(icon_list);
        return py_list;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 68 "application.c"


static PyObject *
_wrap_netk_application_get_n_windows(PyGObject *self)
{
    int ret;

    ret = netk_application_get_n_windows(NETK_APPLICATION(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_application_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_application_get_name(NETK_APPLICATION(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_application_get_icon_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_application_get_icon_name(NETK_APPLICATION(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_application_get_pid(PyGObject *self)
{
    int ret;

    ret = netk_application_get_pid(NETK_APPLICATION(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_application_get_icon(PyGObject *self)
{
    GdkPixbuf *ret;

    ret = netk_application_get_icon(NETK_APPLICATION(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_application_get_mini_icon(PyGObject *self)
{
    GdkPixbuf *ret;

    ret = netk_application_get_mini_icon(NETK_APPLICATION(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_application_get_icon_is_fallback(PyGObject *self)
{
    int ret;

    ret = netk_application_get_icon_is_fallback(NETK_APPLICATION(self->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyNetkApplication_methods[] = {
    { "get_xid", (PyCFunction)_wrap_netk_application_get_xid, METH_NOARGS },
    { "get_windows", (PyCFunction)_wrap_netk_application_get_windows, METH_NOARGS },
    { "get_n_windows", (PyCFunction)_wrap_netk_application_get_n_windows, METH_NOARGS },
    { "get_name", (PyCFunction)_wrap_netk_application_get_name, METH_NOARGS },
    { "get_icon_name", (PyCFunction)_wrap_netk_application_get_icon_name, METH_NOARGS },
    { "get_pid", (PyCFunction)_wrap_netk_application_get_pid, METH_NOARGS },
    { "get_icon", (PyCFunction)_wrap_netk_application_get_icon, METH_NOARGS },
    { "get_mini_icon", (PyCFunction)_wrap_netk_application_get_mini_icon, METH_NOARGS },
    { "get_icon_is_fallback", (PyCFunction)_wrap_netk_application_get_icon_is_fallback, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkApplication_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "application.Application",			/* tp_name */
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
    _PyNetkApplication_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_netk_application_get(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "xwindow", NULL };
    PyObject *py_xwindow = NULL;
    gulong xwindow;
    NetkApplication *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:netk_application_get", kwlist, &PyLong_Type, &py_xwindow))
        return NULL;
    xwindow = PyLong_AsUnsignedLong(py_xwindow);
    ret = netk_application_get(xwindow);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyapplication_functions[] = {
    { "netk_application_get", (PyCFunction)_wrap_netk_application_get, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyapplication_register_classes(PyObject *d)
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


#line 248 "application.c"
    pygobject_register_class(d, "NetkApplication", NETK_TYPE_APPLICATION, &PyNetkApplication_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
