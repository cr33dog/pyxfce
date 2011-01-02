/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

#include <libxfce4menu/libxfce4menu.h>

extern PyMethodDef pylibxfce4menu_functions[];
extern PyMethodDef pylibxfce4menu_config_functions[];
extern PyMethodDef pymenu_and_rules_functions[];
extern PyMethodDef pymenu_functions[];
extern PyMethodDef pymenu_directory_functions[];
extern PyMethodDef pymenu_element_functions[];
extern PyMethodDef pymenu_environment_functions[];
extern PyMethodDef pymenu_item_functions[];
extern PyMethodDef pymenu_item_cache_functions[];
extern PyMethodDef pymenu_item_pool_functions[];
extern PyMethodDef pymenu_layout_functions[];
extern PyMethodDef pymenu_monitor_functions[];
extern PyMethodDef pymenu_move_functions[];
extern PyMethodDef pymenu_not_rules_functions[];
extern PyMethodDef pymenu_or_rules_functions[];
extern PyMethodDef pymenu_rules_functions[];
extern PyMethodDef pymenu_separator_functions[];
extern PyMethodDef pymenu_standard_rules_functions[];

void pylibxfce4menu_register_classes(PyObject *d);
void pylibxfce4menu_config_register_classes(PyObject *d);
void pymenu_and_rules_register_classes(PyObject *d);
void pymenu_register_classes(PyObject *d);
void pymenu_directory_register_classes(PyObject *d);
void pymenu_element_register_classes(PyObject *d);
void pymenu_environment_register_classes(PyObject *d);
void pymenu_item_register_classes(PyObject *d);
void pymenu_item_cache_register_classes(PyObject *d);
void pymenu_item_pool_register_classes(PyObject *d);
void pymenu_layout_register_classes(PyObject *d);
void pymenu_monitor_register_classes(PyObject *d);
void pymenu_move_register_classes(PyObject *d);
void pymenu_not_rules_register_classes(PyObject *d);
void pymenu_or_rules_register_classes(PyObject *d);
void pymenu_rules_register_classes(PyObject *d);
void pymenu_separator_register_classes(PyObject *d);
void pymenu_standard_rules_register_classes(PyObject *d);

void pymenu_layout_add_constants(PyObject *module, const gchar *strip_prefix);
void pymenu_monitor_add_constants(PyObject *module, const gchar *strip_prefix);


static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pylibxfce4menu_functions,
	pylibxfce4menu_config_functions,
	pymenu_and_rules_functions,
	pymenu_functions,
	pymenu_directory_functions,
	pymenu_element_functions,
	pymenu_environment_functions,
	pymenu_item_functions,
	pymenu_item_cache_functions,
	pymenu_item_pool_functions,
	pymenu_layout_functions,
	pymenu_monitor_functions,
	pymenu_move_functions,
	pymenu_not_rules_functions,
	pymenu_or_rules_functions,
	pymenu_rules_functions,
	pymenu_separator_functions,
	pymenu_standard_rules_functions,
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
	
	m = Py_InitModule("_menu", all_functions);
	
	pymenu_layout_add_constants(m, "XFCE_");
	pymenu_monitor_add_constants(m, "XFCE_");
	
	/*PyModule_AddStringConstant(m, "STARTUP_NOTIFICATION_ID_KEY", XFCE_STARTUP_NOTIFICATION_ENVIRONMENT_DESKTOP_STARTUP_ID);*/

        d = PyModule_GetDict(m);
	pylibxfce4menu_register_classes(d);
	pylibxfce4menu_config_register_classes(d);
	pymenu_and_rules_register_classes(d);
	pymenu_register_classes(d);
	pymenu_directory_register_classes(d);
	pymenu_element_register_classes(d);
	pymenu_environment_register_classes(d);
	pymenu_item_register_classes(d);
	pymenu_item_cache_register_classes(d);
	pymenu_item_pool_register_classes(d);
	pymenu_layout_register_classes(d);
	pymenu_monitor_register_classes(d);
	pymenu_move_register_classes(d);
	pymenu_not_rules_register_classes(d);
	pymenu_or_rules_register_classes(d);
	pymenu_rules_register_classes(d);
	pymenu_separator_register_classes(d);
	pymenu_standard_rules_register_classes(d);
}

DL_EXPORT(void)
init_menu(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();

	my_register1 ();
}


