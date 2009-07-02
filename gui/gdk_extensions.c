/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "gdk_extensions.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#undef GDK_DISPLAY
#define GDK_DISPLAY(object) (GDK_DISPLAY_OBJECT(object))

#line 16 "gdk_extensions.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkDisplay_Type;
#define PyGdkDisplay_Type (*_PyGdkDisplay_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */

#line 30 "gdk_extensions.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_gdk_display_get_fullname(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "display", NULL };
    PyGObject *display;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gdk_display_get_fullname", kwlist, &PyGdkDisplay_Type, &display))
        return NULL;
    
    ret = xfce_gdk_display_get_fullname(GDK_DISPLAY(display->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_gdk_screen_get_fullname(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gdk_screen_get_fullname", kwlist, &PyGdkScreen_Type, &screen))
        return NULL;
    
    ret = xfce_gdk_screen_get_fullname(GDK_SCREEN(screen->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_gdk_spawn_command_line_on_screen(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", "command_line", NULL };
    PyGObject *screen;
    char *command_line;
    int ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!s:gdk_spawn_command_line_on_screen", kwlist, &PyGdkScreen_Type, &screen, &command_line))
        return NULL;
    
    ret = xfce_gdk_spawn_command_line_on_screen(GDK_SCREEN(screen->obj), command_line, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

const PyMethodDef pygdk_extensions_functions[] = {
    { "gdk_display_get_fullname", (PyCFunction)_wrap_xfce_gdk_display_get_fullname, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gdk_screen_get_fullname", (PyCFunction)_wrap_xfce_gdk_screen_get_fullname, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gdk_spawn_command_line_on_screen", (PyCFunction)_wrap_xfce_gdk_spawn_command_line_on_screen, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pygdk_extensions_register_classes(PyObject *d)
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
        _PyGdkDisplay_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Display");
        if (_PyGdkDisplay_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Display from gtk.gdk");
            return ;
        }
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


#line 146 "gdk_extensions.c"
}
