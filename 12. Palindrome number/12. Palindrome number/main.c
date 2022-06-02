#include <stdio.h>

int main() {
	int numberToCheck, newNumber = 0;
	printf("Type your number:");
	scanf_s("%d", &numberToCheck);
	int originalNumber = numberToCheck;

	while (numberToCheck > 0) {
		int lastNum = numberToCheck % 10;
		numberToCheck /= 10;
		newNumber = newNumber * 10 + lastNum;
	}
	if (newNumber == originalNumber)
		printf("Your number is palindrome");
	else
		printf("Your number is not palindrome");
	return 0;
}