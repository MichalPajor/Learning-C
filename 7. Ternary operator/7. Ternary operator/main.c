#include <stdio.h>

int main() {
	int var1 = 75;
	int var2 = 56;
	int num;
	num = sizeof(var1) ? (var2 > 23 ? ((var1 == 75) ? 'A' : 0) : 0) : 0;

	printf("%d", num);
}