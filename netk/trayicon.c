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

extern PyTypeObject PyNetkScreen_Type;

#line 21 "trayicon.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkPlug_Type;
#define PyGtkPlug_Type (*_PyGtkPlug_Type)
static PyTypeObject *_PyGdkScreen_Type;
#define PyGdkScreen_Type (*_PyGdkScreen_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyNetkTrayIcon_Type;

#line 36 "trayicon.c"



/* ----------- NetkTrayIcon ----------- */

#line 36 "trayicon.override"
static int
_wrap_netk_tray_icon_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    Screen *xscreen;

    xscreen = GDK_SCREEN_XSCREEN (gdk_screen_get_default ());
    if (!xscreen) {
        PyErr_SetString(PyExc_RuntimeError, "could not create NetkTrayIcon object");
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
#line 63 "trayicon.c"


#line 58 "trayicon.override"
static PyObject* _wrap_netk_tray_icon_set_screen(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    Screen *xscreen;
    PyGObject *gscreen;
    PyGObject *nscreen;
    gint i;
    gint cnt;

    if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyNetkScreen_Type, &nscreen)) {
        cnt = ScreenCount (GDK_DISPLAY_XDISPLAY (gdk_display_get_default ()));
        for(i = 0; i < cnt; i++) {
            if (netk_screen_get (i) == (NetkScreen*) nscreen->obj) {
                break;
            }
        }
        if (i >= cnt) {
            return NULL;
        }
        xscreen = GDK_SCREEN_XSCREEN (gdk_display_get_screen (gdk_display_get_default (), i));
    } else if (PyArg_ParseTupleAndKeywords(args, kwargs, "O!:NetkTrayIcon.__init__", kwlist, &PyGdkScreen_Type, &gscreen)) {
        xscreen = GDK_SCREEN_XSCREEN (GDK_SCREEN (gscreen->obj));
    } else {
        return NULL;
    }


    netk_tray_icon_set_screen(NETK_TRAY_ICON(self->obj), xscreen);
    Py_INCREF(Py_None);
    return Py_None;
}
#line 98 "trayicon.c"


static PyObject *
_wrap_netk_tray_icon_set_gdkscreen(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:NetkTrayIcon.set_gdkscreen", kwlist, &PyGdkScreen_Type, &screen))
        return NULL;
    
    netk_tray_icon_set_gdkscreen(NETK_TRAY_ICON(self->obj), GDK_SCREEN(screen->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_netk_tray_icon_message_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", "text", NULL };
    char *text;
    glong id, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ls:NetkTrayIcon.message_new", kwlist, &id, &text))
        return NULL;
    
    ret = netk_tray_icon_message_new(NETK_TRAY_ICON(self->obj), id, text);
    
    return PyInt_FromLong(ret);

}

static PyObject *
_wrap_netk_tray_icon_message_cancel(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    glong id;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"l:NetkTrayIcon.message_cancel", kwlist, &id))
        return NULL;
    
    netk_tray_icon_message_cancel(NETK_TRAY_ICON(self->obj), id);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyNetkTrayIcon_methods[] = {
    { "set_screen", (PyCFunction)_wrap_netk_tray_icon_set_screen, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_gdkscreen", (PyCFunction)_wrap_netk_tray_icon_set_gdkscreen, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "message_new", (PyCFunction)_wrap_netk_tray_icon_message_new, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "message_cancel", (PyCFunction)_wrap_netk_tray_icon_message_cancel, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyNetkTrayIcon_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "trayicon.TrayIcon",                   /* tp_name */
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
    (struct PyMethodDef*)_PyNetkTrayIcon_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_netk_tray_icon_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_netk_tray_icon_new_gdk(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "screen", NULL };
    PyGObject *screen;
    NetkTrayIcon *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:tray_icon_new_gdk", kwlist, &PyGdkScreen_Type, &screen))
        return NULL;
    
    ret = netk_tray_icon_new_gdk(GDK_SCREEN(screen->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef pytrayicon_functions[] = {
    { "tray_icon_new_gdk", (PyCFunction)_wrap_netk_tray_icon_new_gdk, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pytrayicon_register_classes(PyObject *d)
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
        _PyGtkPlug_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Plug");
        if (_PyGtkPlug_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Plug from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
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


#line 274 "trayicon.c"
    pygobject_register_class(d, "NetkTrayIcon", NETK_TYPE_TRAY_ICON, &PyNetkTrayIcon_Type, Py_BuildValue("(O)", &PyGtkPlug_Type));
}
