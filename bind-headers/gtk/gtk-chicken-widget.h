// GtkWidget [incomplete]

void gtk_widget_destroy(GtkWidget *);
___safe void gtk_widget_show(GtkWidget *);
___safe void gtk_widget_show_all(GtkWidget *);
void gtk_widget_set_sensitive(GtkWidget *, bool);
bool gtk_widget_get_sensitive(GtkWidget *);
void gtk_widget_override_font(GtkWidget *, const PangoFontDescription *);
void gtk_widget_hide(GtkWidget *);
GdkWindow *gtk_widget_get_window(GtkWidget *);
void gtk_widget_set_app_paintable(GtkWidget *, bool);
void gtk_widget_set_size_request(GtkWidget *, int, int);
void gtk_widget_queue_draw(GtkWidget *);
