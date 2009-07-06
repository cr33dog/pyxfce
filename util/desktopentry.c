/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "desktopentry.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>

#line 13 "desktopentry.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyXfceDesktopEntry_Type;

#line 24 "desktopentry.c"



/* ----------- XfceDesktopEntry ----------- */

static PyObject *
_wrap_xfce_desktop_entry_get_file(PyGObject *self)
{
    const gchar *ret;

    
    ret = xfce_desktop_entry_get_file(XFCE_DESKTOP_ENTRY(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

#line 54 "desktopentry.override"
static PyObject *
_wrap_xfce_desktop_entry_get_int(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    int value;
    gchar *key;
    static char *kwlist[] = { "key", NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:xfce_desktop_entry_get_int", kwlist, &key))
        return NULL;

    if (xfce_desktop_entry_get_int (XFCE_DESKTOP_ENTRY(self->obj), key, &value)) {
        return PyInt_FromLong((long) value);
    }

    Py_INCREF(Py_None);
    return Py_None;
}
#line 62 "desktopentry.c"


#line 29 "desktopentry.override"
static PyObject *
_wrap_xfce_desktop_entry_get_string(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    gchar *value;
    PyObject *ret;
    gchar *key;
    int translated;
    static char *kwlist[] = { "key", "translated", NULL };

    translated = TRUE;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s|i:xfce_desktop_entry_get_string", kwlist, &key, &translated))
        return NULL;

    if (xfce_desktop_entry_get_string (XFCE_DESKTOP_ENTRY(self->obj), key, translated, &value)) {
        ret = PyString_FromString (value);
        g_free (value);
        return ret;
    }

    Py_INCREF(Py_None);
    return Py_None;
}
#line 89 "desktopentry.c"


static PyObject *
_wrap_xfce_desktop_entry_has_translated_entry(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "key", NULL };
    char *key;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:XfceDesktopEntry.has_translated_entry", kwlist, &key))
        return NULL;
    
    ret = xfce_desktop_entry_has_translated_entry(XFCE_DESKTOP_ENTRY(self->obj), key);
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyXfceDesktopEntry_methods[] = {
    { "get_file", (PyCFunction)_wrap_xfce_desktop_entry_get_file, METH_NOARGS,
      NULL },
    { "get_int", (PyCFunction)_wrap_xfce_desktop_entry_get_int, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_string", (PyCFunction)_wrap_xfce_desktop_entry_get_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "has_translated_entry", (PyCFunction)_wrap_xfce_desktop_entry_has_translated_entry, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyXfceDesktopEntry_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "desktopentry.DesktopEntry",                   /* tp_name */
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
    (struct PyMethodDef*)_PyXfceDesktopEntry_methods, /* tp_methods */
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

#line 73 "desktopentry.override"
static PyObject *
_wrap_xfce_desktop_entry_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    const gchar** categories;
    const gchar* file_path;
    XfceDesktopEntry* desktop_entry;
    PyObject* py_desktop_entry;
    PyObject* py_categories;
    PyObject* py_item;
    int i, count;

    static char *kwlist[] = { "file_path", "categories", NULL };

    categories = NULL;
    file_path = NULL;
    py_categories = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, 
      "s|O!:xfce_desktop_entry_new", kwlist, &file_path, &PyList_Type, &py_categories)) {
        return NULL;
    }

    count = 0;

    if (py_categories != NULL) {
        count = PyList_Size (py_categories);
        categories = (const gchar**) g_new0 (gchar*, count + 1);
        for (i = 0; i < count; i++) {
            py_item = PyList_GetItem (py_categories, i);

            categories[i] = PyString_AsString (py_item);
            if (categories[i] == NULL) {
                g_free(categories);
                PyErr_SetString(PyExc_TypeError, "Type Mismatch: categories should be a list of strings");
                return NULL;
            }
        }
    }

    if (categories == NULL) {
        count = 29;
        categories = (const gchar**) g_new0(gchar*, count + 1);
        categories[0] = "Name";
        categories[1] = "GenericName",
        categories[2] = "Type";
        categories[3] = "Version";
        categories[4] = "Encoding";
        categories[5] = "NoDisplay";
        categories[6] = "Comment";
        categories[7] = "Icon";
        categories[8] = "Hidden";
        categories[9] = "FilePattern";
        categories[10] = "TryExec";
        categories[11] = "Exec";
        categories[12] = "Path";
        categories[13] = "Terminal";
        categories[14] = "SwallowTitle";
        categories[15] = "SwallowExec";
        categories[16] = "Actions";
        categories[17] = "MimeType";
        categories[18] = "SortOrder";
        categories[18] = "Dev";
        categories[19] = "FSType";
        categories[20] = "MountPoint";
        categories[21] = "ReadOnly";
        categories[22] = "UnmountIcon";
        categories[23] = "URL";
        categories[24] = "Categories";
        categories[25] = "OnlyShowIn";
        categories[26] = "NotShowIn";
        categories[27] = "StartupNotify";
        categories[28] = "StartupWMClass";
    }

    desktop_entry = xfce_desktop_entry_new(file_path, categories, count);

    g_free(categories);

    if (desktop_entry == NULL) {
        PyErr_SetString(PyExc_OSError, "OSError");
        return NULL;
    }

    py_desktop_entry = pygobject_new((GObject *) desktop_entry);
    g_object_unref(desktop_entry);
    return py_desktop_entry;
}
#line 257 "desktopentry.c"


const PyMethodDef pydesktopentry_functions[] = {
    { "desktop_entry_new", (PyCFunction)_wrap_xfce_desktop_entry_new, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pydesktopentry_register_classes(PyObject *d)
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


#line 286 "desktopentry.c"
    pygobject_register_class(d, "XfceDesktopEntry", XFCE_TYPE_DESKTOP_ENTRY, &PyXfceDesktopEntry_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(XFCE_TYPE_DESKTOP_ENTRY);
}
