#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#if 0
attribute((noinline)) int add(int a, int b) 	// build error
{
	return a + b;
}
#endif

struct person
{
	int age;
	char name[0];	// c89: warning: zero size arrays are an extension [-Wzero-length-array]
};

void switch_test(int i)
{
	switch(i) {
		case 1 ... 3:  // use of GNU case range extension [-Wgnu-case-range]
		break;
	}
}

// comment.

int main(int argc, char *argv[])
{
	char *s = "hello" ", my";

    printf("%s\n", s);
    return 0;
}
