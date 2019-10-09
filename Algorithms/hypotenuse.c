// C Program to calculate the hypotenuse from the two catheti.

/*
The program requires two arguments, both being catheti.

Compiling:
g++ hypotenuse.c

Input:
	$ ./a.out 3 4

Output:
	The hypotenuse is: 5.000000
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	if (argc <= 2) {
		printf("Not enough arguments!");
		return 0;
	}
	else {
		double a = atof(argv[1]);
		double b = atof(argv[2]);
		double c = sqrt((a * a) + (b * b));
		printf("The hypotenuse is: %lf\n", c);
	}
}

