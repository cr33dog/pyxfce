/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "i18n.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "i18n.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_strip_context(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "msgid", "msgval", NULL };
    char *msgid, *msgval;
    const gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:xfce_strip_context", kwlist, &msgid, &msgval))
        return NULL;
    ret = xfce_strip_context(msgid, msgval);
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_file_localized(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", NULL };
    char *filename;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:xfce_get_file_localized", kwlist, &filename))
        return NULL;
    ret = xfce_get_file_localized(filename);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_dir_localized(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "directory", NULL };
    char *directory;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:xfce_get_dir_localized", kwlist, &directory))
        return NULL;
    ret = xfce_get_dir_localized(directory);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_file_localized_r(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "buffer", "length", "filename", NULL };
    char *buffer, *filename;
    int length;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sis:xfce_get_file_localized_r", kwlist, &buffer, &length, &filename))
        return NULL;
    ret = xfce_get_file_localized_r(buffer, length, filename);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_get_dir_localized_r(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "buffer", "length", "directory", NULL };
    char *buffer, *directory;
    int length;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sis:xfce_get_dir_localized_r", kwlist, &buffer, &length, &directory))
        return NULL;
    ret = xfce_get_dir_localized_r(buffer, length, directory);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_locale_match(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "locale1", "locale2", NULL };
    char *locale1, *locale2;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:xfce_locale_match", kwlist, &locale1, &locale2))
        return NULL;
    ret = xfce_locale_match(locale1, locale2);
    return PyInt_FromLong(ret);
}

PyMethodDef pyi18n_functions[] = {
    { "xfce_strip_context", (PyCFunction)_wrap_xfce_strip_context, METH_VARARGS|METH_KEYWORDS },
    { "xfce_get_file_localized", (PyCFunction)_wrap_xfce_get_file_localized, METH_VARARGS|METH_KEYWORDS },
    { "xfce_get_dir_localized", (PyCFunction)_wrap_xfce_get_dir_localized, METH_VARARGS|METH_KEYWORDS },
    { "xfce_get_file_localized_r", (PyCFunction)_wrap_xfce_get_file_localized_r, METH_VARARGS|METH_KEYWORDS },
    { "xfce_get_dir_localized_r", (PyCFunction)_wrap_xfce_get_dir_localized_r, METH_VARARGS|METH_KEYWORDS },
    { "xfce_locale_match", (PyCFunction)_wrap_xfce_locale_match, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyi18n_register_classes(PyObject *d)
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


#line 165 "i18n.c"
}
