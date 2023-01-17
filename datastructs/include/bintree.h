#ifndef BINTREE_H
#define BINTREE_H

typedef struct node {
	void* key;
	void* data;
	struct node* left;
	struct node* right;
} bt_node_t;

typedef struct tree {
	bt_node_t* root;
	unsigned int size;
	int (*compare)(void*, void*);
} bt_tree_t;

void bt_init(bt_tree_t*, int (*compare)(void*, void*));
void bt_add(bt_tree_t*, void* key, void* data);
bt_node_t* bt_remove(bt_tree_t*, void* key);
bt_node_t* bt_get_node(bt_tree_t, void* key);

#endif

