#include <stdio.h>

//extern int count;// cant access to count global variable while it is static
int main() {
	int value;
	value = increment();
	value = increment();
	//count++;
	value = increment();
	printf("%d", value);
	return 0;
}