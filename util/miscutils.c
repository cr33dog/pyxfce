/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "miscutils.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "miscutils.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 23 "miscutils.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_version_string(PyObject *self)
{
    const gchar *ret;

    
    ret = xfce_version_string();
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_homedir(PyObject *self)
{
    const gchar *ret;

    
    ret = xfce_get_homedir();
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_userdir(PyObject *self)
{
    const gchar *ret;

    
    ret = xfce_get_userdir();
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef pymiscutils_functions[] = {
    { "version_string", (PyCFunction)_wrap_xfce_version_string, METH_NOARGS,
      NULL },
    { "get_homedir", (PyCFunction)_wrap_xfce_get_homedir, METH_NOARGS,
      NULL },
    { "get_userdir", (PyCFunction)_wrap_xfce_get_userdir, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pymiscutils_register_classes(PyObject *d)
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


#line 101 "miscutils.c"
}
