#include "debug.h"

//#include <malloc.h>

typedef struct
{
	void *p;
	size_t size;
	int	ref_cnt;
}BUF_INFO;

static BUF_INFO g_buf_infos[20];
static int g_cur_buf_cnt = 0;

int debug_init()
{
	return 0;
}


void * malloc_debug(size_t size)
{
	void *p = malloc(size);
	if(!p)
		return NULL;
	if(g_cur_buf_cnt < 20)
	{
		printf("malloc a buffer: %#x, size:%u\n", p, size);
		g_buf_infos[g_cur_buf_cnt].p = p;
		g_buf_infos[g_cur_buf_cnt].size = size;
		g_buf_infos[g_cur_buf_cnt].ref_cnt = 1;
		++g_cur_buf_cnt;
	}
	else {
		free(p);
		return NULL;
	}
	return p;
}
void  free_debug(void * p)
{
	int i = 0;
	for(; i < 20; ++i)
	{
		if(g_buf_infos[i].p == p){
			printf("free a buffer:%#x, size:%u\n", p, g_buf_infos[i].size);
			free(p);
			g_buf_infos[i].p = NULL;
			return;
		}else {
			continue;
		}
	}
	printf("free bad buffer\n");	
}
