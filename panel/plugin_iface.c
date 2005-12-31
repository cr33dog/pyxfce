/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "plugin_iface.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-plugin-iface.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "plugin_iface.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkMenuItem_Type;
#define PyGtkMenuItem_Type (*_PyGtkMenuItem_Type)
static PyTypeObject *_PyGtkMenu_Type;
#define PyGtkMenu_Type (*_PyGtkMenu_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfcePanelPlugin_Type;

#line 32 "plugin_iface.c"



/* ----------- XfcePanelPlugin ----------- */

static PyObject *
_wrap_xfce_panel_plugin_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_panel_plugin_get_name(XFCE_PANEL_PLUGIN(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_get_id(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_panel_plugin_get_id(XFCE_PANEL_PLUGIN(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_get_display_name(PyGObject *self)
{
    const gchar *ret;

    ret = xfce_panel_plugin_get_display_name(XFCE_PANEL_PLUGIN(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_get_size(PyGObject *self)
{
    int ret;

    ret = xfce_panel_plugin_get_size(XFCE_PANEL_PLUGIN(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_xfce_panel_plugin_set_expand(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "expand", NULL };
    int expand;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfcePanelPlugin.set_expand", kwlist, &expand))
        return NULL;
    xfce_panel_plugin_set_expand(XFCE_PANEL_PLUGIN(self->obj), expand);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_get_expand(PyGObject *self)
{
    int ret;

    ret = xfce_panel_plugin_get_expand(XFCE_PANEL_PLUGIN(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_panel_plugin_get_orientation(PyGObject *self)
{
    gint ret;

    ret = xfce_panel_plugin_get_orientation(XFCE_PANEL_PLUGIN(self->obj));
    return pyg_enum_from_gtype(GTK_TYPE_ORIENTATION, ret);
}

static PyObject *
_wrap_xfce_panel_plugin_add_action_widget(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "widget", NULL };
    PyGObject *widget;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfcePanelPlugin.add_action_widget", kwlist, &PyGtkWidget_Type, &widget))
        return NULL;
    xfce_panel_plugin_add_action_widget(XFCE_PANEL_PLUGIN(self->obj), GTK_WIDGET(widget->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_menu_insert_item(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", NULL };
    PyGObject *item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfcePanelPlugin.menu_insert_item", kwlist, &PyGtkMenuItem_Type, &item))
        return NULL;
    xfce_panel_plugin_menu_insert_item(XFCE_PANEL_PLUGIN(self->obj), GTK_MENU_ITEM(item->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_menu_show_about(PyGObject *self)
{
    xfce_panel_plugin_menu_show_about(XFCE_PANEL_PLUGIN(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_menu_show_configure(PyGObject *self)
{
    xfce_panel_plugin_menu_show_configure(XFCE_PANEL_PLUGIN(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_block_menu(PyGObject *self)
{
    xfce_panel_plugin_block_menu(XFCE_PANEL_PLUGIN(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_unblock_menu(PyGObject *self)
{
    xfce_panel_plugin_unblock_menu(XFCE_PANEL_PLUGIN(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_register_menu(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu", NULL };
    PyGObject *menu;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:XfcePanelPlugin.register_menu", kwlist, &PyGtkMenu_Type, &menu))
        return NULL;
    xfce_panel_plugin_register_menu(XFCE_PANEL_PLUGIN(self->obj), GTK_MENU(menu->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_lookup_rc_file(PyGObject *self)
{
    gchar *ret;

    ret = xfce_panel_plugin_lookup_rc_file(XFCE_PANEL_PLUGIN(self->obj));
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_plugin_save_location(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "create", NULL };
    int create;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfcePanelPlugin.save_location", kwlist, &create))
        return NULL;
    ret = xfce_panel_plugin_save_location(XFCE_PANEL_PLUGIN(self->obj), create);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfcePanelPlugin_methods[] = {
    { "get_name", (PyCFunction)_wrap_xfce_panel_plugin_get_name, METH_NOARGS },
    { "get_id", (PyCFunction)_wrap_xfce_panel_plugin_get_id, METH_NOARGS },
    { "get_display_name", (PyCFunction)_wrap_xfce_panel_plugin_get_display_name, METH_NOARGS },
    { "get_size", (PyCFunction)_wrap_xfce_panel_plugin_get_size, METH_NOARGS },
    { "set_expand", (PyCFunction)_wrap_xfce_panel_plugin_set_expand, METH_VARARGS|METH_KEYWORDS },
    { "get_expand", (PyCFunction)_wrap_xfce_panel_plugin_get_expand, METH_NOARGS },
    { "get_orientation", (PyCFunction)_wrap_xfce_panel_plugin_get_orientation, METH_NOARGS },
    { "add_action_widget", (PyCFunction)_wrap_xfce_panel_plugin_add_action_widget, METH_VARARGS|METH_KEYWORDS },
    { "menu_insert_item", (PyCFunction)_wrap_xfce_panel_plugin_menu_insert_item, METH_VARARGS|METH_KEYWORDS },
    { "menu_show_about", (PyCFunction)_wrap_xfce_panel_plugin_menu_show_about, METH_NOARGS },
    { "menu_show_configure", (PyCFunction)_wrap_xfce_panel_plugin_menu_show_configure, METH_NOARGS },
    { "block_menu", (PyCFunction)_wrap_xfce_panel_plugin_block_menu, METH_NOARGS },
    { "unblock_menu", (PyCFunction)_wrap_xfce_panel_plugin_unblock_menu, METH_NOARGS },
    { "register_menu", (PyCFunction)_wrap_xfce_panel_plugin_register_menu, METH_VARARGS|METH_KEYWORDS },
    { "lookup_rc_file", (PyCFunction)_wrap_xfce_panel_plugin_lookup_rc_file, METH_NOARGS },
    { "save_location", (PyCFunction)_wrap_xfce_panel_plugin_save_location, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfcePanelPlugin_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "pluginiface.PanelPlugin",			/* tp_name */
    sizeof(PyObject),	        /* tp_basicsize */
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
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,		/* tp_iter */
    (iternextfunc)0,	/* tp_iternext */
    _PyXfcePanelPlugin_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)0,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyplugin_iface_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyplugin_iface_register_classes(PyObject *d)
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
        _PyGtkMenuItem_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "MenuItem");
        if (_PyGtkMenuItem_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name MenuItem from gtk");
            return;
        }
        _PyGtkMenu_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Menu");
        if (_PyGtkMenu_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Menu from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 341 "plugin_iface.c"
    pyg_register_interface(d, "PanelPlugin", XFCE_TYPE_PANEL_PLUGIN, &PyXfcePanelPlugin_Type);
}
