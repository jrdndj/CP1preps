#include<stdio.h>

int main(){
	//declare variables
	int dInput;

	printf("\n Please give me a number: ");
	scanf("%d", &dInput);

	for(int i=0;i<dInput;i++ ){

		for(int j=0;j<i;j++){
			printf(" ");
		}

		for(int j=i;j<dInput;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0; 
		
}//end main
