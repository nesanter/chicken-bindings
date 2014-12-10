// GtkTreeStore [incomplete]

GtkTreeStore *gtk_tree_store_newv(int, GType *);
void gtk_tree_store_append(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
void gtk_tree_store_set_valuesv(GtkTreeStore *, GtkTreeIter *, int *, GValue *, int);
void gtk_tree_store_set_value(GtkTreeStore *, GtkTreeIter *, int, GValue *);

