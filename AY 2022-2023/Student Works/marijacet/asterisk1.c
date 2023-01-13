#include <stdio.h>

int main(){
	printf("Enter a dimension\n");
	int dNum;
	scanf("%d", &dNum); //user input for dimension
	

for (int i = 1; i <= dNum; ++i){

	for (int j = 1; j <= dNum; ++j){ //asterisk loop
			if(j<=i){ //if in the lower matrix diagonal print spaces
				  printf(" ");
			}else printf("*"); //otherwise asterisks
		}//end inner loop
	printf("\n"); //switch to new row
	}//end outer loop
	return 0;
}