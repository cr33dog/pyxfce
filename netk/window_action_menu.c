/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "window_action_menu.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/netk-window.h>
#include <libxfcegui4/netk-window-action-menu.h>

extern PyTypeObject PyNetkWindow_Type;

#line 17 "window_action_menu.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_netk_create_window_action_menu(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", NULL };
    PyGObject *window;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:create_window_action_menu", kwlist, &PyNetkWindow_Type, &window))
        return NULL;
    ret = netk_create_window_action_menu(NETK_WINDOW(window->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pywindow_action_menu_functions[] = {
    { "create_window_action_menu", (PyCFunction)_wrap_netk_create_window_action_menu, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pywindow_action_menu_register_classes(PyObject *d)
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


#line 71 "window_action_menu.c"
}
