// Graphviz gvc [incomplete]

GVC_t *gvContext();
int gvLayout(GVC_t *, graph_t *, char *);
int gvRender(GVC_t *, graph_t *, char *, FILE *);
int gvRenderFilename(GVC_t *, graph_t *, char *, char *);
int gvRenderContext(GVC_t *, graph_t *, const char *, void *);
int gvRenderData(GVC_t *, graph_t *, const char *, char **, ___out unsigned int *);
void gvFreeRenderData(char *);
int gvFreeLayout(GVC_t *, graph_t *);
int gvFreeContext(GVC_t *);
