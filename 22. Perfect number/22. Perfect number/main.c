#include <stdio.h>

int main() {
	int number, sum = 0;
	printf("Enter number: ");
	scanf_s("%d", &number);
	if (number > 0) {
		for (int i = 1; i < number; i++) {
			if (number%i == 0) {
				sum += i;
			}
		}
		if (sum == number)
			printf("It is perfect number");
		else 
			printf("Its not perfect number");
	}
	else {
		printf("Its not perfect number");
	}
}