/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "window.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-window.h>
#include <libxfce4panel/xfce-panel-enum-types.h>

extern PyTypeObject PyGtkWidget_Type;

#line 16 "window.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkWindow_Type;
#define PyGtkWindow_Type (*_PyGtkWindow_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfcePanelWindow_Type;

#line 31 "window.c"



/* ----------- XfcePanelWindow ----------- */

static int
_wrap_xfce_panel_window_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":support.PanelWindow.__init__", kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create %(typename)s object");
        return -1;
    }

    return 0;
}


static PyObject *
_wrap_xfce_panel_window_set_orientation(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "orientation", NULL };
    GtkOrientation orientation;
    PyObject *py_orientation = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfcePanelWindow.set_orientation", kwlist, &py_orientation))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_ORIENTATION, py_orientation, (gint *)&orientation))
        return NULL;
    xfce_panel_window_set_orientation(XFCE_PANEL_WINDOW(self->obj), orientation);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_window_get_orientation(PyGObject *self)
{
    gint ret;

    ret = xfce_panel_window_get_orientation(XFCE_PANEL_WINDOW(self->obj));
    return pyg_enum_from_gtype(GTK_TYPE_ORIENTATION, ret);
}

static PyObject *
_wrap_xfce_panel_window_set_handle_style(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "handle_style", NULL };
    PyObject *py_handle_style = NULL;
    XfceHandleStyle handle_style;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfcePanelWindow.set_handle_style", kwlist, &py_handle_style))
        return NULL;
    if (pyg_enum_get_value(XFCE_TYPE_HANDLE_STYLE, py_handle_style, (gint *)&handle_style))
        return NULL;
    xfce_panel_window_set_handle_style(XFCE_PANEL_WINDOW(self->obj), handle_style);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_window_get_handle_style(PyGObject *self)
{
    gint ret;

    ret = xfce_panel_window_get_handle_style(XFCE_PANEL_WINDOW(self->obj));
    return pyg_enum_from_gtype(XFCE_TYPE_HANDLE_STYLE, ret);
}

static PyObject *
_wrap_xfce_panel_window_set_show_border(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "top_border", "bottom_border", "left_border", "right_border", NULL };
    int top_border, bottom_border, left_border, right_border;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "iiii:XfcePanelWindow.set_show_border", kwlist, &top_border, &bottom_border, &left_border, &right_border))
        return NULL;
    xfce_panel_window_set_show_border(XFCE_PANEL_WINDOW(self->obj), top_border, bottom_border, left_border, right_border);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_window_set_movable(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "movable", NULL };
    int movable;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfcePanelWindow.set_movable", kwlist, &movable))
        return NULL;
    xfce_panel_window_set_movable(XFCE_PANEL_WINDOW(self->obj), movable);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_panel_window_get_movable(PyGObject *self)
{
    int ret;

    ret = xfce_panel_window_get_movable(XFCE_PANEL_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyXfcePanelWindow_methods[] = {
    { "set_orientation", (PyCFunction)_wrap_xfce_panel_window_set_orientation, METH_VARARGS|METH_KEYWORDS },
    { "get_orientation", (PyCFunction)_wrap_xfce_panel_window_get_orientation, METH_NOARGS },
    { "set_handle_style", (PyCFunction)_wrap_xfce_panel_window_set_handle_style, METH_VARARGS|METH_KEYWORDS },
    { "get_handle_style", (PyCFunction)_wrap_xfce_panel_window_get_handle_style, METH_NOARGS },
    { "set_show_border", (PyCFunction)_wrap_xfce_panel_window_set_show_border, METH_VARARGS|METH_KEYWORDS },
    { "set_movable", (PyCFunction)_wrap_xfce_panel_window_set_movable, METH_VARARGS|METH_KEYWORDS },
    { "get_movable", (PyCFunction)_wrap_xfce_panel_window_get_movable, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfcePanelWindow_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "support.PanelWindow",			/* tp_name */
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
    _PyXfcePanelWindow_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_panel_window_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pywindow_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pywindow_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "HandleStyle", strip_prefix, XFCE_TYPE_HANDLE_STYLE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pywindow_register_classes(PyObject *d)
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
        _PyGtkWindow_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Window");
        if (_PyGtkWindow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Window from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 260 "window.c"
    pygobject_register_class(d, "XfcePanelWindow", XFCE_TYPE_PANEL_WINDOW, &PyXfcePanelWindow_Type, Py_BuildValue("(O)", &PyGtkWindow_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_PANEL_WINDOW);
}
