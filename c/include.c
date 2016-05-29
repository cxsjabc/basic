#include <stdio.h>
//#include <eyu.h>

#define XX "eyu.h"
#include XX

#define add(x, y) x+y


#if 1
int g_static;
#endif

#if 0
int g_static1;
#endif

int main()
{
	add(1, 5);
    printf("hello eyu\n");
    return 0;
}
