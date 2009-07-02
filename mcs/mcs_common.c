/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "mcs_common.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4mcs/mcs-client.h> /* or: manager */

#line 13 "mcs_common.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_mcs_byte_order(PyObject *self)
{
    gchar ret;

    ret = mcs_byte_order();
    return PyString_FromStringAndSize(&ret, 1);
}

PyMethodDef pymcs_common_functions[] = {
    { "mcs_byte_order", (PyCFunction)_wrap_mcs_byte_order, METH_NOARGS },
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pymcs_common_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_TYPE_INT", strip_prefix), MCS_TYPE_INT);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_TYPE_STRING", strip_prefix), MCS_TYPE_STRING);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_TYPE_COLOR", strip_prefix), MCS_TYPE_COLOR);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_SUCCESS", strip_prefix), MCS_SUCCESS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_NO_MEM", strip_prefix), MCS_NO_MEM);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_ACCESS", strip_prefix), MCS_ACCESS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_FAILED", strip_prefix), MCS_FAILED);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_NO_ENTRY", strip_prefix), MCS_NO_ENTRY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_DUPLICATE_ENTRY", strip_prefix), MCS_DUPLICATE_ENTRY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_NO_CHANNEL", strip_prefix), MCS_NO_CHANNEL);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_MANAGER_NONE", strip_prefix), MCS_MANAGER_NONE);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_MANAGER_STD", strip_prefix), MCS_MANAGER_STD);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_MANAGER_MULTI_CHANNEL", strip_prefix), MCS_MANAGER_MULTI_CHANNEL);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_MANAGER_BOTH", strip_prefix), MCS_MANAGER_BOTH);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pymcs_common_register_classes(PyObject *d)
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


#line 87 "mcs_common.c"
}
