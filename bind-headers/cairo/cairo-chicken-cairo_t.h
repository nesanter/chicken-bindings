// cairo_t

cairo_t *cairo_create(cairo_surface_t *);
cairo_t *cairo_reference(cairo_t *);
void cairo_destroy(cairo_t *);
cairo_status_t cairo_status(cairo_t *);
void cairo_save(cairo_t *);
void cairo_restore(cairo_t *);
cairo_surface_t *cairo_get_target(cairo_t *);
void cairo_push_group(cairo_t *);
void cairo_push_group_with_content(cairo_t *, cairo_content_t);
cairo_pattern_t *cairo_pop_group(cairo_t *);
void cairo_pop_group_to_source(cairo_t *);
cairo_surface_t *cairo_get_group_target(cairo_t *);
void cairo_set_source_rgb(cairo_t *, double, double, double);
void cairo_set_source_rgba(cairo_t *, double, double, double, double);
void cairo_set_source(cairo_t *, cairo_pattern_t *);
void cairo_set_source_surface(cairo_t *, cairo_surface_t *, double, double);
cairo_pattern_t *cairo_get_source(cairo_t *);
void cairo_set_antialias(cairo_t *, cairo_antialias_t);
cairo_antialias_t cairo_get_antialias(cairo_t *);
void cairo_set_dash(cairo_t *, const double *, int, double);
int cairo_get_dash_count(cairo_t *);
void cairo_get_dash(cairo_t *, ___out double *, ___out double *);
void cairo_set_fill_rule(cairo_t *, cairo_fill_rule_t);
cairo_fill_rule_t cairo_get_fill_rule(cairo_t *);
void cairo_set_line_cap(cairo_t *, cairo_line_cap_t);
cairo_line_cap_t cairo_get_line_cap(cairo_t *);
void cairo_set_line_join(cairo_t *, cairo_line_join_t);
cairo_line_join_t cairo_get_line_join(cairo_t *);
void cairo_set_line_width(cairo_t *, double);
double cairo_get_line_width(cairo_t *);
void cairo_set_miter_limit(cairo_t *, double);
double cairo_get_miter_limit(cairo_t *);
void cairo_set_operator(cairo_t *, cairo_operator_t);
cairo_operator_t cairo_get_operator(cairo_t *);
void cairo_set_tolerance(cairo_t *, double);
void cairo_clip(cairo_t *);
void cairo_clip_preserve(cairo_t *);
void cairo_clip_extents(cairo_t *, ___out double *, ___out double *, ___out double *, ___out double *);
bool cairo_in_clip(cairo_t *, double, double);
void cairo_reset_clip(cairo_t *);
void cairo_rectangle_list_destroy(cairo_rectangle_list_t *);
cairo_rectangle_list_t *cairo_copy_clip_rectangle_list(cairo_t *);
void cairo_fill(cairo_t *);
void cairo_fill_preserve(cairo_t *);
void cairo_fill_extents(cairo_t *, ___out double *, ___out double *, ___out double *, ___out double *);
bool cairo_in_fill(cairo_t *, double, double);
void cairo_mask(cairo_t *, cairo_pattern_t *);
void cairo_mask_surface(cairo_t *, cairo_surface_t *, double, double);
void cairo_paint(cairo_t *);
void cairo_paint_with_alpha(cairo_t *, double);
void cairo_stroke(cairo_t *);
void cairo_stroke_preserve(cairo_t *);
void cairo_stroke_extents(cairo_t *, ___out double *, ___out double *, ___out double *, ___out double *);
bool cairo_in_stroke(cairo_t *, double x, double y);
void cairo_copy_page(cairo_t *);
void cairo_show_page(cairo_t *);
unsigned int cairo_get_reference_count(cairo_t *);
cairo_status_t cairo_set_user_data(cairo_t *, const cairo_user_data_key_t *, void *, cairo_destroy_func_t);
void *cairo_get_user_data(cairo_t *, const cairo_user_data_key_t *);
