enum snudown_renderer_mode {
	RENDERER_USERTEXT = 0,
	RENDERER_WIKI,
	RENDERER_COUNT
};

const char*
snudown_md(const char* text, size_t size, int nofollow, char* target, char* toc_id_prefix, int renderer, int enable_toc);
void initsnudown(void);