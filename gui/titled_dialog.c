/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "titled_dialog.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfcegui4/libxfcegui4.h>
#include <libxfcegui4/gui-enum-types.h>

#line 14 "titled_dialog.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkDialog_Type;
#define PyGtkDialog_Type (*_PyGtkDialog_Type)
static PyTypeObject *_PyGtkWindow_Type;
#define PyGtkWindow_Type (*_PyGtkWindow_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceTitledDialog_Type;

#line 29 "titled_dialog.c"



/* ----------- XfceTitledDialog ----------- */

static PyObject *
_wrap_xfce_titled_dialog_get_subtitle(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_titled_dialog_get_subtitle(XFCE_TITLED_DIALOG(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_xfce_titled_dialog_set_subtitle(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "subtitle", NULL };
    char *subtitle;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceTitledDialog.set_subtitle", kwlist, &subtitle))
        return NULL;
    
    xfce_titled_dialog_set_subtitle(XFCE_TITLED_DIALOG(self->obj), subtitle);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyXfceTitledDialog_methods[] = {
    { "get_subtitle", (PyCFunction)_wrap_xfce_titled_dialog_get_subtitle, METH_NOARGS,
      NULL },
    { "set_subtitle", (PyCFunction)_wrap_xfce_titled_dialog_set_subtitle, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceTitledDialog_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "titleddialog.TitledDialog",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceTitledDialog_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

#line 29 "titled_dialog.override"
static int
_wrap_xfce_titled_dialog_new_with_buttons(PyGObject *self, PyObject *args,
                                  PyObject *kwargs)
{
    gchar *title = NULL;
    PyGObject *py_window = NULL;
    PyObject *py_flags = NULL, *py_buttons = Py_None;
    GtkDialogFlags flags = 0;
    int len, i;
    GtkWindow *parent;
    
    static char *kwlist[] = { "title", "parent", "flags", "buttons", NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "|zOOO:XfceTitledDialog.__init__", kwlist,
                                     &title, &py_window, &py_flags,
                                     &py_buttons))
        return -1;

    if (py_window == NULL || (PyObject*)py_window == Py_None)
	parent = NULL;
    else if (pygobject_check(py_window, &PyGtkWindow_Type))
	parent = GTK_WINDOW(py_window->obj);
    else {
        PyErr_SetString(PyExc_TypeError, "parent must be a GtkWindow or None");
        return -1;
    }

    if (pyg_flags_get_value(GTK_TYPE_DIALOG_FLAGS, py_flags, (gint *)&flags))
        return -1;
    if (py_buttons == Py_None)
        len = 0;
    else if (PyTuple_Check(py_buttons))
        len = PyTuple_Size(py_buttons);
    else {
        PyErr_SetString(PyExc_TypeError, "buttons must be a tuple containing text/response pairs or None");
        return -1;
    }

    if (len % 2) {
        PyErr_SetString(PyExc_RuntimeError,
                        "buttons tuple must contain text/response id pairs");
        return -1;
    }

    if (pygobject_constructv(self, 0, NULL)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "could not create GtkDialog object");
        return -1;
    }

  if (title)
    gtk_window_set_title (GTK_WINDOW (self->obj), title);

  if (parent)
    gtk_window_set_transient_for (GTK_WINDOW (self->obj), parent);

  if (flags & GTK_DIALOG_MODAL)
    gtk_window_set_modal (GTK_WINDOW (self->obj), TRUE);
  
  if (flags & GTK_DIALOG_DESTROY_WITH_PARENT)
    gtk_window_set_destroy_with_parent (GTK_WINDOW (self->obj), TRUE);

  if (flags & GTK_DIALOG_NO_SEPARATOR)
    gtk_dialog_set_has_separator (GTK_DIALOG (self->obj), FALSE);
    
    for (i = 0; i < len; i += 2) {
        PyObject *text = PyTuple_GetItem(py_buttons, i);
        PyObject *id = PyTuple_GetItem(py_buttons, i + 1);
        if (!PyString_Check(text)) {
            gtk_object_destroy(GTK_OBJECT(self->obj));
            self->obj = NULL;
            PyErr_SetString(PyExc_RuntimeError,
                            "first member of each text/response id pair "
                            "must be a string");
            return -1;
        }
        if (!PyInt_Check(id)) {
            gtk_object_destroy(GTK_OBJECT(self->obj));
            self->obj = NULL;
            PyErr_SetString(PyExc_RuntimeError,
                            "second member of each text/response id pair "
                            "must be a number");
            return -1;
        }
        gtk_dialog_add_button(GTK_DIALOG(self->obj), PyString_AsString(text),
                              PyInt_AsLong(id));
    }
    
    g_object_ref(self->obj);

    return 0;
}
#line 215 "titled_dialog.c"


const PyMethodDef pytitled_dialog_functions[] = {
    { "titled_dialog_new_with_buttons", (PyCFunction)_wrap_xfce_titled_dialog_new_with_buttons, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pytitled_dialog_register_classes(PyObject *d)
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
        _PyGtkWindow_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Window");
        if (_PyGtkWindow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Window from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 262 "titled_dialog.c"
    pygobject_register_class(d, "XfceTitledDialog", XFCE_TYPE_TITLED_DIALOG, &PyXfceTitledDialog_Type, Py_BuildValue("(O)", &PyGtkDialog_Type));
}
