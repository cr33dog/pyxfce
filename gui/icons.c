/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "icons.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "icons.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_set_icon_theme(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "theme_name", NULL };
    char *theme_name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:themed_icon_set_icon_theme", kwlist, &theme_name))
        return NULL;
    xfce_set_icon_theme(theme_name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_themed_icon_lookup(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:themed_icon_lookup", kwlist, &name, &size))
        return NULL;
    ret = xfce_themed_icon_lookup(name, size);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_themed_icon_load(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:xfce_themed_icon_load", kwlist, &name, &size))
        return NULL;
    ret = xfce_themed_icon_load(name, size);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_themed_icon_add_search_path(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "path", NULL };
    char *path;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:themed_icon_add_search_path", kwlist, &path))
        return NULL;
    xfce_themed_icon_add_search_path(path);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_pixbuf_new_from_file_at_size(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", "width", "height", NULL };
    char *filename;
    int width, height;
    GdkPixbuf *ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sii:xfce_pixbuf_new_from_file_at_size", kwlist, &filename, &width, &height))
        return NULL;
    ret = xfce_pixbuf_new_from_file_at_size(filename, width, height, &error);
    if (pyg_error_check(&error))
        return NULL;
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_load_themed_icon(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:xfce_load_themed_icon", kwlist, &name, &size))
        return NULL;
    ret = xfce_load_themed_icon(name, size);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyicons_functions[] = {
    { "themed_icon_set_icon_theme", (PyCFunction)_wrap_xfce_set_icon_theme, METH_VARARGS|METH_KEYWORDS },
    { "themed_icon_lookup", (PyCFunction)_wrap_xfce_themed_icon_lookup, METH_VARARGS|METH_KEYWORDS },
    { "xfce_themed_icon_load", (PyCFunction)_wrap_xfce_themed_icon_load, METH_VARARGS|METH_KEYWORDS },
    { "themed_icon_add_search_path", (PyCFunction)_wrap_xfce_themed_icon_add_search_path, METH_VARARGS|METH_KEYWORDS },
    { "xfce_pixbuf_new_from_file_at_size", (PyCFunction)_wrap_xfce_pixbuf_new_from_file_at_size, METH_VARARGS|METH_KEYWORDS },
    { "xfce_load_themed_icon", (PyCFunction)_wrap_xfce_load_themed_icon, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyicons_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGdkPixbuf_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return;
    }


#line 168 "icons.c"
}
