/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "enum_types.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-enums.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "enum_types.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 25 "enum_types.c"



/* ----------- functions ----------- */

PyMethodDef pyenum_types_functions[] = {
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


#line 57 "enum_types.c"
}
