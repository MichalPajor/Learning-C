#include <stdio.h>

int main() {
	int x, y, sum = 0, carry = 0;
	printf("Enter numbers:");
	scanf_s("%d %d", &x, &y);


	//Half adder mehod
	while (y != 0) {
		sum = x ^ y; //xor
		carry = (x&y) << 1; 
		x = sum;
		y = carry;
	}
	printf("Sum = %d", sum);
}