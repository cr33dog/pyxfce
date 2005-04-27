/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "enum_types.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "enum_types.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_netk_window_state_get_type(PyObject *self)
{
    GType ret;

    ret = netk_window_state_get_type();
    return pyg_type_wrapper_new(ret);
}

static PyObject *
_wrap_netk_window_actions_get_type(PyObject *self)
{
    GType ret;

    ret = netk_window_actions_get_type();
    return pyg_type_wrapper_new(ret);
}

static PyObject *
_wrap_netk_window_type_get_type(PyObject *self)
{
    GType ret;

    ret = netk_window_type_get_type();
    return pyg_type_wrapper_new(ret);
}

static PyObject *
_wrap_netk_pager_display_mode_get_type(PyObject *self)
{
    GType ret;

    ret = netk_pager_display_mode_get_type();
    return pyg_type_wrapper_new(ret);
}

static PyObject *
_wrap_netk_tasklist_grouping_type_get_type(PyObject *self)
{
    GType ret;

    ret = netk_tasklist_grouping_type_get_type();
    return pyg_type_wrapper_new(ret);
}

PyMethodDef pyenum_types_functions[] = {
    { "netk_window_state_get_type", (PyCFunction)_wrap_netk_window_state_get_type, METH_NOARGS },
    { "netk_window_actions_get_type", (PyCFunction)_wrap_netk_window_actions_get_type, METH_NOARGS },
    { "netk_window_type_get_type", (PyCFunction)_wrap_netk_window_type_get_type, METH_NOARGS },
    { "netk_pager_display_mode_get_type", (PyCFunction)_wrap_netk_pager_display_mode_get_type, METH_NOARGS },
    { "netk_tasklist_grouping_type_get_type", (PyCFunction)_wrap_netk_tasklist_grouping_type_get_type, METH_NOARGS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyenum_types_register_classes(PyObject *d)
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


#line 102 "enum_types.c"
}
