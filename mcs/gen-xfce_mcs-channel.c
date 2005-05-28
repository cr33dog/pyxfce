/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "xfce_mcs-channel.override"
#include <Python.h>
#include "pygobject.h"
#include <gtk/gtk.h>
#include "xfce-mcs-channel.h"

#line 14 "xfce_mcs-channel.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceMcsChannel_Type;


/* ----------- XfceMcsChannel ----------- */

static int
_wrap_xfce_mcs_channel_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.__init__", kwlist, &name))
        return -1;
    self->obj = (GObject *)xfce_mcs_channel_new(name);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create XfceMcsChannel object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

static PyObject *
_wrap_xfce_mcs_channel_get_channel_name(PyGObject *self)
{
    gchar *ret;

    ret = xfce_mcs_channel_get_channel_name(XFCE_MCS_CHANNEL(self->obj));
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_setting_changed(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.setting_changed", kwlist, &name))
        return NULL;
    xfce_mcs_channel_setting_changed(XFCE_MCS_CHANNEL(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_setting_deleted(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.setting_deleted", kwlist, &name))
        return NULL;
    xfce_mcs_channel_setting_deleted(XFCE_MCS_CHANNEL(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_setting_added(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.setting_added", kwlist, &name))
        return NULL;
    xfce_mcs_channel_setting_added(XFCE_MCS_CHANNEL(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_get_setting(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.get_setting", kwlist, &name))
        return NULL;
    ret = xfce_mcs_channel_get_setting(XFCE_MCS_CHANNEL(self->obj), name);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_get_setting_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.get_setting_string", kwlist, &name))
        return NULL;
    ret = xfce_mcs_channel_get_setting_string(XFCE_MCS_CHANNEL(self->obj), name);
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

#line 52 "xfce_mcs-channel.override"
static PyObject *_wrap_xfce_mcs_channel_get_setting_color(PyGObject *self, PyObject *args, PyObject *kwargs)
{
	static char *kwlist[] = { "name", NULL };
	char const *name;
	PyObject*	t;

	McsColor color;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.get_setting_color", kwlist, &name))
		return NULL;

	if (xfce_mcs_channel_get_setting_color((XfceMcsChannel*)self->obj, name, &color)) {
		t = PyTuple_New (4);
		PyTuple_SET_ITEM (t, 0, PyInt_FromLong(color.red));
		PyTuple_SET_ITEM (t, 0, PyInt_FromLong(color.green));
		PyTuple_SET_ITEM (t, 0, PyInt_FromLong(color.blue));
		PyTuple_SET_ITEM (t, 0, PyInt_FromLong(color.alpha));
		return t;
	}

	Py_INCREF(Py_None);
	return Py_None;
}
#line 162 "xfce_mcs-channel.c"


#line 77 "xfce_mcs-channel.override"
static PyObject *_wrap_xfce_mcs_channel_get_setting_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
	static char *kwlist[] = { "name", NULL };
	char const *name;
	int res;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s(iii):XfceMcsChannel.get_setting_int", kwlist, 
		&name)
	)
		return NULL;

	if (xfce_mcs_channel_get_setting_int ((XfceMcsChannel*)self->obj, name, &res)) {
		return PyInt_FromLong (res);
	}

	Py_INCREF(Py_None);
	return Py_None;
}
#line 184 "xfce_mcs-channel.c"


static PyObject *
_wrap_xfce_mcs_channel_set_setting(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "value", NULL };
    char *name, *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:XfceMcsChannel.set_setting", kwlist, &name, &value))
        return NULL;
    xfce_mcs_channel_set_setting(XFCE_MCS_CHANNEL(self->obj), name, value);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_set_setting_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "value", NULL };
    char *name, *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss:XfceMcsChannel.set_setting_string", kwlist, &name, &value))
        return NULL;
    xfce_mcs_channel_set_setting_string(XFCE_MCS_CHANNEL(self->obj), name, value);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_set_setting_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "value", NULL };
    char *name;
    int value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "si:XfceMcsChannel.set_setting_int", kwlist, &name, &value))
        return NULL;
    xfce_mcs_channel_set_setting_int(XFCE_MCS_CHANNEL(self->obj), name, value);
    Py_INCREF(Py_None);
    return Py_None;
}

#line 26 "xfce_mcs-channel.override"
static PyObject *_wrap_xfce_mcs_channel_set_setting_color(PyGObject *self, PyObject *args, PyObject *kwargs)
{
	static char *kwlist[] = { "name", "color", NULL };
	char const *name;

	long red;
	long green;
	long blue;
	long alpha;
	McsColor color;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s(iii):XfceMcsChannel.set_setting_color", kwlist, 
		&name, &red, &green, &blue, &alpha)
	)
		return NULL;

	color.red = (guint16) red;
	color.green = (guint16) green;
	color.blue = (guint16) blue;
	xfce_mcs_channel_set_setting_color((XfceMcsChannel*)self->obj, name, &color);

	Py_INCREF(Py_None);
	return Py_None;
}
#line 252 "xfce_mcs-channel.c"


static PyObject *
_wrap_xfce_mcs_channel_delete_setting(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.delete_setting", kwlist, &name))
        return NULL;
    xfce_mcs_channel_delete_setting(XFCE_MCS_CHANNEL(self->obj), name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_add_channel_from_file(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", NULL };
    char *filename;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.add_channel_from_file", kwlist, &filename))
        return NULL;
    xfce_mcs_channel_add_channel_from_file(XFCE_MCS_CHANNEL(self->obj), filename);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_mcs_channel_save_channel_to_file(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", NULL };
    char *filename;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:XfceMcsChannel.save_channel_to_file", kwlist, &filename))
        return NULL;
    xfce_mcs_channel_save_channel_to_file(XFCE_MCS_CHANNEL(self->obj), filename);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef _PyXfceMcsChannel_methods[] = {
    { "get_channel_name", (PyCFunction)_wrap_xfce_mcs_channel_get_channel_name, METH_NOARGS },
    { "setting_changed", (PyCFunction)_wrap_xfce_mcs_channel_setting_changed, METH_VARARGS|METH_KEYWORDS },
    { "setting_deleted", (PyCFunction)_wrap_xfce_mcs_channel_setting_deleted, METH_VARARGS|METH_KEYWORDS },
    { "setting_added", (PyCFunction)_wrap_xfce_mcs_channel_setting_added, METH_VARARGS|METH_KEYWORDS },
    { "get_setting", (PyCFunction)_wrap_xfce_mcs_channel_get_setting, METH_VARARGS|METH_KEYWORDS },
    { "get_setting_string", (PyCFunction)_wrap_xfce_mcs_channel_get_setting_string, METH_VARARGS|METH_KEYWORDS },
    { "get_setting_color", (PyCFunction)_wrap_xfce_mcs_channel_get_setting_color, METH_VARARGS|METH_KEYWORDS },
    { "get_setting_int", (PyCFunction)_wrap_xfce_mcs_channel_get_setting_int, METH_VARARGS|METH_KEYWORDS },
    { "set_setting", (PyCFunction)_wrap_xfce_mcs_channel_set_setting, METH_VARARGS|METH_KEYWORDS },
    { "set_setting_string", (PyCFunction)_wrap_xfce_mcs_channel_set_setting_string, METH_VARARGS|METH_KEYWORDS },
    { "set_setting_int", (PyCFunction)_wrap_xfce_mcs_channel_set_setting_int, METH_VARARGS|METH_KEYWORDS },
    { "set_setting_color", (PyCFunction)_wrap_xfce_mcs_channel_set_setting_color, METH_VARARGS|METH_KEYWORDS },
    { "delete_setting", (PyCFunction)_wrap_xfce_mcs_channel_delete_setting, METH_VARARGS|METH_KEYWORDS },
    { "add_channel_from_file", (PyCFunction)_wrap_xfce_mcs_channel_add_channel_from_file, METH_VARARGS|METH_KEYWORDS },
    { "save_channel_to_file", (PyCFunction)_wrap_xfce_mcs_channel_save_channel_to_file, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

PyTypeObject PyXfceMcsChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "xfce4.mcs.Channel",			/* tp_name */
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
    _PyXfceMcsChannel_methods,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_mcs_channel_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyxfce_mcs_channel_functions[] = {
    { NULL, NULL, 0 }
};


/* ----------- enums and flags ----------- */

void
pyxfce_mcs_channel_add_constants(PyObject *module, const gchar *strip_prefix)
{
  pyg_enum_add(module, "McsChannelSide", strip_prefix, XFCE_TYPE_MCS_CHANNEL_SIDE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyxfce_mcs_channel_register_classes(PyObject *d)
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


#line 400 "xfce_mcs-channel.c"
    pygobject_register_class(d, "XfceMcsChannel", XFCE_TYPE_MCS_CHANNEL, &PyXfceMcsChannel_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
