// --- gtksourceview3 ---
typedef enum
{
	GTK_SOURCE_SMART_HOME_END_DISABLED,
	GTK_SOURCE_SMART_HOME_END_BEFORE,
	GTK_SOURCE_SMART_HOME_END_AFTER,
	GTK_SOURCE_SMART_HOME_END_ALWAYS
} GtkSourceSmartHomeEndType;

typedef enum
{
	GTK_SOURCE_DRAW_SPACES_SPACE,
	GTK_SOURCE_DRAW_SPACES_TAB,
	GTK_SOURCE_DRAW_SPACES_NEWLINE,
	GTK_SOURCE_DRAW_SPACES_NBSP,
	GTK_SOURCE_DRAW_SPACES_LEADING,
	GTK_SOURCE_DRAW_SPACES_TEXT,
	GTK_SOURCE_DRAW_SPACES_TRAILING,
	GTK_SOURCE_DRAW_SPACES_ALL
} GtkSourceDrawSpacesFlags;

typedef enum
{
  /*< private >*/
  GTK_TEXT_WINDOW_PRIVATE,
  /*< public >*/
  GTK_TEXT_WINDOW_WIDGET,
  GTK_TEXT_WINDOW_TEXT,
  GTK_TEXT_WINDOW_LEFT,
  GTK_TEXT_WINDOW_RIGHT,
  GTK_TEXT_WINDOW_TOP,
  GTK_TEXT_WINDOW_BOTTOM
} GtkTextWindowType;

GtkWidget *gtk_source_view_new();
GtkWidget *gtk_source_view_new_with_buffer(GtkSourceBuffer *);

void gtk_source_view_set_auto_indent(GtkSourceView *, bool);
bool gtk_source_view_get_auto_indent(GtkSourceView *);
void gtk_source_view_set_indent_on_tab(GtkSourceView *, bool);
bool gtk_source_view_get_indent_on_tab(GtkSourceView *);
void gtk_source_view_set_insert_spaces_instead_of_tabs(GtkSourceView *, bool);
bool gtk_source_view_get_insert_spaces_instead_of_tabs(GtkSourceView *);
void gtk_source_view_set_smart_home_end(GtkSourceView *, GtkSourceSmartHomeEndType);
GtkSourceSmartHomeEndType gtk_source_view_get_smart_home_end (GtkSourceView *);
void gtk_source_view_set_mark_attributes(GtkSourceView *, const char *category, GtkSourceMarkAttributes *, int);
GtkSourceMarkAttributes *gtk_source_view_get_mark_attributes(GtkSourceView *, const char *, int *);
void gtk_source_view_set_highlight_current_line(GtkSourceView *, bool);
bool gtk_source_view_get_highlight_current_line(GtkSourceView *);
void gtk_source_view_set_show_line_marks(GtkSourceView *, bool);
bool gtk_source_view_get_show_line_marks(GtkSourceView *);
void gtk_source_view_set_show_line_numbers(GtkSourceView *, bool);
bool gtk_source_view_get_show_line_numbers(GtkSourceView *);
void gtk_source_view_set_show_right_margin(GtkSourceView *, bool);
bool gtk_source_view_get_show_right_margin (GtkSourceView *);
void gtk_source_view_set_right_margin_position(GtkSourceView *, unsigned int);
unsigned int gtk_source_view_get_right_margin_position(GtkSourceView *);
void gtk_source_view_set_tab_width(GtkSourceView *, unsigned int);
unsigned int gtk_source_view_get_tab_width(GtkSourceView *);
void gtk_source_view_set_draw_spaces(GtkSourceView *, GtkSourceDrawSpacesFlags);
GtkSourceCompletion *gtk_source_view_get_completion(GtkSourceView *);
GtkSourceGutter *gtk_source_view_get_gutter(GtkSourceView *, GtkTextWindowType);
unsigned int gtk_source_view_get_visual_column(GtkSourceView *, const GtkTextIter *);

GtkWidget *gtk_source_buffer_new(GtkTextTagTable *);
void gtk_source_buffer_set_language(GtkSourceBuffer *, GtkSourceLanguage *);

GtkSourceLanguageManager *gtk_source_language_manager_get_default();

const char **gtk_source_language_manager_get_language_ids(GtkSourceLanguageManager *);
GtkSourceLangauge *gtk_source_language_manager_get_language(GtkSourceLanguageManager *, const char *);


