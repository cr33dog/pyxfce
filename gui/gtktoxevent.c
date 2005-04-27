/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "gtktoxevent.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "gtktoxevent.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_closeEventFilter(PyObject *self)
{
    closeEventFilter();
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pygtktoxevent_functions[] = {
    { "closeEventFilter", (PyCFunction)_wrap_closeEventFilter, METH_NOARGS },
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pygtktoxevent_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XEV_FILTER_STOP", strip_prefix), XEV_FILTER_STOP);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XEV_FILTER_CONTINUE", strip_prefix), XEV_FILTER_CONTINUE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pygtktoxevent_register_classes(PyObject *d)
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


#line 74 "gtktoxevent.c"
}
