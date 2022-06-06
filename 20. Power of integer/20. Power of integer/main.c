#include <stdio.h>

int main() {
	int base, exponent, result = 1;
	double doubleResult = 1.0;
	printf("Enter base: ");
	scanf_s("%d", &base);
	printf("\nEnter exponent: ");
	scanf_s("%d", &exponent);


	if (exponent >= 0) {
		while (exponent != 0) {
			result = result * base;
			exponent--;
		}
		printf("Result: %d", result);
	}

	else {
		while (exponent != 0) {
			doubleResult = doubleResult * (1.0 / base);
			exponent++;
		}
		printf("Result: %.10f", doubleResult);
	}
}