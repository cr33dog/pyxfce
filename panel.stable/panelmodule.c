/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

extern PyMethodDef pyicons_functions[];
extern PyMethodDef pysupport_functions[];
void pyicons_register_classes(PyObject *d);
void pysupport_register_classes(PyObject *d);

static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pyicons_functions,
	pysupport_functions,
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

	pyicons_register_classes (d);
	pysupport_register_classes (d);
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
