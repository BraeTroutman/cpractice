#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

void sll_init(sll_t* list) {
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	return;
}

void sll_insertlast(sll_t* list, void* data) {
	sll_node_t* newnode = malloc(sizeof(sll_node_t));
	newnode->data = data;
	newnode->next = NULL;

	if (list->tail == NULL) {
		list->head = newnode;
		list->tail = newnode;
		list->size = 1;
		return;
	} else {
		list->tail->next = newnode;
		list->tail = newnode;
		list->size++;
	}
}

void sll_insertfirst(sll_t* list, void* data) {
	sll_node_t* newnode = malloc(sizeof(sll_node_t));
	newnode->data = data;
	newnode->next = list->head;

	list->head = newnode;
	list->size++;
	return;
}

void sll_removefirst(sll_t* list) {
	sll_node_t* head = list->head;
	list->head = list->head->next;
	free(head);
	list->size--;
	return;
}

void sll_print(sll_t list, char* (*to_string)(void*)) {
	sll_node_t* current_node = list.head;
	
	printf("[");
	while (current_node != NULL) {
		char* format = current_node->next == NULL ? "%s" : "%s, ";
		printf(format, (*to_string)(current_node->data));
		current_node = current_node->next;
	}
	puts("]");	
	return;
}

