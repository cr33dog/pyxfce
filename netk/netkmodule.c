/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

extern PyMethodDef pyapplication_functions[];
extern PyMethodDef pyclass_group_functions[];
extern PyMethodDef pyenum_types_functions[];
extern PyMethodDef pypager_functions[];
extern PyMethodDef pyscreen_functions[];
extern PyMethodDef pytasklist_functions[];
extern PyMethodDef pytrayicon_functions[];
extern PyMethodDef pyutil_functions[];
extern PyMethodDef pywindow_action_menu_functions[];
extern PyMethodDef pywindow_functions[];
extern PyMethodDef pywindow_menu_functions[];
extern PyMethodDef pyworkspace_functions[];
void pyapplication_register_classes(PyObject *d);
void pyclass_group_register_classes(PyObject *d);
void pyenum_types_register_classes(PyObject *d);
void pypager_register_classes(PyObject *d);
void pyscreen_register_classes(PyObject *d);
void pytasklist_register_classes(PyObject *d);
void pytrayicon_register_classes(PyObject *d);
void pyutil_register_classes(PyObject *d);
void pywindow_action_menu_register_classes(PyObject *d);
void pywindow_register_classes(PyObject *d);
void pywindow_menu_register_classes(PyObject *d);
void pyworkspace_register_classes(PyObject *d);

void pywindow_add_constants(PyObject *module, const gchar *strip_prefix);
void pypager_add_constants(PyObject *module, const gchar *strip_prefix);
void pytasklist_add_constants(PyObject *module, const gchar *strip_prefix);

static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pyapplication_functions,
	pyclass_group_functions,
	pyenum_types_functions,
	pypager_functions,
	pyscreen_functions,
	pytasklist_functions,
	pytrayicon_functions,
	pyutil_functions,
	pywindow_action_menu_functions,
	pywindow_functions,
	pywindow_menu_functions,
	pyworkspace_functions,
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
	
	m = Py_InitModule("_netk", all_functions);
	pywindow_add_constants(m, "NETK_");
	pypager_add_constants(m, "NETK_");
	pytasklist_add_constants(m, "NETK_");
	d = PyModule_GetDict(m);

	pyapplication_register_classes (d);
	pyclass_group_register_classes (d);
	pyenum_types_register_classes (d);
	pypager_register_classes (d);
	pyscreen_register_classes (d);
	pytasklist_register_classes (d);
	pytrayicon_register_classes (d);
	pyutil_register_classes (d);
	pywindow_action_menu_register_classes (d);
	pywindow_register_classes (d);
	pywindow_menu_register_classes (d);
	pyworkspace_register_classes (d);
}

DL_EXPORT(void)
init_netk(void)
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
	snprintf (tmp, 2049, "netk.%s", name);  
	m = Py_InitModule(tmp, afunctions);
	d = PyModule_GetDict(m);
	(*aregister)(d);
	/*_add_constants(m, "GDK_")*/   
}
                                                                    
DL_EXPORT(void)
init_netk(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();
	
	my_register ("application",      pyapplication_functions,        pyapplication_register_classes);
	my_register ("classgroup",       pyclass_group_functions,        pyclass_group_register_classes);
	my_register ("enumtypes",        pyenum_types_functions,         pyenum_types_register_classes);
	my_register ("pager",            pypager_functions,              pypager_register_classes);
	my_register ("screen",           pyscreen_functions,             pyscreen_register_classes);
	my_register ("tasklist",         pytasklist_functions,           pytasklist_register_classes);
	my_register ("trayicon",         pytrayicon_functions,           pytrayicon_register_classes);
	my_register ("util",             pyutil_functions,               pyutil_register_classes);
	my_register ("windowactionmenu", pywindow_action_menu_functions, pywindow_action_menu_register_classes);
	my_register ("window",           pywindow_functions,             pywindow_register_classes);
	my_register ("windowmenu",       pywindow_menu_functions,        pywindow_menu_register_classes);
	my_register ("workspace",        pyworkspace_functions,          pyworkspace_register_classes);
}
#endif
