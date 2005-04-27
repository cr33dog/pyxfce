/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "tasklist.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "tasklist.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkContainer_Type;
#define PyGtkContainer_Type (*_PyGtkContainer_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkTasklist_Type;


/* ----------- NetkTasklist ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_netk_tasklist_set_grouping(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "grouping", NULL };
    NetkTasklistGroupingType grouping;
    PyObject *py_grouping = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:NetkTasklist.set_grouping", kwlist, &py_grouping))
        return NULL;
    if (pyg_enum_get_value(NETK_TYPE_TASKLIST_GROUPING_TYPE, py_grouping, (gint *)&grouping))
        return NULL;
    netk_tasklist_set_grouping(NETK_TASKLIST(self->obj), grouping);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_switch_workspace_on_unminimize(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "switch_workspace_on_unminimize", NULL };
    int switch_workspace_on_unminimize;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_switch_workspace_on_unminimize", kwlist, &switch_workspace_on_unminimize))
        return NULL;
    netk_tasklist_set_switch_workspace_on_unminimize(NETK_TASKLIST(self->obj), switch_workspace_on_unminimize);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_grouping_limit(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "limit", NULL };
    int limit;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_grouping_limit", kwlist, &limit))
        return NULL;
    netk_tasklist_set_grouping_limit(NETK_TASKLIST(self->obj), limit);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_include_all_workspaces(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "include_all_workspaces", NULL };
    int include_all_workspaces;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_include_all_workspaces", kwlist, &include_all_workspaces))
        return NULL;
    netk_tasklist_set_include_all_workspaces(NETK_TASKLIST(self->obj), include_all_workspaces);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_show_label(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show_label", NULL };
    int show_label;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_show_label", kwlist, &show_label))
        return NULL;
    netk_tasklist_set_show_label(NETK_TASKLIST(self->obj), show_label);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_minimum_width(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    int size;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_minimum_width", kwlist, &size))
        return NULL;
    netk_tasklist_set_minimum_width(NETK_TASKLIST(self->obj), size);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_get_minimum_width(PyGObject *self)
{
    int ret;

    ret = netk_tasklist_get_minimum_width(NETK_TASKLIST(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_tasklist_set_minimum_height(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    int size;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkTasklist.set_minimum_height", kwlist, &size))
        return NULL;
    netk_tasklist_set_minimum_height(NETK_TASKLIST(self->obj), size);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_get_minimum_height(PyGObject *self)
{
    int ret;

    ret = netk_tasklist_get_minimum_height(NETK_TASKLIST(self->obj));
    return PyInt_FromLong(ret);
}

static PyMethodDef _PyNetkTasklist_methods[] = {
    { "set_grouping", (PyCFunction)_wrap_netk_tasklist_set_grouping, METH_VARARGS|METH_KEYWORDS },
    { "set_switch_workspace_on_unminimize", (PyCFunction)_wrap_netk_tasklist_set_switch_workspace_on_unminimize, METH_VARARGS|METH_KEYWORDS },
    { "set_grouping_limit", (PyCFunction)_wrap_netk_tasklist_set_grouping_limit, METH_VARARGS|METH_KEYWORDS },
    { "set_include_all_workspaces", (PyCFunction)_wrap_netk_tasklist_set_include_all_workspaces, METH_VARARGS|METH_KEYWORDS },
    { "set_show_label", (PyCFunction)_wrap_netk_tasklist_set_show_label, METH_VARARGS|METH_KEYWORDS },
    { "set_minimum_width", (PyCFunction)_wrap_netk_tasklist_set_minimum_width, METH_VARARGS|METH_KEYWORDS },
    { "get_minimum_width", (PyCFunction)_wrap_netk_tasklist_get_minimum_width, METH_NOARGS },
    { "set_minimum_height", (PyCFunction)_wrap_netk_tasklist_set_minimum_height, METH_VARARGS|METH_KEYWORDS },
    { "get_minimum_height", (PyCFunction)_wrap_netk_tasklist_get_minimum_height, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkTasklist_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "tasklist.Tasklist",			/* tp_name */
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
    _PyNetkTasklist_methods,			/* tp_methods */
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

PyMethodDef pytasklist_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pytasklist_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "TasklistGroupingType", strip_prefix, NETK_TYPE_TASKLIST_GROUPING_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pytasklist_register_classes(PyObject *d)
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


#line 265 "tasklist.c"
    pygobject_register_class(d, "NetkTasklist", NETK_TYPE_TASKLIST, &PyNetkTasklist_Type, Py_BuildValue("(O)", &PyGtkContainer_Type));
}
