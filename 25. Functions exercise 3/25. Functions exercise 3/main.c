#include <stdio.h>

int fun() {
	static int num = 16; // it is static, so variable will not be destroyed after executing the function
	return num--;
}

int main() {
	for (fun(); fun(); fun()) { // 16(this is executed only once); 15; 13(after printf), 16; 12; 10(aftrer printf), 16; 9; 7, 16; 6; 4, 16; 3; 1, 16; 0 - condition so loop will break
		printf("%d ", fun());	// 14, 11, 8, 5, 2
	}
	return 0;
}