/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "external_plugin.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-external-plugin.h>

extern PyTypeObject PyGtkWidget_Type;

static int 
command_line_args_helper(char*** argv)
{
  int argc;
  int i;
  PyObject* av;

  av = PySys_GetObject("argv");
  if (!PyList_Check(av)) {
    PyErr_Warn(PyExc_Warning, "ignoring sys.argv: it must be a list of strings");
    av = NULL; 
  }

  if (av != NULL) {
    argc = PyList_Size(av);
    for (i = 0; i < argc; i++) {
      if (!PyString_Check(PyList_GetItem(av, i))) {
        PyErr_Warn(PyExc_Warning, "ignoring sys.argv: it must be a list of strings");
        av = NULL;
        break;
      }
    }
  }

  if (av) {
    *argv = g_new(char *, argc + 1);
    for (i = 0; i < argc; i++) {
      (*argv)[i] = g_strdup(PyString_AsString(PyList_GetItem(av, i)));
    }

    (*argv)[i] = 0;
  }

  return argc;
}

static void
command_line_args_free(int count, char** argv)
{
  int i;
  for(i = 0; i < count; i++) {
    g_free(argv[i]);
  }
}

static void 
call_helper(XfcePanelPlugin* plugin, char const* fn)
{
  PyObject* py;
  PyGILState_STATE state;
  PyObject* retobj;
  PyObject* py_method;

  state = pyg_gil_state_ensure();

  py = pygobject_new((GObject*) plugin);

  py_method = PyObject_GetAttrString(py, (char*) fn);
  if (!py_method) {
    if (PyErr_Occurred())
      PyErr_Print();
  } else {
    retobj = PyEval_CallObject(py_method, NULL); 

    if (PyErr_Occurred())
      PyErr_Print();

    Py_DECREF(py_method);

    if (retobj) {
      Py_DECREF(retobj);
    }
  }
  Py_DECREF(py);

  PyErr_Clear();
  pyg_gil_state_release(state);
}

static void plugin_construct (XfcePanelPlugin *plugin)
{
  /* questionable */
  call_helper(plugin, "do_construct");
}

static void plugin_free_data (XfcePanelPlugin *plugin)
{
  /* questionable */
  call_helper(plugin, "do_free_data");
}

static void plugin_save (XfcePanelPlugin *plugin)
{
  call_helper(plugin, "do_save");
}

static void plugin_configure (XfcePanelPlugin *plugin)
{
  call_helper(plugin, "do_configure");
}

static void plugin_about (XfcePanelPlugin *plugin)
{
  call_helper(plugin, "do_about");
}

static void plugin_set_size (XfcePanelPlugin *plugin, int size)
{
  PyObject* py;
  PyGILState_STATE state;
  PyObject* retobj;
  PyObject* py_method;
  PyObject* py_args;

  state = pyg_gil_state_ensure();

  py = pygobject_new((GObject*) plugin);

  py_method = PyObject_GetAttrString(py, "do_set_size");
  if (!py_method) {
    if (PyErr_Occurred())
      PyErr_Print();
  } else {
    py_args = PyTuple_New(1);
    PyTuple_SET_ITEM(py_args, 0, PyInt_FromLong(size));

    retobj = PyEval_CallObject(py_method, py_args);

    if (PyErr_Occurred())
      PyErr_Print();

    Py_DECREF(py_args);
    Py_DECREF(py_args);
    Py_DECREF(py_method);

    if (retobj) {
      Py_DECREF(retobj);
    }
  }
  Py_DECREF(py);

  PyErr_Clear();
  pyg_gil_state_release(state);
}

/* values may be NULL, except api_version */
static XfcePanelPluginInfo info = {
   XFCE_PANEL_PLUGIN_API_VERSION,  /* from header file */
   plugin_construct, /* create widget content (plugin is a GtkContainer) */
   plugin_free_data, /* free allocated data */
   plugin_save,      /* save configuration */
   plugin_configure, /* run configuration dialog */
   plugin_about,     /* show about dialog */
   plugin_set_size   /* adjust to new panel size */
};

#line 171 "external_plugin.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkPlug_Type;
#define PyGtkPlug_Type (*_PyGtkPlug_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject PyXfceExternalPanelPlugin_Type;

#line 186 "external_plugin.c"



/* ----------- XfceExternalPanelPlugin ----------- */

#line 185 "external_plugin.override"
static int
_wrap_xfce_external_panel_plugin_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    char** argv;
    int argc;

    argv = NULL;
    argc = command_line_args_helper(&argv);
    self->obj = (GObject *)xfce_external_panel_plugin_new (argc, argv, &info);
    command_line_args_free(argc, argv);

    pygobject_register_wrapper((PyObject *)self);

    return 0;
}
#line 208 "external_plugin.c"


PyTypeObject PyXfceExternalPanelPlugin_Type = {
    PyObject_HEAD_INIT(NULL)
    0,					/* ob_size */
    "external.ExternalPanelPlugin",			/* tp_name */
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
    (initproc)_wrap_xfce_external_panel_plugin_new,		/* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

PyMethodDef pyexternal_plugin_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pyexternal_plugin_register_classes(PyObject *d)
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


#line 306 "external_plugin.c"
    pygobject_register_class(d, "XfceExternalPanelPlugin", XFCE_TYPE_EXTERNAL_PANEL_PLUGIN, &PyXfceExternalPanelPlugin_Type, Py_BuildValue("(O)", &PyGtkPlug_Type));
}
