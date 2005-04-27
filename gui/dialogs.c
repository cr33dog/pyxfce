/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "dialogs.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#line 12 "dialogs.c"


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
_wrap_show_info(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:show_info", kwlist, &text))
        return NULL;
    show_info(text);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_show_warning(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:show_warning", kwlist, &text))
        return NULL;
    show_warning(text);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_show_error(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:show_error", kwlist, &text))
        return NULL;
    show_error(text);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_create_header(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon", "text", NULL };
    PyGObject *icon;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!s:create_header", kwlist, &PyGdkPixbuf_Type, &icon, &text))
        return NULL;
    ret = create_header(GDK_PIXBUF(icon->obj), text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_create_header_with_image(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "image", "text", NULL };
    PyGObject *image;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!s:create_header_with_image", kwlist, &PyGtkWidget_Type, &image, &text))
        return NULL;
    ret = create_header_with_image(GTK_WIDGET(image->obj), text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_small_label(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:small_label", kwlist, &text))
        return NULL;
    ret = small_label(text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_exec_command(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "command", NULL };
    char *command;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:exec_command", kwlist, &command))
        return NULL;
    ret = exec_command(command);
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_confirm(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", "stock_id", "action", NULL };
    char *text, *stock_id, *action;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sss:confirm", kwlist, &text, &stock_id, &action))
        return NULL;
    ret = xfce_confirm(text, stock_id, action);
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_create_header(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon", "text", NULL };
    PyGObject *icon;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!s:create_header", kwlist, &PyGdkPixbuf_Type, &icon, &text))
        return NULL;
    ret = xfce_create_header(GDK_PIXBUF(icon->obj), text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_create_header_with_image(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "image", "text", NULL };
    PyGObject *image;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!s:create_header_with_image", kwlist, &PyGtkWidget_Type, &image, &text))
        return NULL;
    ret = xfce_create_header_with_image(GTK_WIDGET(image->obj), text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_create_small_label(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:create_small_label", kwlist, &text))
        return NULL;
    ret = xfce_create_small_label(text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_create_mixed_button(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "stock", "text", NULL };
    char *stock, *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:create_mixed_button", kwlist, &stock, &text))
        return NULL;
    ret = xfce_create_mixed_button(stock, text);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pydialogs_functions[] = {
    { "show_info", (PyCFunction)_wrap_show_info, METH_VARARGS|METH_KEYWORDS },
    { "show_warning", (PyCFunction)_wrap_show_warning, METH_VARARGS|METH_KEYWORDS },
    { "show_error", (PyCFunction)_wrap_show_error, METH_VARARGS|METH_KEYWORDS },
    { "create_header", (PyCFunction)_wrap_create_header, METH_VARARGS|METH_KEYWORDS },
    { "create_header_with_image", (PyCFunction)_wrap_create_header_with_image, METH_VARARGS|METH_KEYWORDS },
    { "small_label", (PyCFunction)_wrap_small_label, METH_VARARGS|METH_KEYWORDS },
    { "exec_command", (PyCFunction)_wrap_exec_command, METH_VARARGS|METH_KEYWORDS },
    { "confirm", (PyCFunction)_wrap_xfce_confirm, METH_VARARGS|METH_KEYWORDS },
    { "create_header", (PyCFunction)_wrap_xfce_create_header, METH_VARARGS|METH_KEYWORDS },
    { "create_header_with_image", (PyCFunction)_wrap_xfce_create_header_with_image, METH_VARARGS|METH_KEYWORDS },
    { "create_small_label", (PyCFunction)_wrap_xfce_create_small_label, METH_VARARGS|METH_KEYWORDS },
    { "create_mixed_button", (PyCFunction)_wrap_xfce_create_mixed_button, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pydialogs_register_classes(PyObject *d)
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


#line 264 "dialogs.c"
}
