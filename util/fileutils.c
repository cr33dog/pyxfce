/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "fileutils.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "fileutils.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 23 "fileutils.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_mkdirhier(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "whole_path", "mode", NULL };
    char *whole_path;
    int ret;
    unsigned long mode;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sk:mkdirhier", kwlist, &whole_path, &mode))
        return NULL;
    
    ret = xfce_mkdirhier(whole_path, mode, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

const PyMethodDef pyfileutils_functions[] = {
    { "mkdirhier", (PyCFunction)_wrap_xfce_mkdirhier, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyfileutils_register_classes(PyObject *d)
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


#line 75 "fileutils.c"
}
