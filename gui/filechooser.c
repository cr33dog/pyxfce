/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "filechooser.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "filechooser.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

PyMethodDef pyfilechooser_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyfilechooser_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_FILE_CHOOSER_ACTION_OPEN", strip_prefix), XFCE_FILE_CHOOSER_ACTION_OPEN);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_FILE_CHOOSER_ACTION_SAVE", strip_prefix), XFCE_FILE_CHOOSER_ACTION_SAVE);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_FILE_CHOOSER_ACTION_SELECT_FOLDER", strip_prefix), XFCE_FILE_CHOOSER_ACTION_SELECT_FOLDER);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_FILE_CHOOSER_ACTION_CREATE_FOLDER", strip_prefix), XFCE_FILE_CHOOSER_ACTION_CREATE_FOLDER);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyfilechooser_register_classes(PyObject *d)
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


#line 67 "filechooser.c"
}
