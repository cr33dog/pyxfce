/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "trayicon.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <gdk/gdkx.h>
#include <libxfcegui4/netk-trayicon.h>
#include <libxfcegui4/netk-screen.h>

#ifndef NETK_TYPE_TRAY_ICON
#define NETK_TYPE_TRAY_ICON (netk_tray_icon_get_type ())
#endif

#line 19 "trayicon.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkPlug_Type;
#define PyGtkPlug_Type (*_PyGtkPlug_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)
static PyTypeObject *_PyNetkScreen_Type;
#define PyNetkScreen_Type (*_PyNetkScreen_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyNetkTrayIcon_Type;


/* ----------- NetkTrayIcon ----------- */

#line 34 "trayicon.override"
static int
_wrap_netk_tray_icon_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    Screen *xscreen;
    PyGObject *gscreen;
    PyGObject *screen;
    NetkScreen *nscreen;
    gint i;
    gint cnt;

    if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyNetkScreen_Type, &nscreen)) {
        cnt = ScreenCount (GDK_DISPLAY_XDISPLAY (gdk_display_get_default ()));
        for(i = 0; i < cnt; i++) {
            if (netk_screen_get (i) == nscreen) {
                break;
            }
        }
        if (i >= cnt) {
            return -1;
        }
        xscreen = GDK_SCREEN_XSCREEN (gdk_display_get_screen (gdk_display_get_default (), i));
    } else if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyGdkScreen_Type, &gscreen)) {
        xscreen = GDK_SCREEN_XSCREEN (gscreen);
    } else if (PyArg_ParseTupleAndKeywords(args, kwargs, ":NetkTrayIcon.__init__", kwlist)) {
        xscreen = GDK_SCREEN_XSCREEN (gdk_screen_get_default ());
    } else {
        return -1;
    }

    self->obj = (GObject *)netk_tray_icon_new (xscreen);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create NetkTrayIcon object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}
#line 79 "trayicon.c"


PyTypeObject PyNetkTrayIcon_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "trayicon.TrayIcon",			/* tp_name */
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
    NULL,			/* tp_methods */
    0,					/* tp_members */
    0,		       	/* tp_getset */
    NULL,				/* tp_base */
    NULL,				/* tp_dict */
    (descrgetfunc)0,	/* tp_descr_get */
    (descrsetfunc)0,	/* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_netk_tray_icon_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

#line 75 "trayicon.override"
static PyObject* _wrap_netk_tray_icon_set_screen(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    Screen *xscreen;
    PyGObject *gscreen;
    PyGObject *screen;
    NetkScreen *nscreen;
    gint i;
    gint cnt;

    if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyNetkScreen_Type, &nscreen)) {
        cnt = ScreenCount (GDK_DISPLAY_XDISPLAY (gdk_display_get_default ()));
        for(i = 0; i < cnt; i++) {
            if (netk_screen_get (i) == nscreen) {
                break;
            }
        }
        if (i >= cnt) {
            return -1;
        }
        xscreen = GDK_SCREEN_XSCREEN (gdk_display_get_screen (gdk_display_get_default (), i));
    } else if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyGdkScreen_Type, &gscreen)) {
        xscreen = GDK_SCREEN_XSCREEN (gscreen);
    } else if (PyArg_ParseTupleAndKeywords(args, kwargs, ":NetkTrayIcon.__init__", kwlist)) {
        xscreen = GDK_SCREEN_XSCREEN (gdk_screen_get_default ());
    } else {
        return -1;
    }


    netk_tray_icon_set_screen(NETK_PAGER(self->obj), xscreen);
    Py_INCREF(Py_None);
    return Py_None;
}
/*override netk_tray_icon_message_new*/
/*override netk_tray_icon_message_cancel*/
#line 168 "trayicon.c"


PyMethodDef pytrayicon_functions[] = {
    { "tray_icon_set_screen", (PyCFunction)_wrap_netk_tray_icon_set_screen, METH_VARARGS|METH_KEYWORDS },
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pytrayicon_register_classes(PyObject *d)
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
    if ((module = PyImport_ImportModule("screen")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyNetkScreen_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Screen");
        if (_PyNetkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from screen");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import screen");
        return;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGtkPlug_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Plug");
        if (_PyGtkPlug_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Plug from gtk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGdkScreen_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "Screen");
        if (_PyGdkScreen_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Screen from gtk.gdk");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return;
    }


#line 240 "trayicon.c"
    pygobject_register_class(d, "NetkTrayIcon", NETK_TYPE_TRAY_ICON, &PyNetkTrayIcon_Type, Py_BuildValue("(O)", &PyGtkPlug_Type));
}
