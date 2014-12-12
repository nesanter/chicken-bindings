(require-extension bind)

(foreign-declare
  "#include <glib.h>"
  "#include <gtk/gtk.h>"
  "#include <gdk/gdk.h>"
  "#include <gtksourceview/gtksource.h>"
  "#include <cairo.h>"
  "#include <poppler.h>"
  "#include <graphviz/cgraph.h>"
  "#include <graphviz/gvc.h>"
  "#include <librsvg/rsvg.h>")

(bind-file "bind-headers/all-headers.h")

(foreign-code "gtk_init(&C_main_argc, &C_main_argv);")

