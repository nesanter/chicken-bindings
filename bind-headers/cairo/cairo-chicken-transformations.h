// Cairo transformations

void cairo_translate(cairo_t *, double, double);
void cairo_scale(cairo_t *, double, double);
void cairo_rotate(cairo_t *, double);
void cairo_transform(cairo_t *, const cairo_matrix_t *);
void cairo_set_matrix(cairo_t *, const cairo_matrix_t *);
void cairo_get_matrix(cairo_t *, cairo_matrix_t *);
void cairo_identity_matrix(cairo_t *);
void cairo_user_to_device(cairo_t *, ___inout double *, ___inout double *);
void cairo_user_to_device_distance(cairo_t *, ___inout double *, ___inout double *);
void cairo_device_to_user(cairo_t *, ___inout double *, ___inout double *);
void cairo_device_to_user_distance(cairo_t *, ___inout double *, ___inout double *);
