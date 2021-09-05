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
* librsvg (librsvg-2.0)
* FluidSynth (fluidsynth)


## Hello World example (new)

To build the example you'll need to ensure the "bind" egg for chicken is
installed.  Then use `build.sh` to build the hello-world.scm. This will produce
a simple example.  (On ArchLinux, Chicken binaries are installed with a
chicken- prefix, if this isn't the case just modify the file -- or look at the
command above in the README, its just doing that.)

All of the headers contained in the bind-headers directory have been produced
by hand for compatibility with the bind egg. This means they are "fragile" and
won't reflect (or notice, produce an error, etc.) any differences between
themselves and the actual GTK, etc. library -- whether due to an error in their
creation or a change in the upstream library. Many of them do not have a
corresponding declaration for every part of the original libraries API. For
full functionality, it will be necessary to add to and potentially update each
copy of the bind header.

Right now, the "hello world" just includes some headers, declares a callback
with `define-external` suitable for use with a signal, creates a window, sets a
title, connects the handler, shows the window, and starts the main loop. This
should give a cursory idea of how this works. TODO: a slightly more
sophisticated example.

### Some Thoughts

Since the "bindings" versions of these headers have most of the type
information stripped away (i.e. `void *` for most opaque pointer types) casting
in the Scheme code is largely unnecessary.

Also note that the Scheme stuff is built on both the "foreign" module and the
"bind" egg.  Some understanding of C/C++ and the ability to read the APIs of
the libraries is likely necessary to extend what's being done here to the point
of usefulness.
