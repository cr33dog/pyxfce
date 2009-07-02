/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "colorbutton.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "colorbutton.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 23 "colorbutton.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_color_button_new_with_color(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "color", NULL };
    PyObject *py_color;
    GdkColor *color = NULL;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:color_button_new_with_color", kwlist, &py_color))
        return NULL;
    if (pyg_boxed_check(py_color, GDK_TYPE_COLOR))
        color = pyg_boxed_get(py_color, GdkColor);
    else {
        PyErr_SetString(PyExc_TypeError, "color should be a GdkColor");
        return NULL;
    }
    
    ret = xfce_color_button_new_with_color(color);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pycolorbutton_functions[] = {
    { "color_button_new_with_color", (PyCFunction)_wrap_xfce_color_button_new_with_color, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pycolorbutton_register_classes(PyObject *d)
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


#line 78 "colorbutton.c"
}
