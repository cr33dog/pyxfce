/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

extern PyMethodDef pydesktopentry_functions[];
extern PyMethodDef pyfileutils_functions[];
extern PyMethodDef pyi18n_functions[];
extern PyMethodDef pykiosk_functions[];
extern PyMethodDef pymiscutils_functions[];
extern PyMethodDef pyrc_functions[];
extern PyMethodDef pyresource_functions[];
extern PyMethodDef pyutf8_functions[];
void pydesktopentry_register_classes(PyObject *d);
void pyfileutils_register_classes(PyObject *d);
void pyi18n_register_classes(PyObject *d);
void pykiosk_register_classes(PyObject *d);
void pymiscutils_register_classes(PyObject *d);
void pyrc_register_classes(PyObject *d);
void pyresource_register_classes(PyObject *d);
void pyutf8_register_classes(PyObject *d);

static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pydesktopentry_functions,
	pyfileutils_functions,
	pyi18n_functions,
	pykiosk_functions,
	pymiscutils_functions,
	pyrc_functions,
	pyresource_functions,
	pyutf8_functions,
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
	
	m = Py_InitModule("_util", all_functions);
	d = PyModule_GetDict(m);

	pyfileutils_register_classes (d);
	pydesktopentry_register_classes (d);
	pyi18n_register_classes (d);
	pykiosk_register_classes (d);
	pymiscutils_register_classes (d);
	pyrc_register_classes (d);
	pyresource_register_classes (d);
	pyutf8_register_classes (d);
}

DL_EXPORT(void)
init_util(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();

	my_register1 ();
}
