/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "utf8.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "utf8.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 23 "utf8.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_utf8_remove_controls(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", "max_len", "end", NULL };
    char *str, *end;
    gchar *ret;
    gssize max_len;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sls:utf8_remove_controls", kwlist, &str, &max_len, &end))
        return NULL;
    
    ret = xfce_utf8_remove_controls(str, max_len, end);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_utf8_strndup(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "src", "max_len", NULL };
    char *src;
    gchar *ret;
    gssize max_len;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sl:utf8_strndup", kwlist, &src, &max_len))
        return NULL;
    
    ret = xfce_utf8_strndup(src, max_len);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef pyutf8_functions[] = {
    { "utf8_remove_controls", (PyCFunction)_wrap_xfce_utf8_remove_controls, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "utf8_strndup", (PyCFunction)_wrap_xfce_utf8_strndup, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyutf8_register_classes(PyObject *d)
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


#line 101 "utf8.c"
}
