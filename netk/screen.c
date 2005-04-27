/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "screen.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#line 13 "screen.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkScreen_Type;


/* ----------- NetkScreen ----------- */

#line 27 "screen.override"
static PyObject *
_wrap_netk_screen_get_windows(PyGObject *self)
{
    GList *icon_list = NULL;
    PyObject *pywindow;

    if ((icon_list = netk_screen_get_windows(NETK_SCREEN(self->obj)))) {
        PyObject *py_list;
        GList *tmp;

        if ((py_list = PyList_New(0)) == NULL) {
            g_list_free(icon_list);
            return NULL;
        }
        for (tmp = icon_list; tmp != NULL; tmp = tmp->next) {
            pywindow = pygobject_new(G_OBJECT(tmp->data));

            if (pywindow == NULL) {
                g_list_free(icon_list);
                Py_DECREF(py_list);
                return NULL;
            }
            PyList_Append(py_list, pywindow);
            Py_DECREF(pywindow);
        }
        g_list_free(icon_list);
        return py_list;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 59 "screen.c"


#line 60 "screen.override"
static PyObject *
_wrap_netk_screen_get_windows_stacked(PyGObject *self)
{
    GList *icon_list = NULL;
    PyObject *pywindow;

    if ((icon_list = netk_screen_get_windows_stacked(NETK_SCREEN(self->obj)))) {
        PyObject *py_list;
        GList *tmp;

        if ((py_list = PyList_New(0)) == NULL) {
            g_list_free(icon_list);
            return NULL;
        }
        for (tmp = icon_list; tmp != NULL; tmp = tmp->next) {
            pywindow = pygobject_new(G_OBJECT(tmp->data));

            if (pywindow == NULL) {
                g_list_free(icon_list);
                Py_DECREF(py_list);
                return NULL;
            }
            PyList_Append(py_list, pywindow);
            Py_DECREF(pywindow);
        }
        g_list_free(icon_list);
        return py_list;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
#line 94 "screen.c"


static PyObject *
_wrap_netk_screen_force_update(PyGObject *self)
{
    netk_screen_force_update(NETK_SCREEN(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_screen_get_workspace_count(PyGObject *self)
{
    int ret;

    ret = netk_screen_get_workspace_count(NETK_SCREEN(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_screen_change_workspace_count(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "count", NULL };
    int count;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkScreen.change_workspace_count", kwlist, &count))
        return NULL;
    netk_screen_change_workspace_count(NETK_SCREEN(self->obj), count);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_screen_net_wm_supports(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "atom", NULL };
    char *atom;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:NetkScreen.net_wm_supports", kwlist, &atom))
        return NULL;
    ret = netk_screen_net_wm_supports(NETK_SCREEN(self->obj), atom);
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_screen_get_background_pixmap(PyGObject *self)
{
    gulong ret;

    ret = netk_screen_get_background_pixmap(NETK_SCREEN(self->obj));
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_netk_screen_get_width(PyGObject *self)
{
    int ret;

    ret = netk_screen_get_width(NETK_SCREEN(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_screen_get_height(PyGObject *self)
{
    int ret;

    ret = netk_screen_get_height(NETK_SCREEN(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_screen_get_showing_desktop(PyGObject *self)
{
    int ret;

    ret = netk_screen_get_showing_desktop(NETK_SCREEN(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_screen_toggle_showing_desktop(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show", NULL };
    int show;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkScreen.toggle_showing_desktop", kwlist, &show))
        return NULL;
    netk_screen_toggle_showing_desktop(NETK_SCREEN(self->obj), show);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_screen_move_viewport(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "x", "y", NULL };
    int x, y;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ii:NetkScreen.move_viewport", kwlist, &x, &y))
        return NULL;
    netk_screen_move_viewport(NETK_SCREEN(self->obj), x, y);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_screen_try_set_workspace_layout(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "current_token", "rows", "columns", NULL };
    int current_token, rows, columns, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "iii:NetkScreen.try_set_workspace_layout", kwlist, &current_token, &rows, &columns))
        return NULL;
    ret = netk_screen_try_set_workspace_layout(NETK_SCREEN(self->obj), current_token, rows, columns);
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_screen_release_workspace_layout(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "current_token", NULL };
    int current_token;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkScreen.release_workspace_layout", kwlist, &current_token))
        return NULL;
    netk_screen_release_workspace_layout(NETK_SCREEN(self->obj), current_token);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyNetkScreen_methods[] = {
    { "get_windows", (PyCFunction)_wrap_netk_screen_get_windows, METH_NOARGS },
    { "get_windows_stacked", (PyCFunction)_wrap_netk_screen_get_windows_stacked, METH_NOARGS },
    { "force_update", (PyCFunction)_wrap_netk_screen_force_update, METH_NOARGS },
    { "get_workspace_count", (PyCFunction)_wrap_netk_screen_get_workspace_count, METH_NOARGS },
    { "change_workspace_count", (PyCFunction)_wrap_netk_screen_change_workspace_count, METH_VARARGS|METH_KEYWORDS },
    { "net_wm_supports", (PyCFunction)_wrap_netk_screen_net_wm_supports, METH_VARARGS|METH_KEYWORDS },
    { "get_background_pixmap", (PyCFunction)_wrap_netk_screen_get_background_pixmap, METH_NOARGS },
    { "get_width", (PyCFunction)_wrap_netk_screen_get_width, METH_NOARGS },
    { "get_height", (PyCFunction)_wrap_netk_screen_get_height, METH_NOARGS },
    { "get_showing_desktop", (PyCFunction)_wrap_netk_screen_get_showing_desktop, METH_NOARGS },
    { "toggle_showing_desktop", (PyCFunction)_wrap_netk_screen_toggle_showing_desktop, METH_VARARGS|METH_KEYWORDS },
    { "move_viewport", (PyCFunction)_wrap_netk_screen_move_viewport, METH_VARARGS|METH_KEYWORDS },
    { "try_set_workspace_layout", (PyCFunction)_wrap_netk_screen_try_set_workspace_layout, METH_VARARGS|METH_KEYWORDS },
    { "release_workspace_layout", (PyCFunction)_wrap_netk_screen_release_workspace_layout, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkScreen_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "screen.Screen",			/* tp_name */
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
    _PyNetkScreen_methods,			/* tp_methods */
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
_wrap_netk_screen_get_default(PyObject *self)
{
    NetkScreen *ret;

    ret = netk_screen_get_default();
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_screen_get(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;
    NetkScreen *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:netk_screen_get", kwlist, &index))
        return NULL;
    ret = netk_screen_get(index);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_screen_get_for_root(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "root_window_id", NULL };
    PyObject *py_root_window_id = NULL;
    gulong root_window_id;
    NetkScreen *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:netk_screen_get_for_root", kwlist, &PyLong_Type, &py_root_window_id))
        return NULL;
    root_window_id = PyLong_AsUnsignedLong(py_root_window_id);
    ret = netk_screen_get_for_root(root_window_id);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyscreen_functions[] = {
    { "netk_screen_get_default", (PyCFunction)_wrap_netk_screen_get_default, METH_NOARGS },
    { "netk_screen_get", (PyCFunction)_wrap_netk_screen_get, METH_VARARGS|METH_KEYWORDS },
    { "netk_screen_get_for_root", (PyCFunction)_wrap_netk_screen_get_for_root, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyscreen_register_classes(PyObject *d)
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


#line 365 "screen.c"
    pygobject_register_class(d, "NetkScreen", NETK_TYPE_SCREEN, &PyNetkScreen_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
