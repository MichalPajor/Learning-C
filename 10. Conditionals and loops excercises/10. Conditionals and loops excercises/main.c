#include <stdio.h>

int main() {
	//1.
	//int i = 1024;
	//for (; i; i >>= 1) { //initialization - can be skipped; condition - i = 0 = false, step
	//	printf("Hello"); // printed 11X
	//}

	//2. Output will be 16, 21. All cases will be executed becouse break was not used (16), then increment in for loop (17) and default case (21)
	//int i;
	//for (i = 0; i < 20; i++) {
	//	switch (i)
	//	{
	//	case 0: i += 5;
	//	case 1: i += 2;
	//	case 5: i += 5;
	//	default: i += 4;
	//	}
	//	printf("%d ", i);
	//}

	//3.
	unsigned int i = 500;
	while (i++ != 0); //post-increment until i!=0
	printf("%d", i); // i = 1
	return 0;
}