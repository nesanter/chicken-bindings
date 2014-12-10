// GtkMenuItem [incomplete]

GtkWidget *gtk_menu_item_new_with_label(const char *);
GtkWidget *gtk_menu_item_new_with_mnemonic(const char *);
void gtk_menu_item_set_submenu(GtkMenuItem *, GtkWidget *);

GtkWidget *gtk_separator_menu_item_new();

GtkWidget *gtk_check_menu_item_new_with_label(const char *);
GtkWidget *gtk_check_menu_item_new_with_mnemonic(const char *);
bool gtk_check_menu_item_get_active(GtkCheckMenuItem *);
void gtk_check_menu_item_set_active(GtkCheckMenuItem *, bool);

