#include<stdio.h>

int main(){

	int dUserInput;
	
	while (1){
		printf("\nPlease enter one or two digit integer: ");
		scanf("%d", &dUserInput);
		
		if (dUserInput != -999){ // if input is not -999 then enter mini for loop and print three times value of input
			printf("\n%d%d%d", dUserInput, dUserInput, dUserInput);
		}
		else{ // if input is -999 then exit while loop
			break;
		}
		
		printf("\n");
	} 
	
	return 0;
}
