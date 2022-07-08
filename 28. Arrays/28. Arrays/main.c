#include <stdio.h>

#define LENGTH 10

int main() {
	int myArray[LENGTH]; //declaration and definition
	//for (int i = 0; i < LENGTH; i++) {
	//	scanf_s("%d", &myArray[i]);
	//}

	int mySecondArray[] = { 1,2 };
	printf("Num: %d \n", mySecondArray[0]); //access to 1st element

	//designated initialization
	int my3rdArray[10] = { [0] = 1,[5] = 3,[7] = 11 };
	for (int i = 0; i < 10; i++) {
		printf("%d ", my3rdArray[i]);
	}
	printf("\n");
	int my4thArray[] = { [0] = 1,[20] = 3,[15] = 11 };
	for (int i = 0; i < 20; i++) {
		printf("%d ", my4thArray[i]);
	}
	printf("\n");
	//reverse
	int my5thdArray[10] = { 0,1,2,3,4,5,2,7,8,8 };
	for (int i = 9; i >= 0; i--) {
		printf("%d ", my5thdArray[i]);
	}
	printf("\n");
	//Check if digits in array appears more than once
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i; j < 10; j++) {
			if (i != j) {
				if (my5thdArray[i] == my5thdArray[j]) {
					count++;
					break;
				}
			}
		}
		if (count > 0) {
			printf("\nYes %d", my5thdArray[i]);
		}
	}
	//count elements of array
	int elements = sizeof(my5thdArray) / sizeof(my5thdArray[0]);
	printf("\nSize: %d", elements);
	printf("\nRows:");
	int multiarray[5][5] = { {8,3,9,0,10}, {3,5,17,1,1}, {2,8,6,23,1}, {15,7,3,2,9}, {6,14,2,6,0} };
	for (int i = 0; i < 5; i++) {
		int rowTotal = 0;
		int columnTotal = 0;
		for (int j = 0; j < 5; j++) {
			rowTotal += multiarray[i][j];
			columnTotal += multiarray[j][i];
		}
		printf("R%d ", rowTotal);
		printf("C%d ", columnTotal);
	}


	//miltiply matrix
	int m1[3][3] = { {1,2,3},{1,2,1},{3,1,2} };
	int m2[3][3] = { {1,2,3},{1,2,1},{3,1,2} };
	int m3[3][3];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				sum  += m1[i][k] * m2[k][j];
			}
			m3[i][j] = sum;
			sum = 0;
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}


	//Dynamic array
	int a,b;
	printf("Int array length: ");
	scanf_s("%d", &a);

	printf("Float array length: ");
	scanf_s("%d", &b);

	// declare a pointer variable to point to allocated heap space
	int *p_array;
	float *f_array;

	// call malloc to allocate that appropriate number of bytes for the array

	p_array = (int *)malloc(sizeof(int) * a);      // allocate a ints
	f_array = (int *)malloc(sizeof(float) * b);      // allocate a floats

	// always CHECK RETURN VALUE of functions and HANDLE ERROR return values
	// here is one example of handling an unrecoverable malloc error 
	// (other error handling code is removed from this document for readability):
	if (p_array == NULL) {
		printf("malloc of size %d failed!\n", a);   // could also call perror here
	}
	if (p_array == NULL) {
		printf("f_array of size %d failed!\n", b);   // could also call perror here
	}

	// use [] notation to access array buckets 
	// (THIS IS THE PREFERED WAY TO DO IT)
	//for (int i = 0; i < a; i++) {
	//	p_array[i] = 1;
	//
	//}
	p_array[0] = 2;
	p_array[2] = 6;

	f_array[0] = 1.2;
	f_array[1] = 2.1;

	printf("\n");
	for (int i = 0; i < a; i++) {
		printf("%d ", p_array[i]);
	}

	printf("\n");
	for (int i = 0; i < b; i++) {
		printf("%f ", f_array[i]);
	}




}