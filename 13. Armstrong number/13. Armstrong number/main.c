#include <stdio.h>

int main() {
	int numberToCheck, numDigits = 0, original, result = 0;
	printf("Enter number: ");
	scanf_s("%d", &numberToCheck);
	original = numberToCheck;
	while (numberToCheck != 0) {
		numberToCheck /= 10;
		numDigits++;
	}
	numberToCheck = original;
	while (numberToCheck != 0) {
		int reminder = numberToCheck % 10;
		numberToCheck /= 10;
		int productOfNumbers = 1;
		for (int i = 0; i < numDigits; i++)
		{
			productOfNumbers *= reminder;
		}
		result += productOfNumbers;
	}
	if (result == original)
		printf("It is an Armstrong number");
	else
		printf("It is not an Armstrong number");
	return 0;
}