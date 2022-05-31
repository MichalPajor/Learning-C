#include <stdio.h>

int main() {
	int a = 1;
	int b = 1;
	int c = ++a || b++;
	int d = b-- && --a;

	printf("%d %d %d %d", d, c, b, a); // 1 1 0 1
	/*
	Only ++a will be evaluated becouse it gives true and b++ dont have to be evaluated. c = 1(true), a = 2, b = 1
	b-- and --a will be evaluated. 1 && 1 = true. => d = 1. b=0, a = 1
	*/
}