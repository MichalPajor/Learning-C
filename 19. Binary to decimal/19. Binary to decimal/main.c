#include<stdio.h>

int main() {
	int binary, rem, num = 0, base = 1;
	printf("Enter binary number: ");
	scanf_s("%d", &binary);

	while (binary != 0) {
		rem = binary % 10;
		binary /= 10;
		num += rem * base;
		base *= 2;
	};
	printf("Decimal: %d", num);
}