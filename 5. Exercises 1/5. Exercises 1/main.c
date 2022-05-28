#include <stdio.h>

// Exercice 1.
//int main() {
//
//	int var = 0x43FF; //hex
//	printf("%x/n", var);
//	printf("%d", var); //hex to decimal
//	return 0;
//}


//Exercise 2.
/*Uninitialized data segment (bss) - uninitialized global, statis, constant global variables
Initialized data segment - global, exetern statucm const global variables*/

static int i; //store in bss segment, initialized with value 0
static int i = 27; //when initialized it is transfered from bss to data segment
static int i; //if its in data segment we cant declare variable with the same name again, value is not updated to 0
//i = 45; //not allowed in global declarations

int main() {

	static int i; //store in bss segment, staic is initialized with 0
	//i = 45; // allowed here
	printf("%d", i);
	return 0;
}