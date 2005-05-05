
/* Generated data (by glib-mkenums) */

#include <libxfcegui4/libxfcegui4.h>

/* enumerations from "xfce_clock.h" */
GType
xfce_clock_mode_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { XFCE_CLOCK_ANALOG, "XFCE_CLOCK_ANALOG", "analog" },
      { XFCE_CLOCK_DIGITAL, "XFCE_CLOCK_DIGITAL", "digital" },
      { XFCE_CLOCK_LEDS, "XFCE_CLOCK_LEDS", "leds" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("XfceClockMode", values);
  }
  return etype;
}

GType
xfce_clock_led_size_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { DIGIT_SMALL, "DIGIT_SMALL", "small" },
      { DIGIT_MEDIUM, "DIGIT_MEDIUM", "medium" },
      { DIGIT_LARGE, "DIGIT_LARGE", "large" },
      { DIGIT_HUGE, "DIGIT_HUGE", "huge" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("XfceClockLedSize", values);
  }
  return etype;
}


/* enumerations from "xfce_decorbutton.h" */
GType
xfce_decorbutton_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { XFCE_DECORBUTTON_CLOSE, "XFCE_DECORBUTTON_CLOSE", "close" },
      { XFCE_DECORBUTTON_HIDE, "XFCE_DECORBUTTON_HIDE", "hide" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("XfceDecorbuttonType", values);
  }
  return etype;
}


/* enumerations from "xfce-filechooser.h" */
GType
xfce_file_chooser_action_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { XFCE_FILE_CHOOSER_ACTION_OPEN, "XFCE_FILE_CHOOSER_ACTION_OPEN", "open" },
      { XFCE_FILE_CHOOSER_ACTION_SAVE, "XFCE_FILE_CHOOSER_ACTION_SAVE", "save" },
      { XFCE_FILE_CHOOSER_ACTION_SELECT_FOLDER, "XFCE_FILE_CHOOSER_ACTION_SELECT_FOLDER", "select-folder" },
      { XFCE_FILE_CHOOSER_ACTION_CREATE_FOLDER, "XFCE_FILE_CHOOSER_ACTION_CREATE_FOLDER", "create-folder" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("XfceFileChooserAction", values);
  }
  return etype;
}


/* enumerations from "xfce-icontheme.h" */
GType
xfce_icon_theme_category_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { XFCE_ICON_CATEGORY_UNKNOWN, "XFCE_ICON_CATEGORY_UNKNOWN", "icon-category-unknown" },
      { XFCE_ICON_CATEGORY_EDITOR, "XFCE_ICON_CATEGORY_EDITOR", "icon-category-editor" },
      { XFCE_ICON_CATEGORY_FILEMAN, "XFCE_ICON_CATEGORY_FILEMAN", "icon-category-fileman" },
      { XFCE_ICON_CATEGORY_UTILITY, "XFCE_ICON_CATEGORY_UTILITY", "icon-category-utility" },
      { XFCE_ICON_CATEGORY_GAME, "XFCE_ICON_CATEGORY_GAME", "icon-category-game" },
      { XFCE_ICON_CATEGORY_HELP, "XFCE_ICON_CATEGORY_HELP", "icon-category-help" },
      { XFCE_ICON_CATEGORY_MULTIMEDIA, "XFCE_ICON_CATEGORY_MULTIMEDIA", "icon-category-multimedia" },
      { XFCE_ICON_CATEGORY_NETWORK, "XFCE_ICON_CATEGORY_NETWORK", "icon-category-network" },
      { XFCE_ICON_CATEGORY_GRAPHICS, "XFCE_ICON_CATEGORY_GRAPHICS", "icon-category-graphics" },
      { XFCE_ICON_CATEGORY_PRINTER, "XFCE_ICON_CATEGORY_PRINTER", "icon-category-printer" },
      { XFCE_ICON_CATEGORY_PRODUCTIVITY, "XFCE_ICON_CATEGORY_PRODUCTIVITY", "icon-category-productivity" },
      { XFCE_ICON_CATEGORY_SOUND, "XFCE_ICON_CATEGORY_SOUND", "icon-category-sound" },
      { XFCE_ICON_CATEGORY_TERMINAL, "XFCE_ICON_CATEGORY_TERMINAL", "icon-category-terminal" },
      { XFCE_ICON_CATEGORY_DEVELOPMENT, "XFCE_ICON_CATEGORY_DEVELOPMENT", "icon-category-development" },
      { XFCE_ICON_CATEGORY_SETTINGS, "XFCE_ICON_CATEGORY_SETTINGS", "icon-category-settings" },
      { XFCE_ICON_CATEGORY_SYSTEM, "XFCE_ICON_CATEGORY_SYSTEM", "icon-category-system" },
      { XFCE_ICON_CATEGORY_WINE, "XFCE_ICON_CATEGORY_WINE", "icon-category-wine" },
      { XFCE_N_BUILTIN_ICON_CATEGORIES, "XFCE_N_BUILTIN_ICON_CATEGORIES", "n-builtin-icon-categories" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("XfceIconThemeCategory", values);
  }
  return etype;
}


/* Generated data ends here */

