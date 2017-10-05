#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	float f;
	double d;
	char c;
	char buf[128];

#if 0
	scanf("%f", &f);
	printf("%f\n", f);	
	scanf("%f", &d);	// format specifies type 'float *' but the argument has type 'double *' [-Wformat]	 -> should use %lf
	printf("%f\n", d);	

	scanf("%g", &d);	// format specifies type 'float *' but the argument has type 'double *' [-Wformat]   -> should use %lg
	printf("%f\n", d);	

	scanf("%e", &d);  -> should use %le	
	printf("%f\n", d);	
#endif

	// scanf("%c", &c);	// %c can't ignore blank characters.
	// putchar(c);	
	
	// scanf("%%");	// input: %

	// scanf("%[a-z]", buf);	// accept a-z characters
	// PS(buf);

	scanf("%[^a-z]", buf);	// accept non a-z characters
	PS(buf);

	// scanf("%[^a-zA-Z]", buf);	// accept non a-z A-Z characters
	// PS(buf);
		
    return 0;
}
