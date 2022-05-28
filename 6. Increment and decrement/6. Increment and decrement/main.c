#include<stdio.h>

int main() {
	int a = 4, b = 3;
	printf("%d", (a+++b)); //output 7, a ++ + b, post increment - first use the value then increment
	printf("%d", (++a+b)); //output 9, pre increment - firs increment then use the value

	return 0;
}