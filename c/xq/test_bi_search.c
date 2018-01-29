#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <assert.h> 

#include "common_local.h"
#include "bi_search.h"

#ifndef LOG_HERE
#define LOG_HERE	printf("[%s@%d]\n", __func__, __LINE__);
#endif

void	test_bi_search()
{
#define 	SIZE	 10	
	int a[SIZE];
	int v;
	int k;

	gen_basic_sorted_arr(a, SIZE, 1, 1000);
	print_arr(a, SIZE);	

	while(1) {
		int ret = scanf("%d", &v);
		if(ret < 1)
			break;
		k = bi_search(a, v, 0, SIZE - 1);	
		printf("%d\n", k);	
	}
}

void	test_bi_search_iter()
{
#define 	SIZE	 10	
	int a[SIZE];
	int v;
	int k;

	gen_basic_sorted_arr(a, SIZE, 1, 1000);
	print_arr(a, SIZE);	

	while(1) {
		int ret = scanf("%d", &v);
		if(ret < 1)
			break;
		k = bi_search_iter(a, v, 0, SIZE - 1);	
		printf("%d\n", k);	
	}
}

int main()
{
	// test_bi_search();
	test_bi_search_iter();

	return 0;
}
