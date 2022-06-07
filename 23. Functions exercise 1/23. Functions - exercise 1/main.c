#include <stdio.h>

int func(int);

int main() {
	printf("Value returned: %d", func(435));
	return 0;
}

int func(int num) {
	int count = 2;
	while (num) {
		count++;
		num >>= 2;
	}
	return count;
}