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

#line 26 "dialogs.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_confirm(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", "stock_id", "action", NULL };
    char *text, *stock_id, *action;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sss:confirm", kwlist, &text, &stock_id, &action))
        return NULL;
    
    ret = xfce_confirm(text, stock_id, action);
    
    return PyBool_FromLong(ret);

}

#line 38 "dialogs.override"
static PyObject *
_wrap_xfce_create_header(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon", "text", NULL };
    PyGObject *icon;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Os:create_header", kwlist, &icon, &text)) {
        return NULL;
    }

    if ((PyObject*) icon == Py_None) {
        ret = create_header(NULL, text);
    } else if (pygobject_check(icon, &PyGdkPixbuf_Type)) {
        ret = create_header(GDK_PIXBUF(icon->obj), text);
    } else {
        PyErr_SetString(PyExc_TypeError, "icon: expected a Pixbuf or None");
        return NULL;
    }
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}
#line 72 "dialogs.c"


static PyObject *
_wrap_xfce_create_header_with_image(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "image", "text", NULL };
    PyGObject *image;
    char *text;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!s:create_header_with_image", kwlist, &PyGtkWidget_Type, &image, &text))
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

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:create_small_label", kwlist, &text))
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

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ss:create_mixed_button", kwlist, &stock, &text))
        return NULL;
    
    ret = xfce_create_mixed_button(stock, text);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pydialogs_functions[] = {
    { "confirm", (PyCFunction)_wrap_xfce_confirm, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "create_header", (PyCFunction)_wrap_xfce_create_header, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "create_header_with_image", (PyCFunction)_wrap_xfce_create_header_with_image, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "create_small_label", (PyCFunction)_wrap_xfce_create_small_label, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "create_mixed_button", (PyCFunction)_wrap_xfce_create_mixed_button, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pydialogs_register_classes(PyObject *d)
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
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkPixbuf_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 182 "dialogs.c"
}
