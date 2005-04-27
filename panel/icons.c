/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "icons.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <panel/icons.h>

#line 13 "icons.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

PyMethodDef pyicons_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyicons_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("STOCK_ICON", strip_prefix), STOCK_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("EXTERN_ICON", strip_prefix), EXTERN_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("DEFAULT_ICON", strip_prefix), DEFAULT_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("EDIT_ICON", strip_prefix), EDIT_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("FILE1_ICON", strip_prefix), FILE1_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("FILE2_ICON", strip_prefix), FILE2_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("GAMES_ICON", strip_prefix), GAMES_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MAN_ICON", strip_prefix), MAN_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("MULTIMEDIA_ICON", strip_prefix), MULTIMEDIA_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("NETWORK_ICON", strip_prefix), NETWORK_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("PAINT_ICON", strip_prefix), PAINT_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("PRINT_ICON", strip_prefix), PRINT_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("SCHEDULE_ICON", strip_prefix), SCHEDULE_ICON);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("TERMINAL_ICON", strip_prefix), TERMINAL_ICON);

  if (PyErr_Occurred())
    PyErr_Print();
}

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
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGtkWidget_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
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


#line 109 "icons.c"
}
