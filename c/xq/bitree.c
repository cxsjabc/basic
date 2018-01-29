#define	_LOG_LEVEL		DEBUG

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 

#include "common_local.h"
#include "bitree.h"

BiTree *		bitree_create()
{
	BiTree *t;
	t = (BiTree *)malloc(sizeof(BiTree));

	if(!t)
		return NULL;

	memset(t, 0, sizeof(BiTree));
	return t;	
}

void			bitree_destroy_branch(BiTreeNode *n)
{
	if(!n)
		return;

	if(n->left)
		bitree_destroy_branch(n->left);
	if(n->right)
		bitree_destroy_branch(n->right);
	free(n);
}

void			bitree_destroy(BiTree *t)
{
	BiTreeNode *root;
	if(!t)
		return;

	root = t->root;
	bitree_destroy_branch(root);
	free(t);
}

int				bitree_ins_left(BiTree *t, BiTreeNode *n, int v)
{
	BiTreeNode *nn;
	if(!t)
		return -1;
	nn = (BiTreeNode *)malloc(sizeof(BiTreeNode));
	if(!nn)
		return -2;
	if(n == NULL) {
		if(t->size > 0) {
			free(nn);
			return -3;
		}
		nn->v = v;
		nn->left = nn->right = NULL;
		t->root = nn;
		t->size = 1;
		return 0;
	}
	if(n->left != NULL)
		return -4;
	n->left = nn;
	nn->v = v;
	nn->left = nn->right = NULL;
	++(t->size);
	return 0;
}

int				bitree_ins_right(BiTree *t, BiTreeNode *n, int v)
{
	BiTreeNode *nn;
	if(!t)
		return -1;
	nn = (BiTreeNode *)malloc(sizeof(BiTreeNode));
	if(!nn)
		return -2;
	if(n == NULL) {
		if(t->size > 0) {
			free(nn);
			return -3;
		}
		nn->v = v;
		nn->left = nn->right = NULL;
		t->root = nn;
		t->size = 1;
		return 0;
	}
	if(n->right != NULL)
		return -4;
	n->right = nn;
	nn->v = v;
	nn->left = nn->right = NULL;
	++(t->size);
	return 0;
}

int				bitree_remove_left(BiTree *t, BiTreeNode *n)
{
	BiTreeNode	** pos;
	if(!t)
		return -1;
	if(n == NULL)
		pos = &(t->root);
	else
		pos = &(n->left);
	if(*pos != NULL) {
		bitree_remove_left(t, *pos);
		bitree_remove_right(t, *pos);
		free(*pos);
		*pos = NULL;
		--(t->size);
	}
	return 0;
}

int				bitree_remove_right(BiTree *t, BiTreeNode *n)
{
	BiTreeNode	** pos;
	if(!t)
		return -1;
	if(n == NULL)
		pos = &(t->root);
	else
		pos = &(n->right);
	if(*pos != NULL) {
		bitree_remove_left(t, *pos);
		bitree_remove_right(t, *pos);
		free(*pos);
		*pos = NULL;
		--(t->size);
	}
	return 0;

}

BiTreeNode *	bitree_insert_internal(BiTreeNode **pn, int v)
{
	BiTreeNode * n = *pn;
	//printf("debug insert: n:%p,v:%d\n", n, n ? n->v : -1);
	if(n == NULL) {
		n = (BiTreeNode *)malloc(sizeof(BiTreeNode));
		if(!n)
			return NULL;
		n->v = v;
		n->left = n->right = NULL;
		*pn = n;
	} else {
		if(v == n->v)
			return n;
		else if(v > n->v) {
			n->right = bitree_insert_internal(&(n->right), v);
		} else {
			n->left = bitree_insert_internal(&(n->left), v);
		}
	}

	return n;	
}
BiTreeNode *	bitree_insert(BiTree *t, int v)
{
	return bitree_insert_internal(&(t->root), v);	
}

BiTreeNode *	bitree_remove_internal(BiTreeNode ** pn, int v)
{
	BiTreeNode *n = *pn;

	if(n == NULL)
		return NULL;	

	if(v < n->v)
		n->left = bitree_remove_internal(&(n->left), v);
	else if(v > n->v)
		n->right = bitree_remove_internal(&(n->right), v);
	else {
		if(n->left != NULL) {
			// find max in left sub tree
			BiTreeNode *max = n->left;
			for(; n->right != NULL; n = n->right) ;
			n->v = max->v;
			n->left = bitree_remove_internal(&(n->left), max->v);
		} else if(n->right != NULL) {
			// find min in right sub tree
			BiTreeNode *min = n->right;
			for(; n->left != NULL; n = n->left) ;
			n->v = min->v;
			n->right = bitree_remove_internal(&(n->right), min->v);
		} else {
			free(n);
			return NULL;
		}
	}
	return n;
}

