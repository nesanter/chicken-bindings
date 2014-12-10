// GtkDialog [incomplete]

GtkWidget *gtk_dialog_new();
GtkWidget *gtk_dialog_add_button(GtkDialog *, char *, int);
void gtk_dialog_set_default_response(GtkDialog *, int);
void gtk_dialog_set_response_sensitive(GtkDialog *, int, int);
GtkWidget *gtk_dialog_get_content_area(GtkDialog *);
int gtk_dialog_run(GtkDialog *);
