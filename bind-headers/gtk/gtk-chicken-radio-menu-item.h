// GtkRadioMenuItem

GtkWidget *gtk_radio_menu_item_new(GSList *);
GtkWidget *gtk_radio_menu_item_new_with_label(GSList *, const char *);
GtkWidget *gtk_radio_menu_item_new_with_mnemonic(GSList *, const char *);
GtkWidget *gtk_radio_menu_item_new_from_widget(GtkRadioMenuItem *);
GtkWidget *gtk_radio_menu_item_new_with_label_from_widget(GtkRadioMenuItem *, const char *);
GtkWidget *gtk_radio_menu_item_new_with_mnemonic_from_widget(GtkRadioMenuItem *, const char *);
void gtk_radio_menu_item_set_group(GtkRadioMenuItem *, GSList *);
GSList *gtk_radio_menu_item_get_group(GtkRadioMenuItem *);

