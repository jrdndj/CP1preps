#include<stdio.h>

int main(){
	int N;
	
	printf("Enter a positive integer: ");
	scanf("%d", &N);
	
	
	/*
		First for loop prints the upper part of the triangle
		including the row that contains N asterix
		
	*/
	
	printf("\n");
	
	for (int i=0; i<N; i++){
		for (int j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	/*
		The second for loop prints the second half of the triangle
	*/
	
	for (int i=N-1; i>=0; i--){
		for (int j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
