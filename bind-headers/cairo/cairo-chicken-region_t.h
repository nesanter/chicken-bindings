// cairo_region_t

cairo_region_t *cairo_region_create();
cairo_region_t *cairo_region_create_rectangle(const cairo_rectangle_int_t *);
cairo_region_t *cairo_region_create_rectangles(const cairo_rectangle_int_t *, int);
cairo_region_t *cairo_region_copy(const cairo_region_t *);
cairo_region_t *cairo_region_reference(cairo_region_t *);
void cairo_region_destroy(cairo_region_t *);
cairo_status_t cairo_region_status(const cairo_region_t *);
void cairo_region_get_extents(const cairo_region_t *, cairo_rectangle_int_t *);
int cairo_region_num_rectangles(const cairo_region_t *);
void cairo_region_get_rectangle(const cairo_region_t *, int, cairo_rectangle_int_t *);
bool cairo_region_is_empty(const cairo_region_t *);
bool cairo_region_contains_point(const cairo_region_t *, int, int);
cairo_region_overlap_t cairo_region_contains_rectangle(const cairo_region_t *, const cairo_rectangle_int_t *);
bool cairo_region_equal(const cairo_region_t *, const cairo_region_t *);
void cairo_region_translate(cairo_region_t *, int, int);
cairo_status_t cairo_region_intersect(cairo_region_t *, const cairo_region_t *);
cairo_status_t cairo_region_intersect_rectangle(cairo_region_t *, const cairo_rectangle_int_t *);
cairo_status_t cairo_region_subtract(cairo_region_t *, const cairo_region_t *);
cairo_status_t cairo_region_subtract_rectangle(cairo_region_t *, const cairo_rectangle_int_t *);
cairo_status_t cairo_region_union(cairo_region_t *, const cairo_region_t *);
cairo_status_t cairo_region_union_rectangle(cairo_region_t *, const cairo_rectangle_int_t *);
cairo_status_t cairo_region_xor(cairo_region_t *, const cairo_region_t *);
cairo_status_t cairo_region_xor_rectangle(cairo_region_t *, const cairo_rectangle_int_t *);
