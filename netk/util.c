/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "util.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "util.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWindow_Type;
#define PyGtkWindow_Type (*_PyGtkWindow_Type)


/* ---------- forward type declarations ---------- */

#line 25 "util.c"



/* ----------- functions ----------- */

const PyMethodDef pyutil_functions[] = {
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyutil_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkWindow_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Window");
        if (_PyGtkWindow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Window from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 67 "util.c"
}
