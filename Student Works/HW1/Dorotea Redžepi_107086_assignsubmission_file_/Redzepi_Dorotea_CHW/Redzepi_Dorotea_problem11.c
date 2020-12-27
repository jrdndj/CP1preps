#include<stdio.h>

int main(){
	
	int Matrix1[10][10], Matrix2[10][10], Product[10][10];
	int r, c;
	int sum;
	
	//asking for dimensions of the matrix
	printf("Enter two positive numbers R and C: ");
	scanf("%d%d", &r, &c);
	
	//getting elements of the first matrix
	printf("Enter elements of the first matrix (%d x %d):\n", r, c);
	for (int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("Enter element e%d%d: ", i+1, j+1);
			scanf("%d", &Matrix1[i][j]);
		}
	}
	
	//printing out the first matrix
	printf("\nEntered first Matrix:\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%3d ", Matrix1[i][j]);
		}
		printf("\n");
	}
	
	//getting elements of the second matrix
	printf("\nEnter elements of the second matrix (%d x %d):\n", c, r);
	for (int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			printf("Enter element e%d%d: ", i+1, j+1);
			scanf("%d", &Matrix2[i][j]);
		}
	}
	
	//printing out the elements of the second matrix
	printf("\nEntered second Matrix:\n");
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			printf("%3d ", Matrix2[i][j]);
		}
		printf("\n");
	}
	
	
	// calculating the product of two matrices
	for (int row=0; row<r; row++){ // iterate through rows of the first matrix
		for (int col=0; col<r; col++){ // iterate through columns of the second matrix
			sum = 0;
			for (int k=0; k<c; k++){ //whitin fixed row and column go through all the elements and calculate the dot product
				sum += Matrix1[row][k] * Matrix2[k][col];
			}
			Product[row][col] = sum;
		}
	}
	
	//printing out the result of multiplication
	printf("\nResult of multiplication (%d x %d matrix):\n", r, r);
	for(int i=0; i<r; i++){
		for(int j=0; j<r; j++){
			printf("%3d ", Product[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
