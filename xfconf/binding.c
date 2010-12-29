/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "binding.override"
#include "pygobject.h"
#include <glib.h>
#include <xfconf/xfconf.h>

#line 13 "binding.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */

#line 23 "binding.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfconf_g_property_unbind(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    unsigned long id;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"k:g_property_unbind", kwlist, &id))
        return NULL;
    
    xfconf_g_property_unbind(id);
    
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef pybinding_functions[] = {
    { "g_property_unbind", (PyCFunction)_wrap_xfconf_g_property_unbind, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pybinding_register_classes(PyObject *d)
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


#line 70 "binding.c"
}
