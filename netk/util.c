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


/* ----------- functions ----------- */

static PyObject *
_wrap_netk_gtk_window_set_type(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", "type", NULL };
    PyGObject *window;
    PyObject *py_type = NULL;
    NetkWindowType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!O:gtk_window_set_type", kwlist, &PyGtkWindow_Type, &window, &py_type))
        return NULL;
    if (pyg_enum_get_value(NETK_TYPE_WINDOW_TYPE, py_type, (gint *)&type))
        return NULL;
    netk_gtk_window_set_type(GTK_WINDOW(window->obj), type);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_gtk_window_avoid_input(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", NULL };
    PyGObject *window;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:gtk_window_avoid_input", kwlist, &PyGtkWindow_Type, &window))
        return NULL;
    netk_gtk_window_avoid_input(GTK_WINDOW(window->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pyutil_functions[] = {
    { "gtk_window_set_type", (PyCFunction)_wrap_netk_gtk_window_set_type, METH_VARARGS|METH_KEYWORDS },
    { "gtk_window_avoid_input", (PyCFunction)_wrap_netk_gtk_window_avoid_input, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyutil_register_classes(PyObject *d)
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

        _PyGtkWindow_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Window");
        if (_PyGtkWindow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Window from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 100 "util.c"
}
