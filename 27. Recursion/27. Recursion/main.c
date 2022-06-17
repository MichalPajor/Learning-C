#include<stdio.h>

int fun(int n) { // return 1 -> 8 -> 15
	if (n == 0)
		return 1;
	else
		return 7 + fun(n - 2); 
}

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	printf("%d", fun(4)); 

	printf("\nFactorial of 5: %d", factorial(5));
	return 0;
}