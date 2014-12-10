// librsvg

struct _RsvgDimensionData {
    int width;
    int height;
    double em;
    double ex;
};

uint32_t rsvg_error_quark();
void rsvg_cleanup();
void rsvg_set_default_dpi(double);
void rsvg_set_default_dpi_x_y(double, double);
void rsvg_handle_set_dpi(RsvgHandle *, double);
void rsvg_handle_set_dpi_x_y(RsvgHandle *, double, double);
RsvgHandle *rsvg_handle_new();
RsvgHandle *rsvg_handle_new_with_flags(RsvgHandleFlags);
bool rsvg_handle_write(RsvgHandle *, const unsigned char *, size_t, GError **);
bool rsvg_handle_close(RsvgHandle *, GError **);
const char *rsvg_handle_get_base_uri(RsvgHandle *);
void rsvg_handle_set_base_uri(RsvgHandle *, const char *);
void rsvg_handle_get_dimensions(RsvgHandle *, RsvgDimensionData *);
bool rsvg_handle_get_dimensions_sub(RsvgHandle *, RsvgDimensionData *, const char *);
bool rsvg_handle_get_position_sub(RsvgHandle *, RsvgPositionData *, const char *);
bool rsvg_handle_has_sub(RsvgHandle *, const char *);
RsvgHandle *rsvg_handle_new_from_data(const void *, size_t, GError **);
RsvgHandle *rsvg_handle_new_from_file(const char *, GError **);

bool rsvg_handle_render_cairo(RsvgHandle *, cairo_t *);
bool rsvg_handle_render_cairo_sub(RsvgHandle *, cairo_t *, const char *);

