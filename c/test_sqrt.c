#include <stdio.h>
#include <math.h>

int main()
{
	double d;

	while(1) {
		double t;
		scanf("%lf", &d);
		t = sqrt(d);
		if(t > 1)
			printf("> 1: t: %lf, d:%lf\n", t, d);
		else if(t == 1)	 // d: 0.99999999999999999999 or 1.0000000000000001, t == 1.0
			printf("t:%lf, d:%lf\n", t, d);
	}

    return 0;
}
