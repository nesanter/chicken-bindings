// GValue [incomplete]

const int G_TYPE_INVALID;
const int G_TYPE_NONE;
const int G_TYPE_INTERFACE;
const int G_TYPE_CHAR;
const int G_TYPE_UCHAR;
const int G_TYPE_BOOLEAN;
const int G_TYPE_INT;
const int G_TYPE_UINT;
const int G_TYPE_LONG;
const int G_TYPE_ULONG;
const int G_TYPE_INT64;
const int G_TYPE_UINT64;
const int G_TYPE_ENUM;
const int G_TYPE_FLAGS;
const int G_TYPE_FLOAT;
const int G_TYPE_DOUBLE;
const int G_TYPE_STRING;
const int G_TYPE_POINTER;
const int G_TYPE_BOXED;
const int G_TYPE_PARAM;
const int G_TYPE_OBJECT;
const int G_TYPE_GTYPE;
const int G_TYPE_VARIANT;

GValue *g_value_init(GValue *, unsigned long);

void g_value_set_boolean(GValue *, bool);
bool g_value_get_boolean(const GValue *);
char g_value_get_schar(const GValue *);
void g_value_set_schar(GValue *, char);
void g_value_set_uchar(GValue *, unsigned char);
unsigned char g_value_get_uchar(const GValue *);
void g_value_set_int(GValue *, int);
int g_value_get_int(const GValue *);
void g_value_set_uint(GValue *, unsigned int);
unsigned int g_value_get_uint(const GValue *);
void g_value_set_long(GValue *, long);
long g_value_get_long(const GValue *);
void g_value_set_ulong(GValue *, unsigned long);
unsigned logn g_value_get_ulong(const GValue *);
void g_value_set_int64(GValue *, int64_t);
int64_t g_value_get_int64(const GValue *);
void g_value_set_uint64(GValue *, uint64_t);
uint64_t g_value_get_uint64(GValue *, uint64_t);
void g_value_set_float(GValue *, float);
float g_value_get_float(const GValue *);
void g_value_set_double(GValue *, double);
double g_value_get_double(const GValue *);

void g_value_set_string(GValue *, const char *);
void g_value_set_boolean(GValue *, bool);
void g_value_set_float(GValue *, float);

const char *g_value_get_string(const GValue *);




