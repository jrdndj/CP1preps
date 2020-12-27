#include<stdio.h>

int main(){

	int dUserInput;

	printf("Input a number between 1 and 10: ");
	scanf("%d", &dUserInput);

	// printing the header

	printf("x");
	for (int i=1; i<=dUserInput; i++){
		printf("    %d", i);
	
	}
	printf("\n");
	
	
	// printing the rest of the table
	
	// when we are printing, we divide into two cases so, if the number that we are printing has two digits, we print one less space, so the alignment would be proper
	
	for (int i=1; i<=10; i++){
		// printing the first column
		if ( i< 10){
			printf("%d    ", i);
		}
		else{
			printf("%d   ", i);
		}
		
		for (int j=1; j<=dUserInput; j++){
			if (i*j<10){
				printf("%d    ", i*j);
			}
			else{
				printf("%d   ", i*j);
			}
		}
		printf("\n");
	
	}	
	return 0;
}
