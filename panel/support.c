/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "support.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <panel/xfce_support.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "support.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_select_file_with_preview(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "title", "path", "parent", NULL };
    char *title, *path;
    PyGObject *parent;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ssO!:select_file_with_preview", kwlist, &title, &path, &PyGtkWidget_Type, &parent))
        return NULL;
    ret = select_file_with_preview(title, path, GTK_WIDGET(parent->obj));
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pysupport_functions[] = {
    { "select_file_with_preview", (PyCFunction)_wrap_select_file_with_preview, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pysupport_register_classes(PyObject *d)
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


#line 91 "support.c"
}
