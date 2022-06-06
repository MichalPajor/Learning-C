#include <stdio.h>
#include <stdbool.h>

int main() {
	int numberToCheck;
	printf("Enter number: ");
	scanf_s("%d", &numberToCheck);

	if (numberToCheck < 2) {
		printf("It is not prime number");
		return 0;
	}

	bool isPrime = true;
	for (int i = 2; i < numberToCheck; i++) {
		if (numberToCheck%i == 0)
		{
			isPrime = false;
			break;
		}
	}
	isPrime ? printf("It is prime number") : printf("It is not prime number");
	return 0;
}