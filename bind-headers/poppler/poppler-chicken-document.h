// PopplerDocument [incomplete]

PopplerDocument *poppler_document_new_from_file(const char *, const char *, GError **);
PopplerDocument *poppler_document_new_from_data(void *, int, const char *, GError **);
int poppler_document_get_n_pages(PopplerDocument *);
PopplerPage *poppler_document_get_page(PopplerDocument *, int);
