#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"
#include "stack.h"

char* to_string(void* data) {
	char* result = malloc(10*sizeof(char));

	sprintf(result, "%d", *((int*) data));
	return result;
}

int main(int argc, char* argv[]) {
	stack_t mystack;

	stack_init(&mystack);

	int i;
	for (i = 0; i < atoi(argv[1]); i++) {
		int* data = malloc(sizeof(int));
		*data = i;

		stack_push(&mystack, (void*) data);
	}
	
	sll_print(mystack.contents, to_string);	
	printf("top: %d, size: %d\n", *((int*) mystack.top), mystack.size);

	for (i = 0; i < 5; i++) {
		stack_pop(&mystack);
	}

	stack_print(mystack, to_string);
	printf("top: %d, size: %d\n", *((int*) mystack.top), mystack.size);
	return 0;
}
