#include "bintree.h"

#include <stdlib.h>
#include <stdio.h>

void bt_init(bt_tree_t* tree, int (*compare)(void*, void*)) {
	tree->root = NULL;
	tree->size = 0;
	tree->compare = compare;
}

void bt_add(bt_tree_t* tree, void* key, void* data) {
	if (tree->size == 0) {
		tree->root = malloc(sizeof(bt_node_t));

		tree->root->key = key;
		tree->root->data = data;
		tree->root->left = tree->root->right = NULL;
	} else {
		bt_node_t* current_node = tree->root;
		
		bt_node_t* newnode;	
		newnode->key = key;
		newnode->data = data;
		newnode->left = newnode->right = NULL;

		while (current_node != NULL) {
			if ((*tree->compare)(key, current_node->key) > 0) {
				if (current_node->right == NULL) {
					current_node->right = newnode;
					break;
				} else {
					current_node = current_node->right;
				}
			} else {
				if (current_node->left == NULL) {
					current_node->left = newnode;
					break;
				} else {
					current_node = current_node->left;
				}
			}
		}
	}
	tree->size++;
	return;
}

