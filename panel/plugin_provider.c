/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "plugin_provider.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/libxfce4panel.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "plugin_provider.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkToggleButton_Type;
#define PyGtkToggleButton_Type (*_PyGtkToggleButton_Type)


/* ---------- forward type declarations ---------- */

#line 29 "plugin_provider.c"



/* ----------- functions ----------- */

const PyMethodDef pyplugin_provider_functions[] = {
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pyplugin_provider_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "PanelPluginProviderSignal", strip_prefix, XFCE_TYPE_PANEL_PLUGIN_PROVIDER_SIGNAL);
  pyg_enum_add(module, "PanelPluginProviderPropType", strip_prefix, XFCE_TYPE_PANEL_PLUGIN_PROVIDER_PROP_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyplugin_provider_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkWidget_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return ;
        }
        _PyGtkToggleButton_Type = (PyTypeObject *)PyObject_GetAttrString(module, "ToggleButton");
        if (_PyGtkToggleButton_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name ToggleButton from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 93 "plugin_provider.c"
}
