/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "session_client.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/gui-enum-types.h>

#define SESSION_TYPE_INTERACT_STYLE GUI_TYPE_INTERACT_STYLE
#define SESSION_TYPE_RESTART_STYLE GUI_TYPE_RESTART_STYLE
#define SESSION_TYPE_CLIENT_STATE GUI_TYPE_CLIENT_STATE

#line 18 "session_client.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 28 "session_client.c"



/* ----------- functions ----------- */

const PyMethodDef pysession_client_functions[] = {
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pysession_client_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "InteractStyle", strip_prefix, SESSION_TYPE_INTERACT_STYLE);
  pyg_enum_add(module, "RestartStyle", strip_prefix, SESSION_TYPE_RESTART_STYLE);
  pyg_enum_add(module, "ClientState", strip_prefix, SESSION_TYPE_CLIENT_STATE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pysession_client_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }


#line 75 "session_client.c"
}
