#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char* strnum = argv[1];


	int i, len = strlen(strnum);
	
	for (i = 0; i < len/2; i++) {
		printf("%c -- %c\n", strnum[i], strnum[len-i-1]);
		if (strnum[i] != strnum[len-i-1]) {
			puts("not a palindrome");
			return 0;
		}
	}

	printf("%s is a palindrome\n", argv[1]);
}
