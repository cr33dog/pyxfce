/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "icontheme.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

extern PyTypeObject PyGdkScreen;

#line 15 "icontheme.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceIconTheme_Type;


/* ----------- XfceIconTheme ----------- */

static PyObject *
_wrap_xfce_icon_theme_lookup(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon_name", "icon_size", NULL };
    char *icon_name;
    int icon_size;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:XfceIconTheme.lookup", kwlist, &icon_name, &icon_size))
        return NULL;
    ret = xfce_icon_theme_lookup(XFCE_ICON_THEME(self->obj), icon_name, icon_size);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_lookup_category(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "category", "icon_size", NULL };
    PyObject *py_category = NULL;
    int icon_size;
    gchar *ret;
    XfceIconThemeCategory category;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Oi:XfceIconTheme.lookup_category", kwlist, &py_category, &icon_size))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_category, (gint *)&category))
        return NULL;
    ret = xfce_icon_theme_lookup_category(XFCE_ICON_THEME(self->obj), category, icon_size);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_load(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon_name", "icon_size", NULL };
    char *icon_name;
    int icon_size;
    GdkPixbuf *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:XfceIconTheme.load", kwlist, &icon_name, &icon_size))
        return NULL;
    ret = xfce_icon_theme_load(XFCE_ICON_THEME(self->obj), icon_name, icon_size);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_icon_theme_load_category(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "category", "icon_size", NULL };
    PyObject *py_category = NULL;
    int icon_size;
    GdkPixbuf *ret;
    XfceIconThemeCategory category;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Oi:XfceIconTheme.load_category", kwlist, &py_category, &icon_size))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_category, (gint *)&category))
        return NULL;
    ret = xfce_icon_theme_load_category(XFCE_ICON_THEME(self->obj), category, icon_size);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_icon_theme_prepend_search_path(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "search_path", NULL };
    char *search_path;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceIconTheme.prepend_search_path", kwlist, &search_path))
        return NULL;
    xfce_icon_theme_prepend_search_path(XFCE_ICON_THEME(self->obj), search_path);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_append_search_path(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "search_path", NULL };
    char *search_path;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceIconTheme.append_search_path", kwlist, &search_path))
        return NULL;
    xfce_icon_theme_append_search_path(XFCE_ICON_THEME(self->obj), search_path);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_unregister_category(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "category", NULL };
    PyObject *py_category = NULL;
    XfceIconThemeCategory category;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfceIconTheme.unregister_category", kwlist, &py_category))
        return NULL;
    if (pyg_enum_get_value(G_TYPE_NONE, py_category, (gint *)&category))
        return NULL;
    xfce_icon_theme_unregister_category(XFCE_ICON_THEME(self->obj), category);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_set_use_svg(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "use_svg", NULL };
    int use_svg;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceIconTheme.set_use_svg", kwlist, &use_svg))
        return NULL;
    xfce_icon_theme_set_use_svg(XFCE_ICON_THEME(self->obj), use_svg);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_icon_theme_get_use_svg(PyGObject *self)
{
    int ret;

    ret = xfce_icon_theme_get_use_svg(XFCE_ICON_THEME(self->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyXfceIconTheme_methods[] = {
    { "lookup", (PyCFunction)_wrap_xfce_icon_theme_lookup, METH_VARARGS|METH_KEYWORDS },
    { "lookup_category", (PyCFunction)_wrap_xfce_icon_theme_lookup_category, METH_VARARGS|METH_KEYWORDS },
    { "load", (PyCFunction)_wrap_xfce_icon_theme_load, METH_VARARGS|METH_KEYWORDS },
    { "load_category", (PyCFunction)_wrap_xfce_icon_theme_load_category, METH_VARARGS|METH_KEYWORDS },
    { "prepend_search_path", (PyCFunction)_wrap_xfce_icon_theme_prepend_search_path, METH_VARARGS|METH_KEYWORDS },
    { "append_search_path", (PyCFunction)_wrap_xfce_icon_theme_append_search_path, METH_VARARGS|METH_KEYWORDS },
    { "unregister_category", (PyCFunction)_wrap_xfce_icon_theme_unregister_category, METH_VARARGS|METH_KEYWORDS },
    { "set_use_svg", (PyCFunction)_wrap_xfce_icon_theme_set_use_svg, METH_VARARGS|METH_KEYWORDS },
    { "get_use_svg", (PyCFunction)_wrap_xfce_icon_theme_get_use_svg, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceIconTheme_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "icontheme.IconTheme",			/* tp_name */
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
    _PyXfceIconTheme_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_xfce_icon_theme_get_for_screen(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;
    XfceIconTheme *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:xfce_icon_theme_get_for_screen", kwlist, &PyGdkScreen_Type, &screen))
        return NULL;
    ret = xfce_icon_theme_get_for_screen(GDK_SCREEN(screen->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyicontheme_functions[] = {
    { "xfce_icon_theme_get_for_screen", (PyCFunction)_wrap_xfce_icon_theme_get_for_screen, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyicontheme_add_constants(PyObject *module, const gchar *strip_prefix)
{
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_UNKNOWN", strip_prefix), XFCE_ICON_CATEGORY_UNKNOWN);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_EDITOR", strip_prefix), XFCE_ICON_CATEGORY_EDITOR);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_FILEMAN", strip_prefix), XFCE_ICON_CATEGORY_FILEMAN);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_UTILITY", strip_prefix), XFCE_ICON_CATEGORY_UTILITY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_GAME", strip_prefix), XFCE_ICON_CATEGORY_GAME);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_HELP", strip_prefix), XFCE_ICON_CATEGORY_HELP);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_MULTIMEDIA", strip_prefix), XFCE_ICON_CATEGORY_MULTIMEDIA);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_NETWORK", strip_prefix), XFCE_ICON_CATEGORY_NETWORK);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_GRAPHICS", strip_prefix), XFCE_ICON_CATEGORY_GRAPHICS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_PRINTER", strip_prefix), XFCE_ICON_CATEGORY_PRINTER);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_PRODUCTIVITY", strip_prefix), XFCE_ICON_CATEGORY_PRODUCTIVITY);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_SOUND", strip_prefix), XFCE_ICON_CATEGORY_SOUND);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_TERMINAL", strip_prefix), XFCE_ICON_CATEGORY_TERMINAL);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_DEVELOPMENT", strip_prefix), XFCE_ICON_CATEGORY_DEVELOPMENT);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_SETTINGS", strip_prefix), XFCE_ICON_CATEGORY_SETTINGS);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_SYSTEM", strip_prefix), XFCE_ICON_CATEGORY_SYSTEM);
    PyModule_AddIntConstant(module, pyg_constant_strip_prefix("XFCE_ICON_CATEGORY_WINE", strip_prefix), XFCE_ICON_CATEGORY_WINE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyicontheme_register_classes(PyObject *d)
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


#line 317 "icontheme.c"
    pygobject_register_class(d, "XfceIconTheme", XFCE_TYPE_ICON_THEME, &PyXfceIconTheme_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
