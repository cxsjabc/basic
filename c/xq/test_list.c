#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <assert.h> 

#include "list.h"

void test_list()
{
	PListHead plh;
	int i = 1;
	PListNode node;

	list_create(&plh);
	
	while(i < 5) {
		assert(list_insert(&plh, NULL, i) == 0);
		++i;
	}

	list_show(plh);

	list_remove(&plh, NULL);
	list_show(plh);

	node = list_get_node(plh, 1);
	printf("node:%p value:%d\n", node, list_get_node_value(plh, 1));

	list_remove(&plh, node);
	list_show(plh);

	list_destroy(&plh);

	list_create_by_input(&plh);
	list_show(plh);
	list_destroy(&plh);
}

int main()
{
	test_list();

	return 0;
}
