/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "icons.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/gui-enum-types.h>

#define XFCE_TYPE_ICON_THEME_CATEGORY GUI_TYPE_ICON_THEME_CATEGORY
#line 15 "icons.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)


/* ---------- forward type declarations ---------- */

#line 27 "icons.c"



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_themed_icon_lookup(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:themed_icon_lookup", kwlist, &name, &size))
        return NULL;
    
    ret = xfce_themed_icon_lookup(name, size);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_themed_icon_load(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:themed_icon_load", kwlist, &name, &size))
        return NULL;
    
    ret = xfce_themed_icon_load(name, size);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_themed_icon_lookup_category(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "category", "size", NULL };
    PyObject *py_category = NULL;
    int size;
    gchar *ret;
    XfceIconThemeCategory category;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"Oi:themed_icon_lookup_category", kwlist, &py_category, &size))
        return NULL;
    if (pyg_enum_get_value(XFCE_TYPE_ICON_THEME_CATEGORY, py_category, (gpointer)&category))
        return NULL;
    
    ret = xfce_themed_icon_lookup_category(category, size);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_themed_icon_load_category(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "category", "size", NULL };
    PyObject *py_category = NULL;
    int size;
    GdkPixbuf *ret;
    XfceIconThemeCategory category;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"Oi:themed_icon_load_category", kwlist, &py_category, &size))
        return NULL;
    if (pyg_enum_get_value(XFCE_TYPE_ICON_THEME_CATEGORY, py_category, (gpointer)&category))
        return NULL;
    
    ret = xfce_themed_icon_load_category(category, size);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_themed_icon_add_search_path(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "path", NULL };
    char *path;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:themed_icon_add_search_path", kwlist, &path))
        return NULL;
    
    xfce_themed_icon_add_search_path(path);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_set_icon_theme(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "theme_name", NULL };
    char *theme_name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:themed_icon_set_icon_theme", kwlist, &theme_name))
        return NULL;
    
    xfce_set_icon_theme(theme_name);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_inline_icon_at_size(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "data", "width", "height", NULL };
    int data_len, width, height;
    guchar *data;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s#ii:inline_icon_at_size", kwlist, &data, &data_len, &width, &height))
        return NULL;
    
    ret = inline_icon_at_size(data, width, height);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_load_themed_icon(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "size", NULL };
    char *name;
    int size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:load_themed_icon", kwlist, &name, &size))
        return NULL;
    
    ret = xfce_load_themed_icon(name, size);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_pixbuf_new_from_file_at_size(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", "width", "height", NULL };
    char *filename;
    int width, height;
    GdkPixbuf *ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sii:pixbuf_new_from_file_at_size", kwlist, &filename, &width, &height))
        return NULL;
    
    ret = xfce_pixbuf_new_from_file_at_size(filename, width, height, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pyicons_functions[] = {
    { "themed_icon_lookup", (PyCFunction)_wrap_xfce_themed_icon_lookup, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "themed_icon_load", (PyCFunction)_wrap_xfce_themed_icon_load, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "themed_icon_lookup_category", (PyCFunction)_wrap_xfce_themed_icon_lookup_category, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "themed_icon_load_category", (PyCFunction)_wrap_xfce_themed_icon_load_category, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "themed_icon_add_search_path", (PyCFunction)_wrap_xfce_themed_icon_add_search_path, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "themed_icon_set_icon_theme", (PyCFunction)_wrap_xfce_set_icon_theme, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "inline_icon_at_size", (PyCFunction)_wrap_inline_icon_at_size, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "load_themed_icon", (PyCFunction)_wrap_xfce_load_themed_icon, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "pixbuf_new_from_file_at_size", (PyCFunction)_wrap_xfce_pixbuf_new_from_file_at_size, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pyicons_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "IconThemeCategory", strip_prefix, XFCE_TYPE_ICON_THEME_CATEGORY);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyicons_register_classes(PyObject *d)
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


#line 270 "icons.c"
}
