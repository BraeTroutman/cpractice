#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
	int i;
	int back2, back1, fibb;

	if (n == 0 || n == 1) return 1;
	
	back2 = 1;
	back1 = 1;

	for (i = 2; i <= n; i++) {
		fibb = back2 + back1;
		back2 = back1;
		back1 = fibb;
	}

	return fibb;
}


int main(int argc, char* argv[]) {
	int n = atoi(argv[1]);

	printf("%d\n", fibonacci(n));

	return 0;
}

