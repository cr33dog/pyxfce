/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "gtk_extensions.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "gtk_extensions.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWindow_Type;
#define PyGtkWindow_Type (*_PyGtkWindow_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_gtk_window_center_on_monitor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", "screen", "monitor", NULL };
    PyGObject *window, *screen;
    int monitor;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!O!i:gtk_window_center_on_monitor", kwlist, &PyGtkWindow_Type, &window, &PyGdkScreen_Type, &screen, &monitor))
        return NULL;
    xfce_gtk_window_center_on_monitor(GTK_WINDOW(window->obj), GDK_SCREEN(screen->obj), monitor);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_gtk_window_center_on_monitor_with_pointer(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", NULL };
    PyGObject *window;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:gtk_window_center_on_monitor_with_pointer", kwlist, &PyGtkWindow_Type, &window))
        return NULL;
    xfce_gtk_window_center_on_monitor_with_pointer(GTK_WINDOW(window->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pygtk_extensions_functions[] = {
    { "gtk_window_center_on_monitor", (PyCFunction)_wrap_xfce_gtk_window_center_on_monitor, METH_VARARGS|METH_KEYWORDS },
    { "gtk_window_center_on_monitor_with_pointer", (PyCFunction)_wrap_xfce_gtk_window_center_on_monitor_with_pointer, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pygtk_extensions_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGdkScreen_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Screen");
        if (_PyGdkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from gtk.gdk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return;
    }


#line 113 "gtk_extensions.c"
}
