/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "appmenuitem.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <gtk/gtkdialog.h>
#include <libxfcegui4/libxfcegui4.h>

#line 14 "appmenuitem.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkImageMenuItem_Type;
#define PyGtkImageMenuItem_Type (*_PyGtkImageMenuItem_Type)
static PyTypeObject *_PyXfceDesktopEntry_Type;
#define PyXfceDesktopEntry_Type (*_PyXfceDesktopEntry_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceAppMenuItem_Type;

#line 29 "appmenuitem.c"



/* ----------- XfceAppMenuItem ----------- */

static int
_wrap_xfce_app_menu_item_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":appmenuitem.AppMenuItem.__init__", kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create %(typename)s object");
        return -1;
    }

    return 0;
}


static PyObject *
_wrap_xfce_app_menu_item_set_name(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceAppMenuItem.set_name", kwlist, &name))
        return NULL;
    xfce_app_menu_item_set_name(XFCE_APP_MENU_ITEM(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_set_icon_name(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", NULL };
    char *filename;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceAppMenuItem.set_icon_name", kwlist, &filename))
        return NULL;
    xfce_app_menu_item_set_icon_name(XFCE_APP_MENU_ITEM(self->obj), filename);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_set_command(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "command", NULL };
    char *command;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceAppMenuItem.set_command", kwlist, &command))
        return NULL;
    xfce_app_menu_item_set_command(XFCE_APP_MENU_ITEM(self->obj), command);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_set_needs_term(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "needs_term", NULL };
    int needs_term;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceAppMenuItem.set_needs_term", kwlist, &needs_term))
        return NULL;
    xfce_app_menu_item_set_needs_term(XFCE_APP_MENU_ITEM(self->obj), needs_term);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_set_startup_notification(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "snotify", NULL };
    int snotify;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceAppMenuItem.set_startup_notification", kwlist, &snotify))
        return NULL;
    xfce_app_menu_item_set_startup_notification(XFCE_APP_MENU_ITEM(self->obj), snotify);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_app_menu_item_get_name(XFCE_APP_MENU_ITEM(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_get_icon_name(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_app_menu_item_get_icon_name(XFCE_APP_MENU_ITEM(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_get_command(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_app_menu_item_get_command(XFCE_APP_MENU_ITEM(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_get_needs_term(PyGObject *self)
{
    int ret;

    ret = xfce_app_menu_item_get_needs_term(XFCE_APP_MENU_ITEM(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_app_menu_item_get_startup_notification(PyGObject *self)
{
    int ret;

    ret = xfce_app_menu_item_get_startup_notification(XFCE_APP_MENU_ITEM(self->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyXfceAppMenuItem_methods[] = {
    { "set_name", (PyCFunction)_wrap_xfce_app_menu_item_set_name, METH_VARARGS|METH_KEYWORDS },
    { "set_icon_name", (PyCFunction)_wrap_xfce_app_menu_item_set_icon_name, METH_VARARGS|METH_KEYWORDS },
    { "set_command", (PyCFunction)_wrap_xfce_app_menu_item_set_command, METH_VARARGS|METH_KEYWORDS },
    { "set_needs_term", (PyCFunction)_wrap_xfce_app_menu_item_set_needs_term, METH_VARARGS|METH_KEYWORDS },
    { "set_startup_notification", (PyCFunction)_wrap_xfce_app_menu_item_set_startup_notification, METH_VARARGS|METH_KEYWORDS },
    { "get_name", (PyCFunction)_wrap_xfce_app_menu_item_get_name, METH_NOARGS },
    { "get_icon_name", (PyCFunction)_wrap_xfce_app_menu_item_get_icon_name, METH_NOARGS },
    { "get_command", (PyCFunction)_wrap_xfce_app_menu_item_get_command, METH_NOARGS },
    { "get_needs_term", (PyCFunction)_wrap_xfce_app_menu_item_get_needs_term, METH_NOARGS },
    { "get_startup_notification", (PyCFunction)_wrap_xfce_app_menu_item_get_startup_notification, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceAppMenuItem_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "appmenuitem.AppMenuItem",			/* tp_name */
    sizeof(PyGObject),	        /* tp_basicsize */
    0,					/* tp_itemsize */
    /* methods */
    (destructor)0,	/* tp_dealloc */
    (printfunc)0,			/* tp_print */
    (getattrfunc)0,	/* tp_getattr */
    (setattrfunc)0,	/* tp_setattr */
    (cmpfunc)0,		/* tp_compare */
    (reprfunc)0,		/* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,		/* tp_hash */
    (ternaryfunc)0,		/* tp_call */
    (reprfunc)0,		/* tp_str */
    (getattrofunc)0,	/* tp_getattro */
    (setattrofunc)0,	/* tp_setattro */
    (PyBufferProcs*)0,	/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL, 				/* Documentation string */
    (traverseproc)0,	/* tp_traverse */
    (inquiry)0,		/* tp_clear */
    (richcmpfunc)0,	/* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,		/* tp_iter */
    (iternextfunc)0,	/* tp_iternext */
    _PyXfceAppMenuItem_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_app_menu_item_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_app_menu_item_new_with_label(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "label", NULL };
    char *label;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:app_menu_item_new_with_label", kwlist, &label))
        return NULL;
    ret = xfce_app_menu_item_new_with_label(label);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_app_menu_item_new_with_mnemonic(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "label", NULL };
    char *label;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:app_menu_item_new_with_mnemonic", kwlist, &label))
        return NULL;
    ret = xfce_app_menu_item_new_with_mnemonic(label);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_app_menu_item_new_with_command(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "label", "command", NULL };
    char *label, *command;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:app_menu_item_new_with_command", kwlist, &label, &command))
        return NULL;
    ret = xfce_app_menu_item_new_with_command(label, command);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_app_menu_item_new_full(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "label", "command", "icon_filename", "needs_term", "snotify", NULL };
    char *label, *command, *icon_filename;
    int needs_term, snotify;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "sssii:app_menu_item_new_full", kwlist, &label, &command, &icon_filename, &needs_term, &snotify))
        return NULL;
    ret = xfce_app_menu_item_new_full(label, command, icon_filename, needs_term, snotify);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_app_menu_item_new_from_desktop_entry(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "entry", "show_icon", NULL };
    PyGObject *entry;
    int show_icon;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!i:app_menu_item_new_from_desktop_entry", kwlist, &PyXfceDesktopEntry_Type, &entry, &show_icon))
        return NULL;
    ret = xfce_app_menu_item_new_from_desktop_entry(XFCE_DESKTOP_ENTRY(entry->obj), show_icon);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_app_menu_item_set_icon_size(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon_size", NULL };
    PyObject *py_icon_size = NULL;
    guint icon_size = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:app_menu_item_set_icon_size", kwlist, &py_icon_size))
        return NULL;
    if (py_icon_size) {
        if (PyLong_Check(py_icon_size))
            icon_size = PyLong_AsUnsignedLong(py_icon_size);
        else if (PyInt_Check(py_icon_size))
            icon_size = PyInt_AsLong(py_icon_size);
        else
            PyErr_SetString(PyExc_TypeError, "Parameter 'icon_size' must be an int or a long");
        if (PyErr_Occurred())
            return NULL;
    }
    xfce_app_menu_item_set_icon_size(icon_size);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_app_menu_item_set_icon_theme_name(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "theme_name", NULL };
    char *theme_name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:app_menu_item_set_icon_theme_name", kwlist, &theme_name))
        return NULL;
    xfce_app_menu_item_set_icon_theme_name(theme_name);
    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef pyappmenuitem_functions[] = {
    { "app_menu_item_new_with_label", (PyCFunction)_wrap_xfce_app_menu_item_new_with_label, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_new_with_mnemonic", (PyCFunction)_wrap_xfce_app_menu_item_new_with_mnemonic, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_new_with_command", (PyCFunction)_wrap_xfce_app_menu_item_new_with_command, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_new_full", (PyCFunction)_wrap_xfce_app_menu_item_new_full, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_new_from_desktop_entry", (PyCFunction)_wrap_xfce_app_menu_item_new_from_desktop_entry, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_set_icon_size", (PyCFunction)_wrap_xfce_app_menu_item_set_icon_size, METH_VARARGS|METH_KEYWORDS },
    { "app_menu_item_set_icon_theme_name", (PyCFunction)_wrap_xfce_app_menu_item_set_icon_theme_name, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyappmenuitem_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("xfce4.util")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyXfceDesktopEntry_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "DesktopEntry");
        if (_PyXfceDesktopEntry_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name DesktopEntry from xfce4.util");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import xfce4.util");
        return;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGtkImageMenuItem_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "ImageMenuItem");
        if (_PyGtkImageMenuItem_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name ImageMenuItem from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 408 "appmenuitem.c"
    pygobject_register_class(d, "XfceAppMenuItem", XFCE_TYPE_APP_MENU_ITEM, &PyXfceAppMenuItem_Type, Py_BuildValue("(O)", &PyGtkImageMenuItem_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_APP_MENU_ITEM);
}
