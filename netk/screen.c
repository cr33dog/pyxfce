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

#line 24 "screen.c"



/* ----------- NetkScreen ----------- */

static PyObject *
_wrap_netk_screen_get_workspace(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "workspace", NULL };
    int workspace;
    NetkWorkspace *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkScreen.get_workspace", kwlist, &workspace))
        return NULL;
    ret = netk_screen_get_workspace(NETK_SCREEN(self->obj), workspace);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_screen_get_active_workspace(PyGObject *self)
{
    NetkWorkspace *ret;

    ret = netk_screen_get_active_workspace(NETK_SCREEN(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_screen_get_active_window(PyGObject *self)
{
    NetkWindow *ret;

    ret = netk_screen_get_active_window(NETK_SCREEN(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

#line 27 "screen.override"
static PyObject *
_wrap_netk_screen_get_windows(PyGObject *self)
{
    GList *icon_list = NULL;
    PyObject *pywindow;
    PyObject *py_list;
    GList *tmp;

    if ((icon_list = netk_screen_get_windows(NETK_SCREEN(self->obj)))) {

        if ((py_list = PyList_New(0)) == NULL) {
            /*g_list_free(icon_list); no */
            return NULL;
        }
        for (tmp = icon_list; tmp != NULL; tmp = tmp->next) {
            pywindow = pygobject_new(G_OBJECT(tmp->data)); /* will g_object_ref and sink if applicable */

            if (pywindow == NULL) {
                /*g_list_free(icon_list); no */
                Py_DECREF(py_list);
                return NULL;
            }
            PyList_Append(py_list, pywindow);
            Py_DECREF(pywindow);
        }
        /*g_list_free(icon_list); no */
        return py_list;
    }
    if ((py_list = PyList_New(0)) == NULL) {
        /* g_list_free(icon_list); no */
        return NULL;
    }
    return py_list;
}
#line 99 "screen.c"


#line 63 "screen.override"
static PyObject *
_wrap_netk_screen_get_windows_stacked(PyGObject *self)
{
    GList *icon_list = NULL;
    PyObject *pywindow;
    PyObject *py_list;
    GList *tmp;

    if ((icon_list = netk_screen_get_windows_stacked(NETK_SCREEN(self->obj)))) {
        if ((py_list = PyList_New(0)) == NULL) {
            /* g_list_free(icon_list); no */
            return NULL;
        }
        for (tmp = icon_list; tmp != NULL; tmp = tmp->next) {
            pywindow = pygobject_new(G_OBJECT(tmp->data)); /* will g_object_ref and sink if applicable */

            if (pywindow == NULL) {
                /*g_list_free(icon_list); no */
                Py_DECREF(py_list);
                return NULL;
            }
            PyList_Append(py_list, pywindow);
            Py_DECREF(pywindow);
        }
        /*g_list_free(icon_list); no */
        return py_list;
    }
    if ((py_list = PyList_New(0)) == NULL) {
        /* g_list_free(icon_list); no */
        return NULL;
    }
    return py_list;
}
#line 136 "screen.c"


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

#line 98 "screen.override"
static PyObject *
_wrap_netk_screen_get_background_pixmap(PyGObject *self)
{
    gulong ret;
    GdkDrawable *drawable;
    PyObject *obj;

    ret = netk_screen_get_background_pixmap(NETK_SCREEN(self->obj));
    if (ret) {
       drawable = gdk_xid_table_lookup (ret);
       if (drawable) 
           g_object_ref (G_OBJECT (drawable));
       else
           drawable = gdk_pixmap_foreign_new (ret);

       obj = pygobject_new (G_OBJECT (drawable));
       if (drawable)
           g_object_unref (G_OBJECT (drawable));
       return obj;
    } else {
       Py_INCREF(Py_None);
       return Py_None;
    }
}
#line 208 "screen.c"


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

#line 124 "screen.override"
static PyObject *
_wrap_netk_screen_get_workspaces(PyGObject *self)
{
    PyObject *pyworkspace;
    PyObject *py_list;
    int cnt, i;

    cnt = netk_screen_get_workspace_count(NETK_SCREEN(self->obj));

    if ((py_list = PyList_New(0)) == NULL) {
        return NULL;
    }

    for(i = 0; i < cnt; i++) {
        pyworkspace = pygobject_new(G_OBJECT(netk_screen_get_workspace(NETK_SCREEN(self->obj), i))); /* will g_object_ref and sink if applicable */

        PyList_Append(py_list, pyworkspace);
        Py_DECREF(pyworkspace);
    }
    return py_list;
}
#line 312 "screen.c"


static PyMethodDef _PyNetkScreen_methods[] = {
    { "get_workspace", (PyCFunction)_wrap_netk_screen_get_workspace, METH_VARARGS|METH_KEYWORDS },
    { "get_active_workspace", (PyCFunction)_wrap_netk_screen_get_active_workspace, METH_NOARGS },
    { "get_active_window", (PyCFunction)_wrap_netk_screen_get_active_window, METH_NOARGS },
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
    { "get_workspaces", (PyCFunction)_wrap_netk_screen_get_workspaces, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkScreen_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "netk.Screen",			/* tp_name */
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

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:screen_get", kwlist, &index))
        return NULL;
    ret = netk_screen_get(index);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_screen_get_for_root(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "root_window_id", NULL };
    unsigned long root_window_id;
    NetkScreen *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "k:screen_get_for_root", kwlist, &root_window_id))
        return NULL;
    ret = netk_screen_get_for_root(root_window_id);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pyscreen_functions[] = {
    { "screen_get_default", (PyCFunction)_wrap_netk_screen_get_default, METH_NOARGS },
    { "screen_get", (PyCFunction)_wrap_netk_screen_get, METH_VARARGS|METH_KEYWORDS },
    { "screen_get_for_root", (PyCFunction)_wrap_netk_screen_get_for_root, METH_VARARGS|METH_KEYWORDS },
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


#line 453 "screen.c"
    pygobject_register_class(d, "NetkScreen", NETK_TYPE_SCREEN, &PyNetkScreen_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(NETK_TYPE_SCREEN);
}
