/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "startup-notification.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "startup-notification.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */

#line 25 "startup-notification.c"



/* ----------- functions ----------- */

#line 26 "startup-notification.override"
static PyObject *
_wrap_xfce_startup_notification_start(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", "path", NULL };
    PyGObject *screen;
    char *path;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!s:startup_notification_start", kwlist, &PyGdkScreen_Type, &screen, &path))
        return NULL;
    ret = xfce_startup_notification_start(GDK_SCREEN(screen->obj), path);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 51 "startup-notification.c"


static PyObject *
_wrap_xfce_startup_notification_cancel(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    char *id;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:startup_notification_cancel", kwlist, &id))
        return NULL;
    
    xfce_startup_notification_cancel(id);
    
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef pystartup_notification_functions[] = {
    { "startup_notification_start", (PyCFunction)_wrap_xfce_startup_notification_start, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "startup_notification_cancel", (PyCFunction)_wrap_xfce_startup_notification_cancel, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pystartup_notification_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkScreen_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Screen");
        if (_PyGdkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 109 "startup-notification.c"
}
