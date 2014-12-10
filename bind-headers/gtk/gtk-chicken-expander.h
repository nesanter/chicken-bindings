// GtkExpander

GtkWidget *gtk_expander_new(const char *);
GtkWidget *gtk_expander_new_with_mnemonic(const char *);
void gtk_expander_set_expanded(GtkExpander *, bool);
bool gtk_expander_get_expanded(GtkExpander *);
void gtk_expander_set_spacing(GtkExpander *, int);
int gtk_expander_get_spacing(GtkExpander *);
void gtk_expander_set_label(GtkExpander *, const char *);
const char *gtk_expander_get_label(GtkExpander *);
void gtk_expander_set_use_underline(GtkExpander *, bool);
bool gtk_expander_get_use_underline(GtkExpander *);
void gtk_expander_set_use_markup(GtkExpander *, bool);
bool gtk_expander_get_use_markup(GtkExpander *);
void gtk_expander_set_label_widget(GtkExpander *, GtkWidget *);
GtkWidget *gtk_expander_get_label_widget(GtkExpander *);
void gtk_expander_set_label_fill(GtkExpander *, bool);
bool gtk_expander_get_label_fill(GtkExpander *);
void gtk_expander_set_resize_toplevel(GtkExpander *, bool);
bool gtk_expander_get_resize_toplevel(GtkExpander *);
