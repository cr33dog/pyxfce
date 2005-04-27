/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "mcs_client.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4mcs/mcs-client.h>

#line 13 "mcs_client.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

PyMethodDef pymcs_client_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pymcs_client_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_ACTION_NEW", strip_prefix), MCS_ACTION_NEW);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_ACTION_CHANGED", strip_prefix), MCS_ACTION_CHANGED);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MCS_ACTION_DELETED", strip_prefix), MCS_ACTION_DELETED);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pymcs_client_register_classes(PyObject *d)
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


#line 66 "mcs_client.c"
}
