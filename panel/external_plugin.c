#include <stdio.h>
#include "Python.h"
#include "pygobject.h"
#include <libxfce4panel/libxfce4panel.h>
#include "xfce-panel-macros-47.h"

extern PyTypeObject PyXfcePanelPlugin_Type;

static void
construct(XfcePanelPlugin *xpp) {
	printf("constructing...\n");
}

PYXFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL_BODY(construct);

static PyObject *
register_external_full_constructor(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "socket_ID", "plugin", NULL };
    int socket_ID;
    PyGObject *py_plugin = NULL;
    XfcePanelPlugin* plugin = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "iO:XfcePanelPlugin.__init__", kwlist, &socket_ID, &py_plugin))
        return NULL;
    if ((PyObject *)py_plugin == Py_None) {
        PyErr_SetString(PyExc_TypeError, "plugin should be a XfcePanelPlugin");
        return NULL;
    } else if (py_plugin && pygobject_check(py_plugin, &PyXfcePanelPlugin_Type)) {
        plugin = XFCE_PANEL_PLUGIN(py_plugin->obj);
        {
            PYXFCE_PANEL_PLUGIN_REGISTER_EXTERNAL_FULL_CONSTRUCTOR(socket_ID, plugin)
        }
        Py_INCREF(Py_None);
        return Py_None;
    } else {
        PyErr_SetString(PyExc_TypeError, "plugin should be a XfcePanelPlugin");
        return NULL;
    }

}

PyMethodDef pyexternal_plugin_functions[] = {
    { "register_external_full_constructor", (PyCFunction) register_external_full_constructor, METH_VARARGS|METH_KEYWORDS,  NULL },
    { NULL, NULL, 0, NULL },
};

void pyexternal_plugin_register_classes(PyObject *d) {
}
