#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "list.h"


PListHead	list_create(PListHead *l)
{
	*l = NULL;
	return NULL;
}

PListHead	list_create_by_input(PListHead *plh)
{
	int v;
	PListNode node = NULL;
	int ret;

	*plh = NULL;

	while((ret = scanf("%d", &v)) != EOF) {
		int r;
		if(ret == 0) {	// flush stdin for unmatched input data
			char c;
			while((c = getchar()) != '\n') 
				;
			continue;
		}
		
		// insert the data 
		r = list_insert(plh, node, v);
		if(r != 0) {
			printf("insert node:%d error!\n", v);
			break;
		}

		// update the next insert node pointer
		if(node == NULL)
			node = *plh;
		else
			node = node->next;
	}	
	
	// means stdin error, then destory the list and return NULL
	if(ferror(stdin)) {
		list_destroy(plh);
	}
	return *plh;
}

int		list_insert(PListHead *lh, PListNode pln, int v)
{
	PListNode node = (PListNode)malloc(sizeof(ListNode));

	if(!node)
		return -1;

	if(!pln) {	
		if(!*lh) { // NULL header pointer
			node->v = v;
			node->next = NULL;
			*lh = node;
			(*lh)->next = NULL;
			//printf("Set header pointer to:%p, value:%d\n", *lh, (*lh)->v);
			return 0;
		} {
			node->v = v;
			node->next = *lh;
			*lh = node;
			//printf("header pointer is:%p, value:%d, next_value:%d\n", *lh, (*lh)->v, (*lh)->next->v);
			return 0;
		}
	} else {
		PListNode next = pln->next; 
		node->v = v;
		node->next = next;
		pln->next = node;
		return 0;
	}
	
}

int			list_remove(PListHead *plh, PListNode pln)
{
	PListHead lh = *plh;
	if(!pln) {	// pln is NULL, remove first node(not header node)
		PListNode node;
		if(lh == NULL)
			return -2;
		node = lh->next;
		free(lh);
		*plh = node;
		return 0;
	} else {
		PListNode next = pln->next;
		if(!next)
			return -2;
		else {
			PListNode nn = next->next;
			free(next);
			pln->next = nn;
			return 0;
		}
	}
}

PListNode	list_get_node(PListHead lh, int index)
{
	PListNode node = lh;
	int i = 0;

	assert(index >= 0);

	while(i < index && node) {
		node = node->next;
		++i;
	}
	if(i == index)
		return node;
	else
		return NULL;
}

int			list_get_node_value(PListHead lh, int index)
{
	PListNode node = list_get_node(lh, index);
	if(!node)
		return -1;
	return node->v;
}

void		list_show(PListHead lh)
{
	PListNode node = lh;

	while(node) {
		printf("%d ", node->v);
		node = node->next;
	}	
	printf("\n");
}

void		list_destroy(PListHead *plh)
{
	PListNode pln;
	PListNode node = *plh;

	while(node) {
		pln = node->next;
		free(node);
		node = pln;
	}
	*plh = NULL;
}

int			list_size(PListHead lh)
{
	int size = 0;

	while(lh) {
		++size;
		lh = lh->next;
	}
	return size;
}
