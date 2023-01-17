#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
	void* data;
	struct node* next;
} sll_node_t;

typedef struct ll {
	unsigned int size;
	sll_node_t* head;
	sll_node_t* tail;
} sll_t;

void sll_init(sll_t* list);
void sll_insertfirst(sll_t* list, void* data);
void sll_insertlast(sll_t* list, void* data);
void sll_removefirst(sll_t* list);
void sll_print(sll_t list, char* (*to_string)(void*));

#endif