BiTreeNode *	bitree_remove(BiTree *t, int v)
{
	return bitree_remove_internal(&(t->root), v);
}

BiTreeNode *	bitree_find_internal(BiTreeNode *n, int v)
{
	log_v("treenode:%p, value:%d, left:%d, right:%d\n", n, n ? n->v : -1, n && n->left ? n->left->v : -1, n && n->right ? n->right->v : -1);
	if(n == NULL)
		return NULL;

	if(n->v == v)
		return n;
	else if(n->v < v)
		return bitree_find_internal(n->right, v);
	else
		return bitree_find_internal(n->left, v);
}

BiTreeNode *	bitree_find_internal1(BiTreeNode *n, int v)
{
	while(n && n->v != v) {
		if(n->v < v)
			n = n->right;
		else
			n = n->left;
	}
	return n;
}

BiTreeNode *	bitree_find(BiTree *t, int v)
{
	return bitree_find_internal(t->root, v);
}

BiTreeNode *	bitree_find1(BiTree *t, int v)
{
	return bitree_find_internal1(t->root, v);
}

BiTreeNode *	bitree_find_min(BiTree *t)
{
	BiTreeNode	*n;

	if(!t)
		return NULL;

	n = t->root;
	while(n) {
		BiTreeNode *l = n->left;
		if(!l)
			break;
		if(l)
			n = l;
	}
	return n;
}

BiTreeNode *	bitree_find_max(BiTree *t)
{
	BiTreeNode	*n;

	if(!t)
		return NULL;

	n = t->root;
	while(n) {
		BiTreeNode *r = n->right;
		if(!r)
			break;
		if(r)
			n = r;
	}
	return n;
}

// not ready now
int			bitree_delete(BiTree *t, BiTreeNode *n)
{
	int v;
	BiTreeNode	*pa, *cur;
	int is_left;

	if(!t)
		return -1;
	if(!n)
		return -2;
	
	pa = cur = t->root;
	v = n->v;		
	while(cur && cur->v != v) {
		if(cur->v < v)
			pa = cur, cur = cur->right, is_left = 0;
		else
			pa = cur, cur = cur->left, is_left = 1;
	}
	if(!cur)
		return -3;
	
	if(cur->left == NULL && cur->right == NULL) {
		free(cur);
		if(is_left)
			pa->left = NULL;
		else
			pa->right = NULL;
		return 0;	
	} else if(cur->left != NULL && cur->right == NULL) {
		if(is_left)
			pa->left = cur->left;
		else
			pa->right = cur->left;
		free(cur);
	} else if(cur->right != NULL && cur->left == NULL) {
		if(is_left)
			pa->left = cur->right;
		else
			pa->right = cur->right;
		free(cur);
	} else {
		// find min on right tree
	}
	
	return 0;
}

void			bitree_visit_node(BiTreeNode *n)
{
	printf("%d(l:%d,r:%d) ", n->v, n->left ? n->left->v : -1, n->right ? n->right->v : -1);
}

void			bitree_show_branch(BiTreeNode *n)
{
	if(!n)
		return;
	bitree_visit_node(n);
	bitree_show_branch(n->left);	
	bitree_show_branch(n->right);	
}

void			bitree_show(BiTree *tree)
{	
	BiTreeNode *n;
	if(!tree)
		return;
	printf("preorder:");
	n = tree->root;
	bitree_show_branch(n);
	printf("\n");
}

void			bitree_inorder_internal(BiTreeNode *n)
{
	if(!n)
		return;
	bitree_inorder_internal(n->left);	
	bitree_visit_node(n);
	bitree_inorder_internal(n->right);	
}

void			bitree_inorder(BiTree *t)
{
	printf("inorder:");
	if(t) {
		bitree_inorder_internal(t->root);
	}	
	printf("\n");
}

void			bitree_postorder_internal(BiTreeNode *n)
{
	if(!n)
		return;
	bitree_postorder_internal(n->left);	
	bitree_postorder_internal(n->right);	
	bitree_visit_node(n);
}

void			bitree_postorder(BiTree *t)
{
	printf("postorder:");
	if(t)
		bitree_postorder_internal(t->root);
	printf("\n");
}

int			bitree_cal_size_internal(BiTreeNode *n) 
{
	if(!n)
		return 0;
	return 1 + bitree_cal_size_internal(n->left) + bitree_cal_size_internal(n->right);
}

int			bitree_cal_size(BiTree *t)
{
	int size= bitree_cal_size_internal(t->root);
	t->size = size;	
	return size;
}
