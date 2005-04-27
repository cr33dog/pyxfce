/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "session_client.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "session_client.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

PyMethodDef pysession_client_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pysession_client_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_INTERACT_NONE", strip_prefix), SESSION_INTERACT_NONE);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_INTERACT_ERRORS", strip_prefix), SESSION_INTERACT_ERRORS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_INTERACT_ANY", strip_prefix), SESSION_INTERACT_ANY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_RESTART_IF_RUNNING", strip_prefix), SESSION_RESTART_IF_RUNNING);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_RESTART_ANYWAY", strip_prefix), SESSION_RESTART_ANYWAY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_RESTART_IMMEDIATELY", strip_prefix), SESSION_RESTART_IMMEDIATELY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_RESTART_NEVER", strip_prefix), SESSION_RESTART_NEVER);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_IDLE", strip_prefix), SESSION_CLIENT_IDLE);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_SAVING_PHASE_1", strip_prefix), SESSION_CLIENT_SAVING_PHASE_1);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_WAITING_FOR_PHASE_2", strip_prefix), SESSION_CLIENT_WAITING_FOR_PHASE_2);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_SAVING_PHASE_2", strip_prefix), SESSION_CLIENT_SAVING_PHASE_2);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_WAITING_FOR_INTERACT", strip_prefix), SESSION_CLIENT_WAITING_FOR_INTERACT);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_DONE_WITH_INTERACT", strip_prefix), SESSION_CLIENT_DONE_WITH_INTERACT);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_FROZEN", strip_prefix), SESSION_CLIENT_FROZEN);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_DISCONNECTED", strip_prefix), SESSION_CLIENT_DISCONNECTED);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SESSION_CLIENT_REGISTERING", strip_prefix), SESSION_CLIENT_REGISTERING);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pysession_client_register_classes(PyObject *d)
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


#line 79 "session_client.c"
}
