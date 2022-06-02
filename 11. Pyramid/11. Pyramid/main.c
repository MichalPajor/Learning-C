#include <stdio.h>

int main() {
	int rows;
	printf("How many rows? ");
	scanf_s("%d", &rows);
	
	for (int i = 0; i < rows; i++) { //loop for rows
		for (int j = 0; j <= rows * 2 - 1; j++) { //loop for columns. Number of columns: rows * 2 - 1
			if (j<rows - i || j>rows + i) //if column is lower than rows - row or higher than rows + row print " " else print "*"
				printf(" ");
			else
				printf("*");
		}
		printf("%s", "\n"); //new line
	}
	return 0;
}