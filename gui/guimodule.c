/* -*- Mode: C; c-basic-offset: 4 -*-
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <locale.h>
  
/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>
#include <pyerrors.h>

extern PyMethodDef pyaboutdialog_functions[];
extern PyMethodDef pyappmenuitem_functions[];
extern PyMethodDef pyclock_functions[];
extern PyMethodDef pycolorbutton_functions[];
extern PyMethodDef pydecorbutton_functions[];
extern PyMethodDef pydecortoggle_functions[];
extern PyMethodDef pydialogs_functions[];
extern PyMethodDef pyfilechooser_functions[];
extern PyMethodDef pyframebox_functions[];
extern PyMethodDef pygdk_extensions_functions[];
extern PyMethodDef pygtk_extensions_functions[];
extern PyMethodDef pygtk_style_functions[];
extern PyMethodDef pygtktoxevent_functions[];
extern PyMethodDef pyiconbutton_functions[];
extern PyMethodDef pyicons_functions[];
extern PyMethodDef pyicontheme_functions[];
extern PyMethodDef pymenubutton_functions[];
extern PyMethodDef pymovehandler_functions[];
extern PyMethodDef pyscaled_image_functions[];
extern PyMethodDef pysession_client_functions[];
extern PyMethodDef pysystemtray_functions[];
extern PyMethodDef pytogglebutton_functions[];

void pyaboutdialog_register_classes(PyObject *d);
void pyappmenuitem_register_classes(PyObject *d);
void pyclock_register_classes(PyObject *d);
void pycolorbutton_register_classes(PyObject *d);
void pydecorbutton_register_classes(PyObject *d);
void pydecortoggle_register_classes(PyObject *d);
void pydialogs_register_classes(PyObject *d);
void pyfilechooser_register_classes(PyObject *d);
void pyframebox_register_classes(PyObject *d);
void pygdk_extensions_register_classes(PyObject *d);
void pygtk_extensions_register_classes(PyObject *d);
void pygtk_style_register_classes(PyObject *d);
void pygtktoxevent_register_classes(PyObject *d);
void pyiconbutton_register_classes(PyObject *d);
void pyicons_register_classes(PyObject *d);
void pyicontheme_register_classes(PyObject *d);
void pymenubutton_register_classes(PyObject *d);
void pymovehandler_register_classes(PyObject *d);
void pyscaled_image_register_classes(PyObject *d);
void pysession_client_register_classes(PyObject *d);
void pysystemtray_register_classes(PyObject *d);
void pytogglebutton_register_classes(PyObject *d);

static PyMethodDef all_functions[1000];

static PyMethodDef* each_functions[] = {
	pyaboutdialog_functions,
	pyappmenuitem_functions,
	pyclock_functions,
	pycolorbutton_functions,
	pydecorbutton_functions,
	pydecortoggle_functions,
	pydialogs_functions,
	pyfilechooser_functions,
	pyframebox_functions,
	pygdk_extensions_functions,
	pygtk_extensions_functions,
	pygtk_style_functions,
	pygtktoxevent_functions,
	pyiconbutton_functions,
	pyicons_functions,
	pyicontheme_functions,
	pymenubutton_functions,
	pymovehandler_functions,
	pyscaled_image_functions,
	pysession_client_functions,
	pysystemtray_functions,
	pytogglebutton_functions,
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
	
	m = Py_InitModule("_gui", all_functions);
	
	pyclock_add_constants(m, "XFCE_");
	pydecorbutton_add_constants(m, "XFCE_");
	pyfilechooser_add_constants(m, "XFCE_");
	pygtktoxevent_add_constants(m, "XFCE_");
	pyicontheme_add_constants(m, "XFCE_");
	pysession_client_add_constants(m, "XFCE_");
	
	
	d = PyModule_GetDict(m);

	pyaboutdialog_register_classes (d);
	pyappmenuitem_register_classes (d);
	pyclock_register_classes (d);
	pycolorbutton_register_classes (d);
	pydecorbutton_register_classes (d);
	pydecortoggle_register_classes (d);
	pydialogs_register_classes (d);
	pyfilechooser_register_classes (d);
	pyframebox_register_classes (d);
	pygdk_extensions_register_classes (d);
	pygtk_extensions_register_classes (d);
	pygtk_style_register_classes (d);
	pygtktoxevent_register_classes (d);
	pyiconbutton_register_classes (d);
	pyicons_register_classes (d);
	pyicontheme_register_classes (d);
	pymenubutton_register_classes (d);
	pymovehandler_register_classes (d);
	pyscaled_image_register_classes (d);
	pysession_client_register_classes (d);
	pysystemtray_register_classes (d);
	pytogglebutton_register_classes (d);
}

DL_EXPORT(void)
init_gui(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();

	my_register1 ();
}


#if 0
DL_EXPORT(void)
init_gui(void)
{
	/* set the default python encoding to utf-8 */
	PyUnicode_SetDefaultEncoding("utf-8");

	init_pygobject ();
	Py_InitModule("gui", NULL);
	/*Py_InitModule3*/
	
	my_register ("aboutdialog",   pyaboutdialog_functions,    pyaboutdialog_register_classes);
	my_register ("appmenuitem",   pyappmenuitem_functions,    pyappmenuitem_register_classes);
	my_register ("clock",         pyclock_functions,          pyclock_register_classes);
	my_register ("colorbutton",   pycolorbutton_functions,    pycolorbutton_register_classes);
	my_register ("decorbutton",   pydecorbutton_functions,    pydecorbutton_register_classes);
	my_register ("decortoggle",   pydecortoggle_functions,    pydecortoggle_register_classes);
	my_register ("dialogs",       pydialogs_functions,        pydialogs_register_classes);
	my_register ("filechooser",   pyfilechooser_functions,    pyfilechooser_register_classes);
	my_register ("framebox",      pyframebox_functions,       pyframebox_register_classes);
	my_register ("gdkextensions", pygdk_extensions_functions, pygdk_extensions_register_classes);
	my_register ("gtkextensions", pygtk_extensions_functions, pygtk_extensions_register_classes);
	my_register ("gtkstyle",      pygtk_style_functions,      pygtk_style_register_classes);
	my_register ("gtktoxevent",   pygtktoxevent_functions,    pygtktoxevent_register_classes);
	my_register ("iconbutton",    pyiconbutton_functions,     pyiconbutton_register_classes);
	my_register ("icons",         pyicons_functions,          pyicons_register_classes);
	my_register ("icontheme",     pyicontheme_functions,      pyicontheme_register_classes);
	my_register ("menubutton",    pymenubutton_functions,     pymenubutton_register_classes);
	my_register ("movehandler",   pymovehandler_functions,    pymovehandler_register_classes);
	my_register ("scaledimage",   pyscaled_image_functions,   pyscaled_image_register_classes);
	my_register ("sessionclient", pysession_client_functions, pysession_client_register_classes);
	my_register ("systemtray",    pysystemtray_functions,     pysystemtray_register_classes);
	my_register ("togglebutton",  pytogglebutton_functions,   pytogglebutton_register_classes);
}
#endif
