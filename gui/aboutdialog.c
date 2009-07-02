/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "aboutdialog.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <gtk/gtkdialog.h>
#include <libxfcegui4/libxfcegui4.h>

#line 14 "aboutdialog.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkDialog_Type;
#define PyGtkDialog_Type (*_PyGtkDialog_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceAboutDialog_Type;

#line 29 "aboutdialog.c"



/* ----------- XfceAboutDialog ----------- */

static int
_wrap_xfce_about_dialog_new_empty(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":aboutdialog.AboutDialog.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create aboutdialog.AboutDialog object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_xfce_about_dialog_set_program(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_program", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_program(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_version(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_version", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_version(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_description(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_description", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_description(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_copyright(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_copyright", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_copyright(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_license(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_license", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_license(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_homepage(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "value", NULL };
    char *value;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceAboutDialog.set_homepage", kwlist, &value))
        return NULL;
    
    xfce_about_dialog_set_homepage(XFCE_ABOUT_DIALOG(self->obj), value);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_set_icon(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "icon", NULL };
    PyGObject *icon;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:XfceAboutDialog.set_icon", kwlist, &PyGdkPixbuf_Type, &icon))
        return NULL;
    
    xfce_about_dialog_set_icon(XFCE_ABOUT_DIALOG(self->obj), GDK_PIXBUF(icon->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_add_credit(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "mail", "task", NULL };
    char *name, *mail, *task;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sss:XfceAboutDialog.add_credit", kwlist, &name, &mail, &task))
        return NULL;
    
    xfce_about_dialog_add_credit(XFCE_ABOUT_DIALOG(self->obj), name, mail, task);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_program(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_program(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_version(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_version(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_description(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_description(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_copyright(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_copyright(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_license(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_license(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_homepage(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_about_dialog_get_homepage(XFCE_ABOUT_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_about_dialog_get_icon(PyGObject *self)
{
    GdkPixbuf *ret;

    
    ret = xfce_about_dialog_get_icon(XFCE_ABOUT_DIALOG(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyMethodDef _PyXfceAboutDialog_methods[] = {
    { "set_program", (PyCFunction)_wrap_xfce_about_dialog_set_program, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_version", (PyCFunction)_wrap_xfce_about_dialog_set_version, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_description", (PyCFunction)_wrap_xfce_about_dialog_set_description, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_copyright", (PyCFunction)_wrap_xfce_about_dialog_set_copyright, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_license", (PyCFunction)_wrap_xfce_about_dialog_set_license, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_homepage", (PyCFunction)_wrap_xfce_about_dialog_set_homepage, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_icon", (PyCFunction)_wrap_xfce_about_dialog_set_icon, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "add_credit", (PyCFunction)_wrap_xfce_about_dialog_add_credit, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_program", (PyCFunction)_wrap_xfce_about_dialog_get_program, METH_NOARGS,
      NULL },
    { "get_version", (PyCFunction)_wrap_xfce_about_dialog_get_version, METH_NOARGS,
      NULL },
    { "get_description", (PyCFunction)_wrap_xfce_about_dialog_get_description, METH_NOARGS,
      NULL },
    { "get_copyright", (PyCFunction)_wrap_xfce_about_dialog_get_copyright, METH_NOARGS,
      NULL },
    { "get_license", (PyCFunction)_wrap_xfce_about_dialog_get_license, METH_NOARGS,
      NULL },
    { "get_homepage", (PyCFunction)_wrap_xfce_about_dialog_get_homepage, METH_NOARGS,
      NULL },
    { "get_icon", (PyCFunction)_wrap_xfce_about_dialog_get_icon, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceAboutDialog_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "aboutdialog.AboutDialog",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceAboutDialog_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_xfce_about_dialog_new_empty,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

const PyMethodDef pyaboutdialog_functions[] = {
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pyaboutdialog_register_classes(PyObject *d)
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
        _PyGtkDialog_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Dialog");
        if (_PyGtkDialog_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Dialog from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkPixbuf_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 402 "aboutdialog.c"
    pygobject_register_class(d, "XfceAboutDialog", XFCE_TYPE_ABOUT_DIALOG, &PyXfceAboutDialog_Type, Py_BuildValue("(O)", &PyGtkDialog_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_ABOUT_DIALOG);
}
