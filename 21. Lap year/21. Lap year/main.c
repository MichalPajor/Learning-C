#include <stdio.h>

int main() {
	int year;
	printf("Enter year: ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && (year%100!= 0 || year%400 == 0) ) {
		printf("It is a Lap year ");
	}
	else {
		printf("its not a Lap year ");
	}
}