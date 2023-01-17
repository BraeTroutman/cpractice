#include "linkedlist.h"
#include "stack.h"

#include <stdlib.h>
#include <stdio.h>

void stack_init(stack_t* stack) {
	sll_t contents;
	sll_init(&contents);

	stack->contents  = contents;
	stack->size = 0;
	stack->top = NULL;
}

void stack_push(stack_t* stack, void* data) {
	sll_insertfirst(&stack->contents, data);
	stack->size++;
	stack->top = data;
}

void* stack_pop(stack_t* stack) {
	sll_removefirst(&stack->contents);
	stack->size--;

	void* top = stack->top;
	stack->top = stack->contents.head->data;
	return top;
}

void stack_print(stack_t stack, char* (*to_string)(void*)) {
	sll_print(stack.contents, to_string);
}

