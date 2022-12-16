#include <stdio.h>

int main(){
	printf("Enter a dimension\n");
	int dNum;
	scanf("%d", &dNum); //user input for dimension
	

for (int i = 1; i <= dNum; ++i){

	for (int k = 1; k <= i; ++k){ //loop for spaces
			printf(" ");
		}//end first inner loop

	for (int j = 1; j <= dNum-i; ++j){ //asterisk loop
			printf("*");
		}//end second inner loop
	printf("\n"); //switch to new row
	}//end outer loop
	return 0;
}