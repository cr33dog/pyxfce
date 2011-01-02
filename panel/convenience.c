/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "convenience.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/libxfce4panel.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "convenience.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkToggleButton_Type;
#define PyGtkToggleButton_Type (*_PyGtkToggleButton_Type)


/* ---------- forward type declarations ---------- */

#line 29 "convenience.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_panel_create_button(PyObject *self)
{
    GtkWidget *ret;

    
    ret = xfce_panel_create_button();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_panel_create_toggle_button(PyObject *self)
{
    GtkWidget *ret;

    
    ret = xfce_panel_create_toggle_button();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_panel_get_channel_name(PyObject *self)
{
    const gchar *ret;

    
    ret = xfce_panel_get_channel_name();
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef pyconvenience_functions[] = {
    { "xfce_panel_create_button", (PyCFunction)_wrap_xfce_panel_create_button, METH_NOARGS,
      NULL },
    { "xfce_panel_create_toggle_button", (PyCFunction)_wrap_xfce_panel_create_toggle_button, METH_NOARGS,
      NULL },
    { "xfce_panel_get_channel_name", (PyCFunction)_wrap_xfce_panel_get_channel_name, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyconvenience_register_classes(PyObject *d)
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


#line 121 "convenience.c"
}
