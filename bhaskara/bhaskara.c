#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]) {
	float a, b, c, x0, x1, discriminant;
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	discriminant = (b*b) - 4*a*c;

	if (discriminant == 0) {
		printf("One solution: %f\n", (-b)/(2*a));
	} else if (discriminant < 0) {
		puts("No solution");
	} else {
		printf("Two solutions: %f and %f\n", ((-b) + sqrt(discriminant))/(2*a), ((-b) - sqrt(discriminant))/(2*a));
	}

	return 0;
}

