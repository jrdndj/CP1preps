#include <stdio.h>

int main(){
	printf("This is your multiplication table\n");
	
//use the i counter as dFactor1(rows) and j as dFactor2(columns)
	//print the table in two loops (matrix)
for (int i = 1; i <= 10; ++i){
	for (int j = 1; j <= 10; ++j){
		//printf("%d x %d = %d ",i,j,i*j ); to print the whole table
			printf(" %d ",i*j ); //the result of multiplication

		}//end inner loop
	printf("\n"); //switch to new row
	}//end outer loop
	return 0;
}