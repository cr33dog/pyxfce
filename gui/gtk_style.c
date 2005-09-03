/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "gtk_style.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "gtk_style.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */

#line 25 "gtk_style.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_get_style(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "widget", "name", "state", NULL };
    PyGObject *widget;
    char *name, *state;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!ss:get_style", kwlist, &PyGtkWidget_Type, &widget, &name, &state))
        return NULL;
    ret = get_style(GTK_WIDGET(widget->obj), name, state);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_get_style_gc(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "widget", "state", "style", NULL };
    PyGObject *widget;
    char *state, *style;
    GdkGC *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!ss:get_style_gc", kwlist, &PyGtkWidget_Type, &widget, &state, &style))
        return NULL;
    ret = get_style_gc(GTK_WIDGET(widget->obj), state, style);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pygtk_style_functions[] = {
    { "get_style", (PyCFunction)_wrap_get_style, METH_VARARGS|METH_KEYWORDS },
    { "get_style_gc", (PyCFunction)_wrap_get_style_gc, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pygtk_style_register_classes(PyObject *d)
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

        _PyGtkWidget_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 108 "gtk_style.c"
}
