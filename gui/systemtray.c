/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "systemtray.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>

#ifndef XFCE_TYPE_SYSTEM_TRAY
#define XFCE_TYPE_SYSTEM_TRAY (xfce_system_tray_get_type ())
#endif

#line 17 "systemtray.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceSystemTray_Type;

#line 30 "systemtray.c"



/* ----------- XfceSystemTray ----------- */

static int
_wrap_xfce_system_tray_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":systemtray.SystemTray.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create systemtray.SystemTray object");
        return -1;
    }
    return 0;
}

#line 30 "systemtray.override"
static PyObject *
_wrap_xfce_system_tray_register(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *pscreen;
    GdkScreen* gscreen;
    Screen* xscreen;
    GError* error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
				     "O!:XfceSystemTray.register",
                                     kwlist, &PyGdkScreen_Type, &pscreen)
    ) {
        return NULL;
    }

    if (!pscreen || !pscreen->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not register XfceSystemTray object");
        return NULL;
    }

    gscreen = pscreen->obj;

    xscreen = GDK_SCREEN_XSCREEN(gscreen);
    if (!xscreen) {
       /* TODO unref gscreen ? */
       PyErr_SetString(PyExc_RuntimeError, "could not check if any (Xfce or other) system tray is running");
       return NULL;
    }
    
    if (xfce_system_tray_register((XfceSystemTray*) self->obj, xscreen, &error)) {
      return PyBool_FromLong(1);
    } else {
      if (pyg_error_check(&error))
        return NULL;

      return PyBool_FromLong(0);
    }
}
#line 96 "systemtray.c"


static PyObject *
_wrap_xfce_system_tray_unregister(PyGObject *self)
{
    
    xfce_system_tray_unregister(XFCE_SYSTEM_TRAY(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyXfceSystemTray_methods[] = {
    { "register", (PyCFunction)_wrap_xfce_system_tray_register, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "unregister", (PyCFunction)_wrap_xfce_system_tray_unregister, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceSystemTray_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "systemtray.SystemTray",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceSystemTray_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_system_tray_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

#line 71 "systemtray.override"
static PyObject *
_wrap_xfce_system_tray_check_running(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *pscreen;
    GdkScreen* gscreen;
    Screen* xscreen;
    GError* error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
				     "O!:XfceSystemTray.check_running",
                                     kwlist, &PyGdkScreen_Type, &pscreen)
    ) {
        return NULL;
    }

    if (!pscreen || !pscreen->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not check if any (Xfce or other) system tray is running");
        return NULL;
    }

    gscreen = pscreen->obj;

    xscreen = GDK_SCREEN_XSCREEN(gscreen);
    if (!xscreen) {
       /* TODO unref gscreen ? */
       PyErr_SetString(PyExc_RuntimeError, "could not check if any (Xfce or other) system tray is running");
       return NULL;
    }
    
    if (xfce_system_tray_check_running(xscreen)) {
      return PyBool_FromLong(1);
    } else {
      return PyBool_FromLong(0);
    }
}
#line 203 "systemtray.c"


const PyMethodDef pysystemtray_functions[] = {
    { "system_tray_check_running", (PyCFunction)_wrap_xfce_system_tray_check_running, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pysystemtray_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkScreen_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Screen");
        if (_PyGdkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 244 "systemtray.c"
    pygobject_register_class(d, "XfceSystemTray", XFCE_TYPE_SYSTEM_TRAY, &PyXfceSystemTray_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_SYSTEM_TRAY);
}
