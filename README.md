Bindings, along with toplevel header are in bind-headers

Example scheme code to import bindings is in chicken-bindings.scm, include it with `(include "chicken-bindings")`

Build using the Chicken scheme compiler (`csc`) and `pkg-config`:

```
csc $SRCS -C "$(pkg-config --cflags $PKGS)" -L "$(pkg-config --libs $PKGS)" -X bind
```

Packages used:
* GTK+ 3 (gtk+-3.0)
* GtkSourceView 3 (gtksourceview-3.0)
* Poppler (poppler-glib)
* Graphviz (libcgraph & libgvc)
* librsvg

