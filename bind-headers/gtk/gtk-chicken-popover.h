// GtkPopover

GtkWidget *gtk_popover_new(GtkWidget *);
GtkWidget *gtk_popover_new_from_model(GtkWidget *, GMenuModel *);
void gtk_popover_bind_model(GtkPopover *, GMenuModel *, const char *);
void gtk_popover_set_relative_to(GtkPopover *, GtkWidget *);
GtkWidget *gtk_popover_get_relative_to(GtkPopover *);
void gtk_popover_set_pointing_to(GtkPopover *, const GdkRectangle *);
bool gtk_popover_get_pointing_to(GtkPopover *, GdkRectangle *);
void gtk_popover_set_position(GtkPopover *, GtkPositionType);
GtkPositionType gtk_popover_get_position(GtkPopover *);
void gtk_popover_set_modal(GtkPopover *, bool);
bool gtk_popover_get_modal(GtkPopover *);
