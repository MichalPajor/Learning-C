#include <stdio.h>

int main() {
	int numberToCheck, original, result=0;
	printf("Enter number: ");
	scanf_s("%d", &numberToCheck);
	original = numberToCheck;

	while (numberToCheck != 0)
	{
		int localSum = 1;
		int reminder = numberToCheck % 10;
		numberToCheck /= 10;

		while (reminder != 1) {
			localSum *= reminder;
			reminder--;
		}
		result += localSum;
	}
	if (result == original)
		printf("It is a strong number");
	else
		printf("Its not a strong number;");
	return 0;
}