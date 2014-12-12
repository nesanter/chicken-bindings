// GtkTextBuffer [incomplete]

GtkTextBuffer *gtk_text_buffer_new(GtkTextTagTable *);
void gtk_text_buffer_insert(GtkTextBuffer *, GtkTextIter *, const char *, int);
void gtk_text_buffer_set_text(GtkTextBuffer *, const char *, unsigned int);
char *gtk_text_buffer_get_text(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *, bool);
GtkTextMark *gtk_text_buffer_create_mark(GtkTextBuffer *, const char *, const GtkTextIter *, bool);
void gtk_text_buffer_delete_mark(GtkTextBuffer *, GtkTextMark *);
void gtk_text_buffer_apply_tag_by_name(GtkTextBuffer *, const char *, const GtkTextIter *, const GtkTextIter *);
void gtk_text_buffer_remove_tag_by_name(GtkTextBuffer *, const char *, const GtkTextIter *, const GtkTextIter *);
void gtk_text_buffer_remove_all_tags(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *);
void gtk_text_buffer_get_iter_at_mark(GtkTextBuffer *, GtkTextIter *, GtkTextMark *);
void gtk_text_buffer_get_start_iter(GtkTextBuffer *, GtkTextIter *);
void gtk_text_buffer_get_end_iter(GtkTextBuffer *, GtkTextIter *);
