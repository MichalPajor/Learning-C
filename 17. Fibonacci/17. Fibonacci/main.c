#include <stdio.h>

int main() {
	int n, previousNum = 0, nextNum = 0, currentNum = 1;
	printf("Enter how many numbers you want to get ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d ", previousNum);
		nextNum = previousNum + currentNum;
		previousNum = currentNum;
		currentNum = nextNum;
	}
	return 0;
}