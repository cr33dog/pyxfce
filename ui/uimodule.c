/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

#include <libxfce4ui/libxfce4ui.h>

extern PyMethodDef pydialogs_functions[];
extern PyMethodDef pygdk_extensions_functions[];
extern PyMethodDef pygtk_extensions_functions[];
extern PyMethodDef pysm_client_functions[];
extern PyMethodDef pytitled_dialog_functions[];
extern PyMethodDef pyspawn_functions[];

void pydialogs_register_classes(PyObject *d);
void pygdk_extensions_register_classes(PyObject *d);
void pygtk_extensions_register_classes(PyObject *d);
void pysm_client_register_classes(PyObject *d);
void pytitled_dialog_register_classes(PyObject *d);
void pyspawn_register_classes(PyObject *d);

void pysm_client_add_constants(PyObject *module, const gchar *strip_prefix);


static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pydialogs_functions,
	pygdk_extensions_functions,
	pygtk_extensions_functions,
	pysm_client_functions,
	pytitled_dialog_functions,
	pyspawn_functions,
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
	
	m = Py_InitModule("_ui", all_functions);
	
	pysm_client_add_constants(m, "XFCE_");
	
	/*PyModule_AddStringConstant(m, "STARTUP_NOTIFICATION_ID_KEY", XFCE_STARTUP_NOTIFICATION_ENVIRONMENT_DESKTOP_STARTUP_ID);*/

        d = PyModule_GetDict(m);
	pydialogs_register_classes (d);
	pygdk_extensions_register_classes (d);
	pygtk_extensions_register_classes (d);
	pysm_client_register_classes (d);
	pytitled_dialog_register_classes (d);
	pyspawn_register_classes (d);
}

DL_EXPORT(void)
init_ui(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();

	my_register1 ();
}


