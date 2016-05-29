#ifndef DEBUG_H
#define DEBUG_H

#include <stdlib.h>

//#define malloc  malloc_debug
//#define free    free_debug


int debug_init();
void * malloc_debug(size_t size);
void  free_debug(void * p);

#endif
