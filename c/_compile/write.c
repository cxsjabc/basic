#include <stdio.h>
#include <unistd.h>

int main()
{
	size_t ret;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wimplicit-function-declaration"
	ret = write(1, "hello", 5);  // stdout
#pragma clang diagnostic pop

	printf("\nret:%lu\n", ret);	

    return 0;
}
