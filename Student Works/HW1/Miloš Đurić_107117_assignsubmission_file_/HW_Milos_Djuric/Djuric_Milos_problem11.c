#include <stdio.h>
/*
	1. asks user to enter two numbers R1 and C1 where values of R1 and C1 are less than 10;
	Also check whether a user has provided integers for R1 and C1 and if they are a positive numbers and less than 10.
	If input values for R1 and C1 are not positive integer and are not lower than 10, print out error message.

2. asks user to enter elements of matrix1 (of order R1 rows * C1 columns) and prints it out on screen;

3. asks user to enter elements of matrix2 (of order C1 rows * R1 columns) and
prints it out on screen;

4. multiplies two matrices and displays result on screen.


Example 1:
Enter two positive numbers R1 and C1: 2 3
Enter elements of first matrix (2 x 3):
Enter element e11: 1
Enter element e12: 2
Enter element e13: 3
Enter element e21: 4
Enter element e22: 5
Enter element e23: 6
Entered first matrix:
1 2 3
4 5 6
Enter elements of second matrix (3 x 2):
Enter element e11: 7
Enter element e12: 8
Enter element e21: 9
Enter element e22: 10
Enter element e31: 11
Enter element e32: 12
Entered second matrix:
7 8
9 10
11 12
R1esult of multiplication (2 x 2 matrix):
58 64
139 154
*/

// void printMatrix (int*,int,int);

void printMatrix (int R, int C, int m[][C]) {
	
	for (int r = 0; r < R; ++r) {
		for (int c = 0; c < C; ++c) {
			printf("%3d ", m[r][c]);
		}
		printf("\n");
	}
}


int main (int argc, char *argv[]) {

int R1, C1, R2, C2;

printf("Values must be less than 10.\n");
printf("Enter Row: ");
scanf("%d", &R1);

printf("Enter Col: ");
scanf("%d", &C1);

if (R1 > 10 || R1 < 0 || C1 > 10 || C1 < 0) {
	printf("\nValues must be positive and less than 10.\n");
	return 99;
}


R2 = C1;
C2 = R1;

int matrix1[R1][C1];
int matrix2[R2][C2];


// input matrix1
printf("Enter elements of matrix1 (%d x %d):\n", R1, C1);
for (int r = 0; r < R1; ++r) {
	for (int c = 0; c < C1; ++c) {
		printf("elem r%d c%d: ", r+1, c+1);
		scanf("%d", &matrix1[r][c]);
	}
}
printf("Matrix1:\n");
printMatrix(R1, C1, matrix1);




// input matrix2
printf("Enter elements of matrix2 (%d x %d):\n", R2, C2);
for (int r = 0; r < R2; ++r) {
	for (int c = 0; c < C2; ++c) {
		printf("elem r%d c%d: ", r+1, c+1);
		scanf("%d", &matrix2[r][c]);
	}
}
printf("Matrix2\n");
printMatrix(R2, C2, matrix2);


int res[R1][C2];	// if product is defined (here must be...)


// multiply matrices
// C first matrix == R second matrix.
for (int r = 0; r < R1; ++ r) {
	for (int c = 0; c < C1; ++c) {
		
		int sum = 0;
		for (int p = 0; p < C1; ++p)
			sum += matrix1[r][p] * matrix2[p][c];	
		
		res[r][c] = sum;
		sum = 0;		
	}// c
} // r


printf("Results of multiplication (%d x %d) matrix:\n", R1, C2);
printMatrix(R1, C2, res);

return 0;
}

