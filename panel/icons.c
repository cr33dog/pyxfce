/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "icons.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <panel/icons.h>

extern PyTypeObject PyGtkWidget_Type;
extern PyTypeObject PyGdkPixbuf_Type;

#line 16 "icons.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

static PyObject *
_wrap_get_panel_pixbuf(PyObject *self)
{
    GdkPixbuf *ret;

    ret = get_panel_pixbuf();
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_get_pixbuf_from_file(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "path", NULL };
    char *path;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:get_pixbuf_from_file", kwlist, &path))
        return NULL;
    ret = get_pixbuf_from_file(path);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_get_scaled_pixbuf(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", "size", NULL };
    PyGObject *pixbuf;
    int size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!i:get_scaled_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf, &size))
        return NULL;
    ret = get_scaled_pixbuf(GDK_PIXBUF(pixbuf->obj), size);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_get_themed_pixbuf(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:get_themed_pixbuf", kwlist, &name))
        return NULL;
    ret = get_themed_pixbuf(name);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyicons_functions[] = {
    { "get_panel_pixbuf", (PyCFunction)_wrap_get_panel_pixbuf, METH_NOARGS },
    { "get_pixbuf_from_file", (PyCFunction)_wrap_get_pixbuf_from_file, METH_VARARGS|METH_KEYWORDS },
    { "get_scaled_pixbuf", (PyCFunction)_wrap_get_scaled_pixbuf, METH_VARARGS|METH_KEYWORDS },
    { "get_themed_pixbuf", (PyCFunction)_wrap_get_themed_pixbuf, METH_VARARGS|METH_KEYWORDS },
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


#line 169 "icons.c"
}
