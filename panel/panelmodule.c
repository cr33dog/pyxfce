/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

extern PyMethodDef pyarrow_button_functions[];
extern PyMethodDef pyenums_functions[];
extern PyMethodDef pyenum_types_functions[];
extern PyMethodDef pyexternal_plugin_functions[];
extern PyMethodDef pyitembar_functions[];
extern PyMethodDef pyplugin_iface_functions[];
extern PyMethodDef pywindow_functions[];
void pyarrow_button_register_classes(PyObject *d);
void pyenums_register_classes(PyObject *d);
void pyenum_types_register_classes(PyObject *d);
void pyexternal_plugin_register_classes(PyObject *d);
void pyitembar_register_classes(PyObject *d);
void pyplugin_iface_register_classes(PyObject *d);
void pywindow_register_classes(PyObject *d);
void pyenums_add_constants(PyObject *module, const gchar *strip_prefix);

static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
  pyarrow_button_functions,
  pyenums_functions,
  pyenum_types_functions,
  pyexternal_plugin_functions,
  pyitembar_functions,
  pyplugin_iface_functions,
  pywindow_functions,
};

static void
my_register1()
{
	PyObject *m, *d;
	int	i;
	int	j;
	int	cnt;

	cnt = 0;
	
	for(i = 0; i < sizeof(each_functions) / sizeof(each_functions[0]); i++) {
		for(j = 0; each_functions[i][j].ml_name != NULL; j++) {
			if (cnt >= sizeof(all_functions) / sizeof(all_functions[0])) {
				fprintf (stderr, "pyxfce: Internal Error: too many functions");
				exit (1);
			}
			
			all_functions[cnt++] = each_functions[i][j];
		}
	}
	
	m = Py_InitModule("_panel", all_functions);
	d = PyModule_GetDict(m);

	pyarrow_button_register_classes(d);
	pyenums_register_classes(d);
	pyenum_types_register_classes(d);
	pyplugin_iface_register_classes(d);
	pyexternal_plugin_register_classes(d);
	pyitembar_register_classes(d);
	pywindow_register_classes(d);
	
	pyenums_add_constants(m, "XFCE_");
}

DL_EXPORT(void)
init_panel(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();

	my_register1 ();
}

#if 0
static void
my_register(char const *name, PyMethodDef afunctions[], void (aregister)(PyObject *d))
{
	PyObject *m, *d;
	char tmp[2049];
	snprintf (tmp, 2049, "panel.%s", name);
	m = Py_InitModule(tmp, afunctions);  
	d = PyModule_GetDict(m);
	(*aregister)(d);
	/*_register_classes(d)*/
	/*_add_constants(m, "GDK_")*/
}

DL_EXPORT(void)
init_panel(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	my_register ("icons",   pyicons_functions,   pyicons_register_classes);
	my_register ("support", pysupport_functions, pysupport_register_classes);
}
#endif
