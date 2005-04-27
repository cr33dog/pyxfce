/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "window.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

extern PyTypeObject PyNetkWorkspace_Type;
extern PyTypeObject NetkApplication_Type;
extern PyTypeObject NetkClassGroup_Type;

#line 17 "window.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkWindow_Type;


/* ----------- NetkWindow ----------- */

static PyObject *
_wrap_netk_window_get_screen(PyGObject *self)
{
    NetkScreen *ret;

    ret = netk_window_get_screen(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_get_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_name(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_icon_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_icon_name(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_application(PyGObject *self)
{
    NetkApplication *ret;

    ret = netk_window_get_application(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_get_group_leader(PyGObject *self)
{
    gulong ret;

    ret = netk_window_get_group_leader(NETK_WINDOW(self->obj));
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_netk_window_get_xid(PyGObject *self)
{
    gulong ret;

    ret = netk_window_get_xid(NETK_WINDOW(self->obj));
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_netk_window_get_class_group(PyGObject *self)
{
    NetkClassGroup *ret;

    ret = netk_window_get_class_group(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_get_session_id(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_session_id(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_session_id_utf8(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_session_id_utf8(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_pid(PyGObject *self)
{
    int ret;

    ret = netk_window_get_pid(NETK_WINDOW(self->obj));
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_window_get_window_type(PyGObject *self)
{
    gint ret;

    ret = netk_window_get_window_type(NETK_WINDOW(self->obj));
    return pyg_enum_from_gtype(NETK_TYPE_WINDOW_TYPE, ret);
}

static PyObject *
_wrap_netk_window_get_resource_class(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_resource_class(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_resource_name(PyGObject *self)
{
    const gchar *ret;

    ret = netk_window_get_resource_name(NETK_WINDOW(self->obj));
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_is_minimized(PyGObject *self)
{
    int ret;

    ret = netk_window_is_minimized(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_maximized_horizontally(PyGObject *self)
{
    int ret;

    ret = netk_window_is_maximized_horizontally(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_maximized_vertically(PyGObject *self)
{
    int ret;

    ret = netk_window_is_maximized_vertically(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_maximized(PyGObject *self)
{
    int ret;

    ret = netk_window_is_maximized(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_shaded(PyGObject *self)
{
    int ret;

    ret = netk_window_is_shaded(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_skip_pager(PyGObject *self)
{
    int ret;

    ret = netk_window_is_skip_pager(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_skip_tasklist(PyGObject *self)
{
    int ret;

    ret = netk_window_is_skip_tasklist(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_sticky(PyGObject *self)
{
    int ret;

    ret = netk_window_is_sticky(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_set_skip_pager(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "skip", NULL };
    int skip;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkWindow.set_skip_pager", kwlist, &skip))
        return NULL;
    netk_window_set_skip_pager(NETK_WINDOW(self->obj), skip);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_set_skip_tasklist(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "skip", NULL };
    int skip;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:NetkWindow.set_skip_tasklist", kwlist, &skip))
        return NULL;
    netk_window_set_skip_tasklist(NETK_WINDOW(self->obj), skip);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_close(PyGObject *self)
{
    netk_window_close(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_minimize(PyGObject *self)
{
    netk_window_minimize(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unminimize(PyGObject *self)
{
    netk_window_unminimize(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_maximize(PyGObject *self)
{
    netk_window_maximize(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unmaximize(PyGObject *self)
{
    netk_window_unmaximize(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_maximize_horizontally(PyGObject *self)
{
    netk_window_maximize_horizontally(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unmaximize_horizontally(PyGObject *self)
{
    netk_window_unmaximize_horizontally(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_maximize_vertically(PyGObject *self)
{
    netk_window_maximize_vertically(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unmaximize_vertically(PyGObject *self)
{
    netk_window_unmaximize_vertically(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_shade(PyGObject *self)
{
    netk_window_shade(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unshade(PyGObject *self)
{
    netk_window_unshade(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_stick(PyGObject *self)
{
    netk_window_stick(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unstick(PyGObject *self)
{
    netk_window_unstick(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_keyboard_move(PyGObject *self)
{
    netk_window_keyboard_move(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_keyboard_size(PyGObject *self)
{
    netk_window_keyboard_size(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_workspace(PyGObject *self)
{
    NetkWorkspace *ret;

    ret = netk_window_get_workspace(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_move_to_workspace(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "space", NULL };
    PyGObject *space;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkWindow.move_to_workspace", kwlist, &PyNetkWorkspace_Type, &space))
        return NULL;
    netk_window_move_to_workspace(NETK_WINDOW(self->obj), NETK_WORKSPACE(space->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_is_pinned(PyGObject *self)
{
    int ret;

    ret = netk_window_is_pinned(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_pin(PyGObject *self)
{
    netk_window_pin(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_unpin(PyGObject *self)
{
    netk_window_unpin(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_activate(PyGObject *self)
{
    netk_window_activate(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_is_active(PyGObject *self)
{
    int ret;

    ret = netk_window_is_active(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_activate_transient(PyGObject *self)
{
    netk_window_activate_transient(NETK_WINDOW(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_icon(PyGObject *self)
{
    GdkPixbuf *ret;

    ret = netk_window_get_icon(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_get_mini_icon(PyGObject *self)
{
    GdkPixbuf *ret;

    ret = netk_window_get_mini_icon(NETK_WINDOW(self->obj));
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_window_get_icon_is_fallback(PyGObject *self)
{
    int ret;

    ret = netk_window_get_icon_is_fallback(NETK_WINDOW(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_set_icon_geometry(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "x", "y", "width", "height", NULL };
    int x, y, width, height;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "iiii:NetkWindow.set_icon_geometry", kwlist, &x, &y, &width, &height))
        return NULL;
    netk_window_set_icon_geometry(NETK_WINDOW(self->obj), x, y, width, height);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_window_get_actions(PyGObject *self)
{
    guint ret;

    ret = netk_window_get_actions(NETK_WINDOW(self->obj));
    return pyg_flags_from_gtype(NETK_TYPE_WINDOW_ACTIONS, ret);
}

static PyObject *
_wrap_netk_window_get_state(PyGObject *self)
{
    guint ret;

    ret = netk_window_get_state(NETK_WINDOW(self->obj));
    return pyg_flags_from_gtype(NETK_TYPE_WINDOW_STATE, ret);
}

#line 34 "window.override"
static PyObject *
_wrap_netk_window_get_geometry(PyGObject *self)
{
    gint x, y, width, height, depth;

    netk_window_get_geometry(NETK_WINDOW(self->obj), &x, &y, &width, &height);
    return Py_BuildValue("(iiiii)", x, y, width, height, depth);
}
#line 542 "window.c"


static PyObject *
_wrap_netk_window_is_visible_on_workspace(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "workspace", NULL };
    PyGObject *workspace;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkWindow.is_visible_on_workspace", kwlist, &PyNetkWorkspace_Type, &workspace))
        return NULL;
    ret = netk_window_is_visible_on_workspace(NETK_WINDOW(self->obj), NETK_WORKSPACE(workspace->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_on_workspace(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "workspace", NULL };
    PyGObject *workspace;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkWindow.is_on_workspace", kwlist, &PyNetkWorkspace_Type, &workspace))
        return NULL;
    ret = netk_window_is_on_workspace(NETK_WINDOW(self->obj), NETK_WORKSPACE(workspace->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_window_is_in_viewport(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "workspace", NULL };
    PyGObject *workspace;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkWindow.is_in_viewport", kwlist, &PyNetkWorkspace_Type, &workspace))
        return NULL;
    ret = netk_window_is_in_viewport(NETK_WINDOW(self->obj), NETK_WORKSPACE(workspace->obj));
    return PyBool_FromLong(ret);

}

static PyMethodDef _PyNetkWindow_methods[] = {
    { "get_screen", (PyCFunction)_wrap_netk_window_get_screen, METH_NOARGS },
    { "get_name", (PyCFunction)_wrap_netk_window_get_name, METH_NOARGS },
    { "get_icon_name", (PyCFunction)_wrap_netk_window_get_icon_name, METH_NOARGS },
    { "get_application", (PyCFunction)_wrap_netk_window_get_application, METH_NOARGS },
    { "get_group_leader", (PyCFunction)_wrap_netk_window_get_group_leader, METH_NOARGS },
    { "get_xid", (PyCFunction)_wrap_netk_window_get_xid, METH_NOARGS },
    { "get_class_group", (PyCFunction)_wrap_netk_window_get_class_group, METH_NOARGS },
    { "get_session_id", (PyCFunction)_wrap_netk_window_get_session_id, METH_NOARGS },
    { "get_session_id_utf8", (PyCFunction)_wrap_netk_window_get_session_id_utf8, METH_NOARGS },
    { "get_pid", (PyCFunction)_wrap_netk_window_get_pid, METH_NOARGS },
    { "get_window_type", (PyCFunction)_wrap_netk_window_get_window_type, METH_NOARGS },
    { "get_resource_class", (PyCFunction)_wrap_netk_window_get_resource_class, METH_NOARGS },
    { "get_resource_name", (PyCFunction)_wrap_netk_window_get_resource_name, METH_NOARGS },
    { "is_minimized", (PyCFunction)_wrap_netk_window_is_minimized, METH_NOARGS },
    { "is_maximized_horizontally", (PyCFunction)_wrap_netk_window_is_maximized_horizontally, METH_NOARGS },
    { "is_maximized_vertically", (PyCFunction)_wrap_netk_window_is_maximized_vertically, METH_NOARGS },
    { "is_maximized", (PyCFunction)_wrap_netk_window_is_maximized, METH_NOARGS },
    { "is_shaded", (PyCFunction)_wrap_netk_window_is_shaded, METH_NOARGS },
    { "is_skip_pager", (PyCFunction)_wrap_netk_window_is_skip_pager, METH_NOARGS },
    { "is_skip_tasklist", (PyCFunction)_wrap_netk_window_is_skip_tasklist, METH_NOARGS },
    { "is_sticky", (PyCFunction)_wrap_netk_window_is_sticky, METH_NOARGS },
    { "set_skip_pager", (PyCFunction)_wrap_netk_window_set_skip_pager, METH_VARARGS|METH_KEYWORDS },
    { "set_skip_tasklist", (PyCFunction)_wrap_netk_window_set_skip_tasklist, METH_VARARGS|METH_KEYWORDS },
    { "close", (PyCFunction)_wrap_netk_window_close, METH_NOARGS },
    { "minimize", (PyCFunction)_wrap_netk_window_minimize, METH_NOARGS },
    { "unminimize", (PyCFunction)_wrap_netk_window_unminimize, METH_NOARGS },
    { "maximize", (PyCFunction)_wrap_netk_window_maximize, METH_NOARGS },
    { "unmaximize", (PyCFunction)_wrap_netk_window_unmaximize, METH_NOARGS },
    { "maximize_horizontally", (PyCFunction)_wrap_netk_window_maximize_horizontally, METH_NOARGS },
    { "unmaximize_horizontally", (PyCFunction)_wrap_netk_window_unmaximize_horizontally, METH_NOARGS },
    { "maximize_vertically", (PyCFunction)_wrap_netk_window_maximize_vertically, METH_NOARGS },
    { "unmaximize_vertically", (PyCFunction)_wrap_netk_window_unmaximize_vertically, METH_NOARGS },
    { "shade", (PyCFunction)_wrap_netk_window_shade, METH_NOARGS },
    { "unshade", (PyCFunction)_wrap_netk_window_unshade, METH_NOARGS },
    { "stick", (PyCFunction)_wrap_netk_window_stick, METH_NOARGS },
    { "unstick", (PyCFunction)_wrap_netk_window_unstick, METH_NOARGS },
    { "keyboard_move", (PyCFunction)_wrap_netk_window_keyboard_move, METH_NOARGS },
    { "keyboard_size", (PyCFunction)_wrap_netk_window_keyboard_size, METH_NOARGS },
    { "get_workspace", (PyCFunction)_wrap_netk_window_get_workspace, METH_NOARGS },
    { "move_to_workspace", (PyCFunction)_wrap_netk_window_move_to_workspace, METH_VARARGS|METH_KEYWORDS },
    { "is_pinned", (PyCFunction)_wrap_netk_window_is_pinned, METH_NOARGS },
    { "pin", (PyCFunction)_wrap_netk_window_pin, METH_NOARGS },
    { "unpin", (PyCFunction)_wrap_netk_window_unpin, METH_NOARGS },
    { "activate", (PyCFunction)_wrap_netk_window_activate, METH_NOARGS },
    { "is_active", (PyCFunction)_wrap_netk_window_is_active, METH_NOARGS },
    { "activate_transient", (PyCFunction)_wrap_netk_window_activate_transient, METH_NOARGS },
    { "get_icon", (PyCFunction)_wrap_netk_window_get_icon, METH_NOARGS },
    { "get_mini_icon", (PyCFunction)_wrap_netk_window_get_mini_icon, METH_NOARGS },
    { "get_icon_is_fallback", (PyCFunction)_wrap_netk_window_get_icon_is_fallback, METH_NOARGS },
    { "set_icon_geometry", (PyCFunction)_wrap_netk_window_set_icon_geometry, METH_VARARGS|METH_KEYWORDS },
    { "get_actions", (PyCFunction)_wrap_netk_window_get_actions, METH_NOARGS },
    { "get_state", (PyCFunction)_wrap_netk_window_get_state, METH_NOARGS },
    { "get_geometry", (PyCFunction)_wrap_netk_window_get_geometry, METH_NOARGS },
    { "is_visible_on_workspace", (PyCFunction)_wrap_netk_window_is_visible_on_workspace, METH_VARARGS|METH_KEYWORDS },
    { "is_on_workspace", (PyCFunction)_wrap_netk_window_is_on_workspace, METH_VARARGS|METH_KEYWORDS },
    { "is_in_viewport", (PyCFunction)_wrap_netk_window_is_in_viewport, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyNetkWindow_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "window.Window",			/* tp_name */
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
    _PyNetkWindow_methods,			/* tp_methods */
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
_wrap_netk_window_get(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "xwindow", NULL };
    PyObject *py_xwindow = NULL;
    gulong xwindow;
    NetkWindow *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!:netk_window_get", kwlist, &PyLong_Type, &py_xwindow))
        return NULL;
    xwindow = PyLong_AsUnsignedLong(py_xwindow);
    ret = netk_window_get(xwindow);
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

PyMethodDef pywindow_functions[] = {
    { "netk_window_get", (PyCFunction)_wrap_netk_window_get, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pywindow_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_flags_add(module, "WindowState", strip_prefix, NETK_TYPE_WINDOW_STATE);
  pyg_flags_add(module, "WindowActions", strip_prefix, NETK_TYPE_WINDOW_ACTIONS);
  pyg_enum_add(module, "WindowType", strip_prefix, NETK_TYPE_WINDOW_TYPE);

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


#line 767 "window.c"
    pygobject_register_class(d, "NetkWindow", NETK_TYPE_WINDOW, &PyNetkWindow_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
