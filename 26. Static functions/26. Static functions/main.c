#include <stdio.h>

int add(int, int);
int multiple(int, int);

int main() {
	printf("Sum: %d", add(3,4));
	//printf("Multi: %d", multiple(3, 4)); //produces error, static function is not visible
}