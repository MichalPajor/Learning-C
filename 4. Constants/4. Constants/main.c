#include <stdio.h>

#define NAME 5 // name(macro), preprocessor replace NAME with value 5, dont use semicolon at the end

#define add(x,y) x+y //Macro like function

//Macro with multiple lines
#define greater(x,y) if(x>y)\
					printf ("%d is greater than %d", x, y);\
					else\
					printf ("%d is lesser than %d", x, y);\


int main() {
	printf("NAME is %d\n", NAME);
	printf("Addition two numbers: %d\n", add(3, 4));
	greater(5, 6);
	printf("Current date %s\n", __DATE__);
	printf("Current time %s\n", __TIME__);

	const variable = 5; //value is permanent, readonly, cant change value
	//variable = 6; //produces error

	return 0;
}