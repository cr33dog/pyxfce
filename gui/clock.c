/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "clock.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/gui-enum-types.h>

#ifndef XFCE_TYPE_CLOCK
#define XFCE_TYPE_CLOCK (xfce_clock_get_type ())
#endif

#define XFCE_TYPE_CLOCK_MODE GUI_TYPE_CLOCK_MODE
#define XFCE_TYPE_CLOCK_LED_SIZE GUI_TYPE_CLOCK_LED_SIZE


#line 22 "clock.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceClock_Type;

#line 35 "clock.c"



/* ----------- XfceClock ----------- */

static int
_wrap_xfce_clock_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":clock.Clock.__init__", kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create %(typename)s object");
        return -1;
    }

    return 0;
}


static PyObject *
_wrap_xfce_clock_show_ampm(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show", NULL };
    int show;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceClock.show_ampm", kwlist, &show))
        return NULL;
    xfce_clock_show_ampm(XFCE_CLOCK(self->obj), show);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_ampm_toggle(PyGObject *self)
{
    xfce_clock_ampm_toggle(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_ampm_shown(PyGObject *self)
{
    int ret;

    ret = xfce_clock_ampm_shown(XFCE_CLOCK(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_clock_show_secs(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show", NULL };
    int show;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceClock.show_secs", kwlist, &show))
        return NULL;
    xfce_clock_show_secs(XFCE_CLOCK(self->obj), show);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_secs_toggle(PyGObject *self)
{
    xfce_clock_secs_toggle(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_secs_shown(PyGObject *self)
{
    int ret;

    ret = xfce_clock_secs_shown(XFCE_CLOCK(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_clock_show_military(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "show", NULL };
    int show;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "i:XfceClock.show_military", kwlist, &show))
        return NULL;
    xfce_clock_show_military(XFCE_CLOCK(self->obj), show);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_military_toggle(PyGObject *self)
{
    xfce_clock_military_toggle(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_military_shown(PyGObject *self)
{
    int ret;

    ret = xfce_clock_military_shown(XFCE_CLOCK(self->obj));
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_xfce_clock_set_interval(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "interval", NULL };
    PyObject *py_interval = NULL;
    guint interval = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfceClock.set_interval", kwlist, &py_interval))
        return NULL;
    if (py_interval) {
        if (PyLong_Check(py_interval))
            interval = PyLong_AsUnsignedLong(py_interval);
        else if (PyInt_Check(py_interval))
            interval = PyInt_AsLong(py_interval);
        else
            PyErr_SetString(PyExc_TypeError, "Parameter 'interval' must be an int or a long");
        if (PyErr_Occurred())
            return NULL;
    }
    xfce_clock_set_interval(XFCE_CLOCK(self->obj), interval);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_get_interval(PyGObject *self)
{
    guint ret;

    ret = xfce_clock_get_interval(XFCE_CLOCK(self->obj));
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_xfce_clock_set_led_size(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "size", NULL };
    XfceClockLedSize size;
    PyObject *py_size = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfceClock.set_led_size", kwlist, &py_size))
        return NULL;
    if (pyg_enum_get_value(XFCE_TYPE_CLOCK_LED_SIZE, py_size, (gint *)&size))
        return NULL;
    xfce_clock_set_led_size(XFCE_CLOCK(self->obj), size);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_get_led_size(PyGObject *self)
{
    gint ret;

    ret = xfce_clock_get_led_size(XFCE_CLOCK(self->obj));
    return pyg_enum_from_gtype(XFCE_TYPE_CLOCK_LED_SIZE, ret);
}

static PyObject *
_wrap_xfce_clock_suspend(PyGObject *self)
{
    xfce_clock_suspend(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_resume(PyGObject *self)
{
    xfce_clock_resume(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_set_mode(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "mode", NULL };
    XfceClockMode mode;
    PyObject *py_mode = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:XfceClock.set_mode", kwlist, &py_mode))
        return NULL;
    if (pyg_enum_get_value(XFCE_TYPE_CLOCK_MODE, py_mode, (gint *)&mode))
        return NULL;
    xfce_clock_set_mode(XFCE_CLOCK(self->obj), mode);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_toggle_mode(PyGObject *self)
{
    xfce_clock_toggle_mode(XFCE_CLOCK(self->obj));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_clock_get_mode(PyGObject *self)
{
    gint ret;

    ret = xfce_clock_get_mode(XFCE_CLOCK(self->obj));
    return pyg_enum_from_gtype(XFCE_TYPE_CLOCK_MODE, ret);
}

static PyMethodDef _PyXfceClock_methods[] = {
    { "show_ampm", (PyCFunction)_wrap_xfce_clock_show_ampm, METH_VARARGS|METH_KEYWORDS },
    { "ampm_toggle", (PyCFunction)_wrap_xfce_clock_ampm_toggle, METH_NOARGS },
    { "ampm_shown", (PyCFunction)_wrap_xfce_clock_ampm_shown, METH_NOARGS },
    { "show_secs", (PyCFunction)_wrap_xfce_clock_show_secs, METH_VARARGS|METH_KEYWORDS },
    { "secs_toggle", (PyCFunction)_wrap_xfce_clock_secs_toggle, METH_NOARGS },
    { "secs_shown", (PyCFunction)_wrap_xfce_clock_secs_shown, METH_NOARGS },
    { "show_military", (PyCFunction)_wrap_xfce_clock_show_military, METH_VARARGS|METH_KEYWORDS },
    { "military_toggle", (PyCFunction)_wrap_xfce_clock_military_toggle, METH_NOARGS },
    { "military_shown", (PyCFunction)_wrap_xfce_clock_military_shown, METH_NOARGS },
    { "set_interval", (PyCFunction)_wrap_xfce_clock_set_interval, METH_VARARGS|METH_KEYWORDS },
    { "get_interval", (PyCFunction)_wrap_xfce_clock_get_interval, METH_NOARGS },
    { "set_led_size", (PyCFunction)_wrap_xfce_clock_set_led_size, METH_VARARGS|METH_KEYWORDS },
    { "get_led_size", (PyCFunction)_wrap_xfce_clock_get_led_size, METH_NOARGS },
    { "suspend", (PyCFunction)_wrap_xfce_clock_suspend, METH_NOARGS },
    { "resume", (PyCFunction)_wrap_xfce_clock_resume, METH_NOARGS },
    { "set_mode", (PyCFunction)_wrap_xfce_clock_set_mode, METH_VARARGS|METH_KEYWORDS },
    { "toggle_mode", (PyCFunction)_wrap_xfce_clock_toggle_mode, METH_NOARGS },
    { "get_mode", (PyCFunction)_wrap_xfce_clock_get_mode, METH_NOARGS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceClock_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "clock.Clock",			/* tp_name */
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
    _PyXfceClock_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_clock_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyclock_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyclock_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "ClockMode", strip_prefix, XFCE_TYPE_CLOCK_MODE);
  pyg_enum_add(module, "ClockLedSize", strip_prefix, XFCE_TYPE_CLOCK_LED_SIZE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyclock_register_classes(PyObject *d)
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
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }


#line 384 "clock.c"
    pygobject_register_class(d, "XfceClock", XFCE_TYPE_CLOCK, &PyXfceClock_Type, Py_BuildValue("(O)", &PyGtkWidget_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_CLOCK);
}
