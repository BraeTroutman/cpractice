#ifndef STACK_H
#define STACK_H

typedef struct stack {
	sll_t contents;
	unsigned int size;
	void* top;
} stack_t;

void stack_init(stack_t*);
void stack_push(stack_t*, void* data);
void* stack_pop(stack_t*);
void stack_print(stack_t, char* (*to_string)(void*));

#endif
