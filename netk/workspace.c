/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "workspace.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "workspace.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkWorkspace_Type;


/* ----------- NetkWorkspace ----------- */

static PyObject *
_wrap_netk_workspace_get_number(PyGObject *self)
{
    int ret;

    ret = netk_workspace_get_number(NETK_WORKSPACE(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_workspace_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_workspace_get_name(NETK_WORKSPACE(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_workspace_change_name(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:NetkWorkspace.change_name", kwlist, &name))
        return NULL;
    netk_workspace_change_name(NETK_WORKSPACE(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_workspace_activate(PyGObject *self)
{
    netk_workspace_activate(NETK_WORKSPACE(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_workspace_get_width(PyGObject *self)
{
    int ret;

    ret = netk_workspace_get_width(NETK_WORKSPACE(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_workspace_get_height(PyGObject *self)
{
    int ret;

    ret = netk_workspace_get_height(NETK_WORKSPACE(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_workspace_get_viewport_x(PyGObject *self)
{
    int ret;

    ret = netk_workspace_get_viewport_x(NETK_WORKSPACE(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_workspace_get_viewport_y(PyGObject *self)
{
    int ret;

    ret = netk_workspace_get_viewport_y(NETK_WORKSPACE(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_workspace_is_virtual(PyGObject *self)
{
    int ret;

    ret = netk_workspace_is_virtual(NETK_WORKSPACE(self->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyNetkWorkspace_methods[] = {
    { "get_number", (PyCFunction)_wrap_netk_workspace_get_number, METH_NOARGS },
    { "get_name", (PyCFunction)_wrap_netk_workspace_get_name, METH_NOARGS },
    { "change_name", (PyCFunction)_wrap_netk_workspace_change_name, METH_VARARGS|METH_KEYWORDS },
    { "activate", (PyCFunction)_wrap_netk_workspace_activate, METH_NOARGS },
    { "get_width", (PyCFunction)_wrap_netk_workspace_get_width, METH_NOARGS },
    { "get_height", (PyCFunction)_wrap_netk_workspace_get_height, METH_NOARGS },
    { "get_viewport_x", (PyCFunction)_wrap_netk_workspace_get_viewport_x, METH_NOARGS },
    { "get_viewport_y", (PyCFunction)_wrap_netk_workspace_get_viewport_y, METH_NOARGS },
    { "is_virtual", (PyCFunction)_wrap_netk_workspace_is_virtual, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkWorkspace_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "workspace.Workspace",			/* tp_name */
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
    _PyNetkWorkspace_methods,			/* tp_methods */
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

PyMethodDef pyworkspace_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyworkspace_register_classes(PyObject *d)
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


#line 203 "workspace.c"
    pygobject_register_class(d, "NetkWorkspace", NETK_TYPE_WORKSPACE, &PyNetkWorkspace_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
