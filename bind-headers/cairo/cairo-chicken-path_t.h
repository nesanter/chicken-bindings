// cairo_path_t

cairo_path_t *cairo_copy_path(cairo_t *);
cairo_path_t *cairo_copy_path_flat(cairo_t *);
void cairo_path_destroy(cairo_path_t *);
void cairo_append_path(cairo_t *, const cairo_path_t *);
bool cairo_has_current_point(cairo_t *);
void cairo_get_current_point(cairo_t *, ___out double *, ___out double *);
void cairo_new_path(cairo_t *);
void cairo_new_sub_path(cairo_t *);
void cairo_close_path(cairo_t *);
void cairo_arc(cairo_t *, double, double, double, double, double);
void cairo_arc_negative(cairo_t *, double, double, double, double, double);
void cairo_curve_to(cairo_t *, double, double, double, double, double, double);
void cairo_line_to(cairo_t *, double, double);
void cairo_move_to(cairo_t *, double, double);
void cairo_rectangle(cairo_t *, double, double, double, double);
void cairo_glyph_path(cairo_t *, const cairo_glyph_t *, int);
void cairo_text_path(cairo_t *, const char *);
void cairo_rel_curve_to(cairo_t *, double, double, double, double, double, double);
void cairo_rel_line_to(cairo_t *, double, double);
void cairo_rel_move_to(cairo_t *, double, double);
void cairo_path_extents(cairo_t *, double *, double *, double *, double *);
