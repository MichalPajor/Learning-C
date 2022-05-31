#include <stdio.h>

int main() {
	int number;
	//1. Do while loop
	/*do {
		printf("Enter a number: ");
		scanf_s("%d", &number);
	} while (number != 0); */

	//2. How break works
	//printf("Enter a number: ");
	//scanf_s("%d", &number);
	//while (number != 0) {
	//	if (number < 0)
	//		break;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &number);
	//}

	//3. Odd numbers form 1 to 20. How continue works
	int value = 1;
	while (value < 20)
	{
		if (value++ % 2 != 0)
			continue;
		printf("%d ",value);
	}
}