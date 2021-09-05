(require-extension bind)

(foreign-declare
  "#include <glib.h>"
  "#include <gtk/gtk.h>")

(bind-file "bind-headers/all-gtk-example.h")

(foreign-code "gtk_init(&C_main_argc, &C_main_argv);")

(define-external (on_quit ((c-pointer void) data)) void
    (gtk_main_quit))

(define win (gtk_window_new 0))
(gtk_window_set_title win "hello world")
(g_signal_connect win "destroy" #$on_quit #f)
(gtk_widget_show_all win)

(gtk_main)
