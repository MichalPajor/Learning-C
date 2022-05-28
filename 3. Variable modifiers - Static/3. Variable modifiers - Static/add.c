//it is global variable, so it will be initialized to 0. Not visible outside this scope
//static int count; 
int increment() {
	/*visible only in this function, initialized to 0, not destroyed after completion of function, 
	can be initialized only with a constant*/
	static int count;
	count += 1;
	return count;
}