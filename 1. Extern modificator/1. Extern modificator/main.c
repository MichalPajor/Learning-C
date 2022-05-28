#include <stdio.h>

//Thanks to extern, we can use a variable declared in another file
extern int var;
extern float value;
void main() {
	printf("%d\n", var);
	float sum = var + value;
	printf("%.2f", sum); //print sum in 0.00 format
	return 0;
}

