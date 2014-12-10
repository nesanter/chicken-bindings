// cairo_matrix_t

void cairo_matrix_init(cairo_matrix_t *, double, double, double, double, double, double);
void cairo_matrix_init_identity(cairo_matrix_t *);
void cairo_matrix_init_translate(cairo_matrix_t *, double, double);
void cairo_matrix_init_scale(cairo_matrix_t *, double, double);
void cairo_matrix_init_rotate(cairo_matrix_t *, double);
void cairo_matrix_translate(cairo_matrix_t *, double, double);
void cairo_matrix_scale(cairo_matrix_t *, double, double);
void cairo_matrix_rotate(cairo_matrix_t *, double);
cairo_status_t cairo_matrix_invert(cairo_matrix_t *);
void cairo_matrix_multiply(cairo_matrix_t *, const cairo_matrix_t *, const cairo_matrix_t *);
void cairo_matrix_transform_distance(const cairo_matrix_t *, ___inout double *, ___inout double *);
void cairo_matrix_transform_point(const cairo_matrix_t *, ___inout double *, ___inout double *);
