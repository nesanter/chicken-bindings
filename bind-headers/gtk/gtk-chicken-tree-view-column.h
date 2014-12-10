// GtkTreeViewColumn [incomplete]

GtkTreeViewColumn *gtk_tree_view_column_new();

void gtk_tree_view_column_pack_start(GtkTreeViewColumn *, GtkCellRenderer *, bool);
void gtk_tree_view_column_pack_end(GtkTreeViewColumn *, GtkCellRenderer *, bool);
void gtk_tree_view_column_set_title(GtkTreeViewColumn *, const char *);
void gtk_tree_view_column_add_attribute(GtkTreeViewColumn *, GtkCellRenderer *, const char *, int);

