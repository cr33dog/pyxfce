/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

#include <xfconf/xfconf.h>

extern const PyMethodDef pybinding_functions[];
extern const PyMethodDef pychannel_functions[];
extern const PyMethodDef pyerrors_functions[];
extern const PyMethodDef pytypes_functions[];
void pybinding_register_classes(PyObject *d);
void pychannel_register_classes(PyObject *d);
void pyerrors_register_classes(PyObject *d);
void pytypes_register_classes(PyObject *d);
void pyerrors_add_constants(PyObject *module, const gchar *strip_prefix);

static PyMethodDef all_functions[1000];

static const PyMethodDef* each_functions[] = {
	pybinding_functions,
	pychannel_functions,
	pyerrors_functions,
	pytypes_functions,
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
	
	m = Py_InitModule("_xfconf", all_functions);
	pyerrors_add_constants(m, "XFCONF_");
	d = PyModule_GetDict(m);

	pybinding_register_classes(d);
	pychannel_register_classes(d);
	pyerrors_register_classes(d);
	pytypes_register_classes(d);
}

DL_EXPORT(void)
init_xfconf(void)
{
	GError* error = NULL;

	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();
	if(!xfconf_init(&error)) {
		fprintf(stderr, "Unable to initialize xfconf: %s\n", error->message);
		if(pyg_error_check(&error))
			return;
	}

	my_register1 ();
}

#if 0
static void
my_register(char const *name, PyMethodDef afunctions[], void (aregister)(PyObject *d))
{
	PyObject *m, *d;
	char tmp[2049];
	snprintf (tmp, 2049, "xfconf.%s", name);  
	m = Py_InitModule(tmp, afunctions);
	d = PyModule_GetDict(m);
	(*aregister)(d);
	/*_add_constants(m, "GDK_")*/   
}
                                                                    
DL_EXPORT(void)
init_xfconf(void)
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
