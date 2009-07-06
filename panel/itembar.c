/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "itembar.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/xfce-itembar.h>

extern PyTypeObject PyGtkWidget_Type;

#line 15 "itembar.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkContainer_Type;
#define PyGtkContainer_Type (*_PyGtkContainer_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceItembar_Type;

#line 30 "itembar.c"



/* ----------- XfceItembar ----------- */

static int
_wrap_xfce_itembar_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "orientation", NULL };
    GtkOrientation orientation;
    PyObject *py_orientation = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:XfceItembar.__init__", kwlist, &py_orientation))
        return -1;
    if (pyg_enum_get_value(GTK_TYPE_ORIENTATION, py_orientation, (gpointer)&orientation))
        return -1;
    self->obj = (GObject *)xfce_itembar_new(orientation);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceItembar object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfce_itembar_set_maximum_size(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    int size;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:XfceItembar.set_maximum_size", kwlist, &size))
        return NULL;
    
    xfce_itembar_set_maximum_size(XFCE_ITEMBAR(self->obj), size);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_set_allow_expand(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "allow", NULL };
    int allow;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:XfceItembar.set_allow_expand", kwlist, &allow))
        return NULL;
    
    xfce_itembar_set_allow_expand(XFCE_ITEMBAR(self->obj), allow);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_set_orientation(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "orientation", NULL };
    GtkOrientation orientation;
    PyObject *py_orientation = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:XfceItembar.set_orientation", kwlist, &py_orientation))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_ORIENTATION, py_orientation, (gpointer)&orientation))
        return NULL;
    
    xfce_itembar_set_orientation(XFCE_ITEMBAR(self->obj), orientation);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_get_orientation(PyGObject *self)
{
    gint ret;

    
    ret = xfce_itembar_get_orientation(XFCE_ITEMBAR(self->obj));
    
    return pyg_enum_from_gtype(GTK_TYPE_ORIENTATION, ret);
}

static PyObject *
_wrap_xfce_itembar_insert(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", "position", NULL };
    PyGObject *item;
    int position;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!i:XfceItembar.insert", kwlist, &PyGtkWidget_Type, &item, &position))
        return NULL;
    
    xfce_itembar_insert(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj), position);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_append(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", NULL };
    PyGObject *item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceItembar.append", kwlist, &PyGtkWidget_Type, &item))
        return NULL;
    
    xfce_itembar_append(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_prepend(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", NULL };
    PyGObject *item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceItembar.prepend", kwlist, &PyGtkWidget_Type, &item))
        return NULL;
    
    xfce_itembar_prepend(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_reorder_child(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", "position", NULL };
    PyGObject *item;
    int position;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!i:XfceItembar.reorder_child", kwlist, &PyGtkWidget_Type, &item, &position))
        return NULL;
    
    xfce_itembar_reorder_child(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj), position);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_set_child_expand(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", "expand", NULL };
    PyGObject *item;
    int expand;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!i:XfceItembar.set_child_expand", kwlist, &PyGtkWidget_Type, &item, &expand))
        return NULL;
    
    xfce_itembar_set_child_expand(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj), expand);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_get_child_expand(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", NULL };
    PyGObject *item;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceItembar.get_child_expand", kwlist, &PyGtkWidget_Type, &item))
        return NULL;
    
    ret = xfce_itembar_get_child_expand(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_itembar_get_n_items(PyGObject *self)
{
    int ret;

    
    ret = xfce_itembar_get_n_items(XFCE_ITEMBAR(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_xfce_itembar_get_item_index(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", NULL };
    PyGObject *item;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceItembar.get_item_index", kwlist, &PyGtkWidget_Type, &item))
        return NULL;
    
    ret = xfce_itembar_get_item_index(XFCE_ITEMBAR(self->obj), GTK_WIDGET(item->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_xfce_itembar_get_nth_item(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "n", NULL };
    int n;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:XfceItembar.get_nth_item", kwlist, &n))
        return NULL;
    
    ret = xfce_itembar_get_nth_item(XFCE_ITEMBAR(self->obj), n);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_itembar_raise_event_window(PyGObject *self)
{
    
    xfce_itembar_raise_event_window(XFCE_ITEMBAR(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_lower_event_window(PyGObject *self)
{
    
    xfce_itembar_lower_event_window(XFCE_ITEMBAR(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_itembar_event_window_is_raised(PyGObject *self)
{
    int ret;

    
    ret = xfce_itembar_event_window_is_raised(XFCE_ITEMBAR(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_itembar_get_item_at_point(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "x", "y", NULL };
    int x, y;
    GtkWidget *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ii:XfceItembar.get_item_at_point", kwlist, &x, &y))
        return NULL;
    
    ret = xfce_itembar_get_item_at_point(XFCE_ITEMBAR(self->obj), x, y);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_xfce_itembar_get_drop_index(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "x", "y", NULL };
    int x, y, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ii:XfceItembar.get_drop_index", kwlist, &x, &y))
        return NULL;
    
    ret = xfce_itembar_get_drop_index(XFCE_ITEMBAR(self->obj), x, y);
    
    return PyInt_FromLong(ret);
}

static const PyMethodDef _PyXfceItembar_methods[] = {
    { "set_maximum_size", (PyCFunction)_wrap_xfce_itembar_set_maximum_size, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_allow_expand", (PyCFunction)_wrap_xfce_itembar_set_allow_expand, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_orientation", (PyCFunction)_wrap_xfce_itembar_set_orientation, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_orientation", (PyCFunction)_wrap_xfce_itembar_get_orientation, METH_NOARGS,
      NULL },
    { "insert", (PyCFunction)_wrap_xfce_itembar_insert, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "append", (PyCFunction)_wrap_xfce_itembar_append, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "prepend", (PyCFunction)_wrap_xfce_itembar_prepend, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "reorder_child", (PyCFunction)_wrap_xfce_itembar_reorder_child, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_child_expand", (PyCFunction)_wrap_xfce_itembar_set_child_expand, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_child_expand", (PyCFunction)_wrap_xfce_itembar_get_child_expand, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_n_items", (PyCFunction)_wrap_xfce_itembar_get_n_items, METH_NOARGS,
      NULL },
    { "get_item_index", (PyCFunction)_wrap_xfce_itembar_get_item_index, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_nth_item", (PyCFunction)_wrap_xfce_itembar_get_nth_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "raise_event_window", (PyCFunction)_wrap_xfce_itembar_raise_event_window, METH_NOARGS,
      NULL },
    { "lower_event_window", (PyCFunction)_wrap_xfce_itembar_lower_event_window, METH_NOARGS,
      NULL },
    { "event_window_is_raised", (PyCFunction)_wrap_xfce_itembar_event_window_is_raised, METH_NOARGS,
      NULL },
    { "get_item_at_point", (PyCFunction)_wrap_xfce_itembar_get_item_at_point, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_drop_index", (PyCFunction)_wrap_xfce_itembar_get_drop_index, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceItembar_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "itembar.Itembar",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceItembar_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_itembar_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

const PyMethodDef pyitembar_functions[] = {
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyitembar_register_classes(PyObject *d)
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


#line 445 "itembar.c"
    pygobject_register_class(d, "XfceItembar", XFCE_TYPE_ITEMBAR, &PyXfceItembar_Type, Py_BuildValue("(O)", &PyGtkContainer_Type));
}
