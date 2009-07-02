/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "tasklist.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

extern PyTypeObject PyNetkScreen_Type;

#line 15 "tasklist.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkContainer_Type;
#define PyGtkContainer_Type (*_PyGtkContainer_Type)
static PyTypeObject *_PyNetkScreen_Type;
#define PyNetkScreen_Type (*_PyNetkScreen_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyNetkTasklist_Type;

#line 30 "tasklist.c"



/* ----------- NetkTasklist ----------- */

static int
_wrap_netk_tasklist_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:NetkTasklist.__init__", kwlist, &PyNetkScreen_Type, &screen))
        return -1;
    self->obj = (GObject *)netk_tasklist_new(NETK_SCREEN(screen->obj));

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create NetkTasklist object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_netk_tasklist_set_screen(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:NetkTasklist.set_screen", kwlist, &PyNetkScreen_Type, &screen))
        return NULL;
    
    netk_tasklist_set_screen(NETK_TASKLIST(self->obj), NETK_SCREEN(screen->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

#line 29 "tasklist.override"
static PyObject *
_wrap_netk_tasklist_get_size_hint_list(PyGObject *self)
{
    int n_items;
    PyObject *py_tuple;
    int i;

    const int *arr;

    arr = netk_tasklist_get_size_hint_list (NETK_TASKLIST(self->obj), &n_items);

    py_tuple = PyTuple_New(n_items);

    for (i = 0; i < n_items; i++)
	PyTuple_SetItem(py_tuple, i, PyInt_FromLong( (long)arr[i]));

    return py_tuple;
}
#line 88 "tasklist.c"


static PyObject *
_wrap_netk_tasklist_set_grouping(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "grouping", NULL };
    NetkTasklistGroupingType grouping;
    PyObject *py_grouping = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:NetkTasklist.set_grouping", kwlist, &py_grouping))
        return NULL;
    if (pyg_enum_get_value(NETK_TYPE_TASKLIST_GROUPING_TYPE, py_grouping, (gpointer)&grouping))
        return NULL;
    
    netk_tasklist_set_grouping(NETK_TASKLIST(self->obj), grouping);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_switch_workspace_on_unminimize(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "switch_workspace_on_unminimize", NULL };
    int switch_workspace_on_unminimize;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_switch_workspace_on_unminimize", kwlist, &switch_workspace_on_unminimize))
        return NULL;
    
    netk_tasklist_set_switch_workspace_on_unminimize(NETK_TASKLIST(self->obj), switch_workspace_on_unminimize);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_grouping_limit(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "limit", NULL };
    int limit;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_grouping_limit", kwlist, &limit))
        return NULL;
    
    netk_tasklist_set_grouping_limit(NETK_TASKLIST(self->obj), limit);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_include_all_workspaces(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "include_all_workspaces", NULL };
    int include_all_workspaces;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_include_all_workspaces", kwlist, &include_all_workspaces))
        return NULL;
    
    netk_tasklist_set_include_all_workspaces(NETK_TASKLIST(self->obj), include_all_workspaces);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_show_label(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show_label", NULL };
    int show_label;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_show_label", kwlist, &show_label))
        return NULL;
    
    netk_tasklist_set_show_label(NETK_TASKLIST(self->obj), show_label);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_set_minimum_width(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    int size;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_minimum_width", kwlist, &size))
        return NULL;
    
    netk_tasklist_set_minimum_width(NETK_TASKLIST(self->obj), size);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_get_minimum_width(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_minimum_width(NETK_TASKLIST(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_tasklist_set_minimum_height(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    int size;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:NetkTasklist.set_minimum_height", kwlist, &size))
        return NULL;
    
    netk_tasklist_set_minimum_height(NETK_TASKLIST(self->obj), size);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_get_minimum_height(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_minimum_height(NETK_TASKLIST(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_tasklist_set_button_relief(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "relief", NULL };
    GtkReliefStyle relief;
    PyObject *py_relief = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:NetkTasklist.set_button_relief", kwlist, &py_relief))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_RELIEF_STYLE, py_relief, (gpointer)&relief))
        return NULL;
    
    netk_tasklist_set_button_relief(NETK_TASKLIST(self->obj), relief);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tasklist_get_screen(PyGObject *self)
{
    NetkScreen *ret;

    
    ret = netk_tasklist_get_screen(NETK_TASKLIST(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_netk_tasklist_get_grouping(PyGObject *self)
{
    gint ret;

    
    ret = netk_tasklist_get_grouping(NETK_TASKLIST(self->obj));
    
    return pyg_enum_from_gtype(NETK_TYPE_TASKLIST_GROUPING_TYPE, ret);
}

static PyObject *
_wrap_netk_tasklist_get_switch_workspace_on_unminimize(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_switch_workspace_on_unminimize(NETK_TASKLIST(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_tasklist_get_grouping_limit(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_grouping_limit(NETK_TASKLIST(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_netk_tasklist_get_include_all_workspaces(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_include_all_workspaces(NETK_TASKLIST(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_tasklist_get_show_label(PyGObject *self)
{
    int ret;

    
    ret = netk_tasklist_get_show_label(NETK_TASKLIST(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_netk_tasklist_get_button_relief(PyGObject *self)
{
    gint ret;

    
    ret = netk_tasklist_get_button_relief(NETK_TASKLIST(self->obj));
    
    return pyg_enum_from_gtype(GTK_TYPE_RELIEF_STYLE, ret);
}

static const PyMethodDef _PyNetkTasklist_methods[] = {
    { "set_screen", (PyCFunction)_wrap_netk_tasklist_set_screen, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_size_hint_list", (PyCFunction)_wrap_netk_tasklist_get_size_hint_list, METH_NOARGS,
      NULL },
    { "set_grouping", (PyCFunction)_wrap_netk_tasklist_set_grouping, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_switch_workspace_on_unminimize", (PyCFunction)_wrap_netk_tasklist_set_switch_workspace_on_unminimize, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_grouping_limit", (PyCFunction)_wrap_netk_tasklist_set_grouping_limit, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_include_all_workspaces", (PyCFunction)_wrap_netk_tasklist_set_include_all_workspaces, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_show_label", (PyCFunction)_wrap_netk_tasklist_set_show_label, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_minimum_width", (PyCFunction)_wrap_netk_tasklist_set_minimum_width, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_minimum_width", (PyCFunction)_wrap_netk_tasklist_get_minimum_width, METH_NOARGS,
      NULL },
    { "set_minimum_height", (PyCFunction)_wrap_netk_tasklist_set_minimum_height, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_minimum_height", (PyCFunction)_wrap_netk_tasklist_get_minimum_height, METH_NOARGS,
      NULL },
    { "set_button_relief", (PyCFunction)_wrap_netk_tasklist_set_button_relief, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_screen", (PyCFunction)_wrap_netk_tasklist_get_screen, METH_NOARGS,
      NULL },
    { "get_grouping", (PyCFunction)_wrap_netk_tasklist_get_grouping, METH_NOARGS,
      NULL },
    { "get_switch_workspace_on_unminimize", (PyCFunction)_wrap_netk_tasklist_get_switch_workspace_on_unminimize, METH_NOARGS,
      NULL },
    { "get_grouping_limit", (PyCFunction)_wrap_netk_tasklist_get_grouping_limit, METH_NOARGS,
      NULL },
    { "get_include_all_workspaces", (PyCFunction)_wrap_netk_tasklist_get_include_all_workspaces, METH_NOARGS,
      NULL },
    { "get_show_label", (PyCFunction)_wrap_netk_tasklist_get_show_label, METH_NOARGS,
      NULL },
    { "get_button_relief", (PyCFunction)_wrap_netk_tasklist_get_button_relief, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyNetkTasklist_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "tasklist.Tasklist",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyNetkTasklist_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_netk_tasklist_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

const PyMethodDef pytasklist_functions[] = {
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pytasklist_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "TasklistGroupingType", strip_prefix, NETK_TYPE_TASKLIST_GROUPING_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pytasklist_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("screen")) != NULL) {
        _PyNetkScreen_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Screen");
        if (_PyNetkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from screen");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import screen");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkContainer_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Container");
        if (_PyGtkContainer_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Container from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 474 "tasklist.c"
    pygobject_register_class(d, "NetkTasklist", NETK_TYPE_TASKLIST, &PyNetkTasklist_Type, Py_BuildValue("(O)", &PyGtkContainer_Type));
}
