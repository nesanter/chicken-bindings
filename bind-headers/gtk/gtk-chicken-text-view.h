// GtkTextView [incomplete]

GtkWidget *gtk_text_view_new();
GtkTextBuffer *gtk_text_view_get_buffer(GtkTextView *);
void gtk_text_view_set_editable(GtkTextView *, bool);
bool gtk_text_view_get_editable(GtkTextView *);
void gtk_text_view_set_cursor_visible(GtkTextView *, bool);
