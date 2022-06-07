#include <stdio.h>

void f1(int, int);
void f2(int, int);

int main() {
	int a = 4, b = 5, c = 6;
	f1(a, b); // f1 does not modify the values of the variables
	f2(&b, &c);
	printf("%d", c - a - b); // c = 5, a = 4, b = 6
	return 0;
}

void f1(int a, int b) {
	int c;
	c = a; a = b; b = c;
}

void f2(int *a, int *b) {
	int c;
	c = *a, *a = *b, *b = c; // c = 5, a = 6, b = 5
}