// GtkPaned

GtkWidget *gtk_paned_new(GtkOrientation);
void gtk_paned_add1(GtkPaned *, GtkWidget *);
void gtk_paned_add2(GtkPaned *, GtkWidget *);
void gtk_paned_pack1(GtkPaned *, GtkWidget *, bool, bool);
void gtk_paned_pack2(GtkPaned *, GtkWidget *, bool, bool);
GtkWidget *gtk_paned_get_child1(GtkPaned *);
GtkWidget *gtk_paned_get_child2(GtkPaned *);
void gtk_paned_set_position(GtkPaned *, int);
int gtk_paned_get_position(GtkPaned *);
GdkWindow *gtk_paned_get_handle_window(GtkPaned *);
