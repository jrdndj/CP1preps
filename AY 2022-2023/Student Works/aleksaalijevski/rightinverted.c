#include <stdio.h>

int main(){
	
	int i, j, row;
	//user input
	printf("Enter the number of rows: \n");
	scanf("%d", &row);

	//input rows from user
	for(i=1; i<=row; i++){
		for(j=1; j<i; j++)
		{
			printf(" ");
		}//print following spaces

		for(j=i; j<=row; j++){
			printf("*");
		}//print columns with a star

		printf("\n");
	}//new row
	

	return 0;

}//end main
