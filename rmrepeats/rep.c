#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

int main(int argc, char* argv[]) {
	unsigned int length = strlen(argv[1]);
	char* a = argv[1];
	char b[length];
	memset(b, 0, sizeof(char)*length);
	
	printf("length: %d\n", length);

	int i, j, finger = 0;

	for (i = 0; i < length; i++) {
		for (j = 0; j < finger; j++) {
			if (a[i] == b[j])
				break;
		}

		if (j == finger) {
			b[finger] = a[i];
			finger++;
		}
	}

	puts(b);
}

