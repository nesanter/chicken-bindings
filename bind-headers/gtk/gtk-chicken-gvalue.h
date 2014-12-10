// GValue [incomplete]

const int G_TYPE_STRING;
const int G_TYPE_BOOLEAN;
const int G_TYPE_FLOAT;

GValue *g_value_init(GValue *, unsigned long);
void g_value_set_string(GValue *, const char *);
void g_value_set_boolean(GValue *, bool);
void g_value_set_float(GValue *, float);

const char *g_value_get_string(const GValue *);




