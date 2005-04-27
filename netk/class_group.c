/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "class_group.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/netk-class-group.h>

#line 13 "class_group.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkClassGroup_Type;


/* ----------- NetkClassGroup ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

static PyObject *
_wrap_netk_class_group_get_res_class(PyGObject *self)
{
    const gchar *ret;

    ret = netk_class_group_get_res_class(NETK_CLASS_GROUP(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_class_group_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_class_group_get_name(NETK_CLASS_GROUP(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyNetkClassGroup_methods[] = {
    { "get_res_class", (PyCFunction)_wrap_netk_class_group_get_res_class, METH_NOARGS },
    { "get_name", (PyCFunction)_wrap_netk_class_group_get_name, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkClassGroup_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "classgroup.ClassGroup",			/* tp_name */
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
    (getattrofunc)0,			/* tp_getattro */
    (setattrofunc)0,			/* tp_setattro */
    (PyBufferProcs*)0,	/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL, 				/* Documentation string */
    (traverseproc)0,	/* tp_traverse */
    (inquiry)0,		/* tp_clear */
    (richcmpfunc)0,	/* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,		/* tp_iter */
    (iternextfunc)0,	/* tp_iternext */
    _PyNetkClassGroup_methods,			/* tp_methods */
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

static PyObject *
_wrap_netk_class_group_get_type(PyObject *self)
{
    GType ret;

    ret = netk_class_group_get_type();
    return pyg_type_wrapper_new(ret);
}

static PyObject *
_wrap_netk_class_group_get(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "res_class", NULL };
    char *res_class;
    NetkClassGroup *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:netk_class_group_get", kwlist, &res_class))
        return NULL;
    ret = netk_class_group_get(res_class);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_p_netk_class_group_create(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "res_class", NULL };
    char *res_class;
    NetkClassGroup *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:p_netk_class_group_create", kwlist, &res_class))
        return NULL;
    ret = p_netk_class_group_create(res_class);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_p_netk_class_group_destroy(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "class_group", NULL };
    PyGObject *class_group;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:p_netk_class_group_destroy", kwlist, &PyNetkClassGroup_Type, &class_group))
        return NULL;
    p_netk_class_group_destroy(NETK_CLASS_GROUP(class_group->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pyclass_group_functions[] = {
    { "netk_class_group_get_type", (PyCFunction)_wrap_netk_class_group_get_type, METH_NOARGS },
    { "netk_class_group_get", (PyCFunction)_wrap_netk_class_group_get, METH_VARARGS|METH_KEYWORDS },
    { "p_netk_class_group_create", (PyCFunction)_wrap_p_netk_class_group_create, METH_VARARGS|METH_KEYWORDS },
    { "p_netk_class_group_destroy", (PyCFunction)_wrap_p_netk_class_group_destroy, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyclass_group_register_classes(PyObject *d)
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


#line 196 "class_group.c"
    pygobject_register_class(d, "NetkClassGroup", NETK_TYPE_CLASS_GROUP, &PyNetkClassGroup_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
