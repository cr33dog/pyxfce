/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "resource.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "resource.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_resource_lookup(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", "filename", NULL };
    PyObject *py_type = NULL;
    char *filename;
    gchar *ret;
    XfceResourceType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Os:resource_lookup", kwlist, &py_type, &filename))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_type, (gint *)&type))
        return NULL;
    ret = xfce_resource_lookup(type, filename);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_resource_push_path(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", "path", NULL };
    PyObject *py_type = NULL;
    char *path;
    XfceResourceType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Os:resource_push_path", kwlist, &py_type, &path))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_type, (gint *)&type))
        return NULL;
    xfce_resource_push_path(type, path);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_resource_pop_path(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", NULL };
    PyObject *py_type = NULL;
    XfceResourceType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:resource_pop_path", kwlist, &py_type))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_type, (gint *)&type))
        return NULL;
    xfce_resource_pop_path(type);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_resource_save_location(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", "relpath", "create", NULL };
    PyObject *py_type = NULL;
    char *relpath;
    int create;
    gchar *ret;
    XfceResourceType type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Osi:resource_save_location", kwlist, &py_type, &relpath, &create))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_type, (gint *)&type))
        return NULL;
    ret = xfce_resource_save_location(type, relpath, create);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pyresource_functions[] = {
    { "resource_lookup", (PyCFunction)_wrap_xfce_resource_lookup, METH_VARARGS|METH_KEYWORDS },
    { "resource_push_path", (PyCFunction)_wrap_xfce_resource_push_path, METH_VARARGS|METH_KEYWORDS },
    { "resource_pop_path", (PyCFunction)_wrap_xfce_resource_pop_path, METH_VARARGS|METH_KEYWORDS },
    { "resource_save_location", (PyCFunction)_wrap_xfce_resource_save_location, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyresource_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_RESOURCE_DATA", strip_prefix), XFCE_RESOURCE_DATA);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_RESOURCE_CONFIG", strip_prefix), XFCE_RESOURCE_CONFIG);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_RESOURCE_CACHE", strip_prefix), XFCE_RESOURCE_CACHE);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_RESOURCE_ICONS", strip_prefix), XFCE_RESOURCE_ICONS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_RESOURCE_THEMES", strip_prefix), XFCE_RESOURCE_THEMES);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyresource_register_classes(PyObject *d)
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


#line 152 "resource.c"
}
