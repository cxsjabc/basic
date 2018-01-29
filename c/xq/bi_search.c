/*
* Copyright by xichen(Xi.chen)  511272827@qq.com
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <assert.h> 

#ifdef _USE_COMMON_SRC
#define	LOG_LEVEL		LOG_LEVEL_VERBOSE
#include "common_local.h"
#endif

int		bi_search(int a[], int v, int s, int e)
{
	int m;

	if(s > e)
		return -1;

	m = s + (e - s) / 2;
	if(a[m] == v)
		return m;
	else if(a[m] > v) {
		return bi_search(a, v, s, m - 1);
	}
	else
		return bi_search(a, v, m + 1, e);
}

int		bi_search_iter(int a[], int v, int s, int e)
{
	int m;

	while(s <= e) {
		m = s + (e - s) / 2;
		if(a[m] == v)
			return m;
		else if(a[m] > v)
			e = m - 1;
		else
			s = m + 1;
	}
	return -1;
}
