#ifndef LIST_H
#define LIST_H

// list without header node
typedef struct _List
{
	int v;
	struct _List *next;
} List;

typedef List 	*PList, *PListHead, *PListNode;
typedef List	ListNode, ListHead;

PListHead	list_create(PListHead *plh);
PListHead	list_create_by_input(PListHead *plh);

// insert a node which value is v after pln
int			list_insert(PListHead *lh, PListNode pln, int v);
// remove a node which after pln, if pln is NULL, remove the first node
int			list_remove(PListHead *lh, PListNode pln);

PListNode	list_get_node(PListHead lh, int index);
int			list_get_node_value(PListHead lh, int index);

void		list_show(PListHead lh);

void		list_destroy(PListHead *lh);

int			list_size(PListHead lh);

#endif
