/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "channel.override"
#include "pygobject.h"
#include <glib.h>
#include <xfconf/xfconf.h>

#line 13 "channel.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfconfChannel_Type;

#line 24 "channel.c"



/* ----------- XfconfChannel ----------- */

static int
_wrap_xfconf_channel_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "channel_name", NULL };
    char *channel_name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfconfChannel.__init__", kwlist, &channel_name))
        return -1;
    self->obj = (GObject *)xfconf_channel_new(channel_name);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfconfChannel object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfconf_channel_has_property(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", NULL };
    char *property;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfconfChannel.has_property", kwlist, &property))
        return NULL;
    
    ret = xfconf_channel_has_property(XFCONF_CHANNEL(self->obj), property);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_is_property_locked(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", NULL };
    char *property;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfconfChannel.is_property_locked", kwlist, &property))
        return NULL;
    
    ret = xfconf_channel_is_property_locked(XFCONF_CHANNEL(self->obj), property);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_reset_property(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property_base", "recursive", NULL };
    char *property_base;
    int recursive;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:XfconfChannel.reset_property", kwlist, &property_base, &recursive))
        return NULL;
    
    xfconf_channel_reset_property(XFCONF_CHANNEL(self->obj), property_base, recursive);
    
    Py_INCREF(Py_None);
    return Py_None;
}

#line 49 "channel.override"
static PyObject *
_wrap_xfconf_channel_get_properties(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property_base", NULL };
    GHashTable *ret;
    char* path;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfconfChannel.get_properties", kwlist, &path))
        return NULL;
    ret = xfconf_channel_get_properties(XFCONF_CHANNEL(self->obj), path);
    if (ret) {
        GHashTableIter iter;
        gpointer key, value;
        PyObject* py_ret;
        py_ret = PyDict_New();
        g_hash_table_iter_init(&iter, ret);
        while(g_hash_table_iter_next(&iter, &key, &value)) {
            PyDict_SetItem(py_ret, PyString_FromString((const char*) key), pyg_value_as_pyobject((GValue*) value, TRUE));
        }
        g_hash_table_destroy(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 122 "channel.c"


static PyObject *
_wrap_xfconf_channel_get_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property, *default_value;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ss:XfconfChannel.get_string", kwlist, &property, &default_value))
        return NULL;
    
    ret = xfconf_channel_get_string(XFCONF_CHANNEL(self->obj), property, default_value);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfconf_channel_set_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property, *value;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ss:XfconfChannel.set_string", kwlist, &property, &value))
        return NULL;
    
    ret = xfconf_channel_set_string(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_get_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property;
    int default_value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:XfconfChannel.get_int", kwlist, &property, &default_value))
        return NULL;
    
    ret = xfconf_channel_get_int(XFCONF_CHANNEL(self->obj), property, default_value);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_xfconf_channel_set_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property;
    int value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:XfconfChannel.set_int", kwlist, &property, &value))
        return NULL;
    
    ret = xfconf_channel_set_int(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_get_uint(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property;
    guint32 ret;
    unsigned long default_value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sk:XfconfChannel.get_uint", kwlist, &property, &default_value))
        return NULL;
    
    ret = xfconf_channel_get_uint(XFCONF_CHANNEL(self->obj), property, default_value);
    
    return PyLong_FromUnsignedLong(ret);

}

static PyObject *
_wrap_xfconf_channel_set_uint(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property;
    int ret;
    unsigned long value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sk:XfconfChannel.set_uint", kwlist, &property, &value))
        return NULL;
    
    ret = xfconf_channel_set_uint(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_get_uint64(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property;
    PyObject *py_default_value = NULL;
    guint64 default_value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sO!:XfconfChannel.get_uint64", kwlist, &property, &PyLong_Type, &py_default_value))
        return NULL;
    default_value = PyLong_AsUnsignedLongLong(py_default_value);
    
    ret = xfconf_channel_get_uint64(XFCONF_CHANNEL(self->obj), property, default_value);
    
    return PyLong_FromUnsignedLongLong(ret);
}

static PyObject *
_wrap_xfconf_channel_set_uint64(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property;
    PyObject *py_value = NULL;
    int ret;
    guint64 value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sO!:XfconfChannel.set_uint64", kwlist, &property, &PyLong_Type, &py_value))
        return NULL;
    value = PyLong_AsUnsignedLongLong(py_value);
    
    ret = xfconf_channel_set_uint64(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_get_double(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property;
    double default_value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sd:XfconfChannel.get_double", kwlist, &property, &default_value))
        return NULL;
    
    ret = xfconf_channel_get_double(XFCONF_CHANNEL(self->obj), property, default_value);
    
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_xfconf_channel_set_double(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property;
    double value;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sd:XfconfChannel.set_double", kwlist, &property, &value))
        return NULL;
    
    ret = xfconf_channel_set_double(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_get_bool(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "default_value", NULL };
    char *property;
    int default_value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:XfconfChannel.get_bool", kwlist, &property, &default_value))
        return NULL;
    
    ret = xfconf_channel_get_bool(XFCONF_CHANNEL(self->obj), property, default_value);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfconf_channel_set_bool(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "property", "value", NULL };
    char *property;
    int value, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:XfconfChannel.set_bool", kwlist, &property, &value))
        return NULL;
    
    ret = xfconf_channel_set_bool(XFCONF_CHANNEL(self->obj), property, value);
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyXfconfChannel_methods[] = {
    { "has_property", (PyCFunction)_wrap_xfconf_channel_has_property, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "is_property_locked", (PyCFunction)_wrap_xfconf_channel_is_property_locked, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "reset_property", (PyCFunction)_wrap_xfconf_channel_reset_property, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_properties", (PyCFunction)_wrap_xfconf_channel_get_properties, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_string", (PyCFunction)_wrap_xfconf_channel_get_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_string", (PyCFunction)_wrap_xfconf_channel_set_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_int", (PyCFunction)_wrap_xfconf_channel_get_int, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_int", (PyCFunction)_wrap_xfconf_channel_set_int, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_uint", (PyCFunction)_wrap_xfconf_channel_get_uint, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_uint", (PyCFunction)_wrap_xfconf_channel_set_uint, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_uint64", (PyCFunction)_wrap_xfconf_channel_get_uint64, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_uint64", (PyCFunction)_wrap_xfconf_channel_set_uint64, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_double", (PyCFunction)_wrap_xfconf_channel_get_double, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_double", (PyCFunction)_wrap_xfconf_channel_set_double, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_bool", (PyCFunction)_wrap_xfconf_channel_get_bool, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_bool", (PyCFunction)_wrap_xfconf_channel_set_bool, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfconfChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "classgroup.Channel",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfconfChannel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfconf_channel_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

#line 25 "channel.override"
static PyObject *
_wrap_xfconf_list_channels(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };
    gchar **ret;
    int i;
    int count;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":list_channels", kwlist))
        return NULL;
    ret = xfconf_list_channels();
    if (ret) {
        count = g_strv_length(ret);
        PyObject *py_ret = PyList_New(count);
        for(i = 0; i < count; ++i)
            PyList_SetItem(py_ret, i, PyString_FromString(ret[i]));
        g_strfreev(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 435 "channel.c"


static PyObject *
_wrap_xfconf_channel_get(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "channel_name", NULL };
    char *channel_name;
    XfconfChannel *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:channel_get", kwlist, &channel_name))
        return NULL;
    
    ret = xfconf_channel_get(channel_name);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfconf_channel_new_with_property_base(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "channel_name", "property_base", NULL };
    char *channel_name, *property_base;
    XfconfChannel *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ss:channel_new_with_property_base", kwlist, &channel_name, &property_base))
        return NULL;
    
    ret = xfconf_channel_new_with_property_base(channel_name, property_base);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pychannel_functions[] = {
    { "list_channels", (PyCFunction)_wrap_xfconf_list_channels, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "channel_get", (PyCFunction)_wrap_xfconf_channel_get, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "channel_new_with_property_base", (PyCFunction)_wrap_xfconf_channel_new_with_property_base, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pychannel_register_classes(PyObject *d)
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


#line 500 "channel.c"
    pygobject_register_class(d, "XfconfChannel", XFCONF_TYPE_CHANNEL, &PyXfconfChannel_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
