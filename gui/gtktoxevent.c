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
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_add_event_win(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "gscr", "event_mask", NULL };
    PyGObject *gscr;
    int event_mask;
    GdkWindow *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!i:xfce_add_event_win", kwlist, &PyGdkScreen_Type, &gscr, &event_mask))
        return NULL;
    ret = xfce_add_event_win(GDK_SCREEN(gscr->obj), event_mask);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_closeEventFilter(PyObject *self)
{
    closeEventFilter();
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_getDefaultGtkWidget(PyObject *self)
{
    GtkWidget *ret;

    ret = getDefaultGtkWidget();
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_getGdkEventWindow(PyObject *self)
{
    GdkWindow *ret;

    ret = getGdkEventWindow();
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_getDefaultGdkWindow(PyObject *self)
{
    GdkWindow *ret;

    ret = getDefaultGdkWindow();
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pygtktoxevent_functions[] = {
    { "xfce_add_event_win", (PyCFunction)_wrap_xfce_add_event_win, METH_VARARGS|METH_KEYWORDS },
    { "closeEventFilter", (PyCFunction)_wrap_closeEventFilter, METH_NOARGS },
    { "getDefaultGtkWidget", (PyCFunction)_wrap_getDefaultGtkWidget, METH_NOARGS },
    { "getGdkEventWindow", (PyCFunction)_wrap_getGdkEventWindow, METH_NOARGS },
    { "getDefaultGdkWindow", (PyCFunction)_wrap_getDefaultGdkWindow, METH_NOARGS },
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
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGdkScreen_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Screen");
        if (_PyGdkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from gtk.gdk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return;
    }


#line 139 "gtktoxevent.c"
}
