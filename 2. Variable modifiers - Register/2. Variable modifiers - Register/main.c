#include <stdio.h>
/*Store variable in register memory. Use to reduce access time to variable. 
Compiler is responsible to put vairable into register or not. Usually compilers do the necessary optimizations*/
int main() {
	register int var; 
	return 0;
}