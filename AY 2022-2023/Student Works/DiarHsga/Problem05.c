#include<stdio.h>

int main(){
	//declare variables
	int dInput[10], dSmallest;

	for(int i=0;i<10;i++){
		printf("\n Please give me a number: ");
	    scanf("%d", &dInput[i]);

	}

	dSmallest=dInput[0];
	for(int i=0;i<10;i++ ){
		if(dInput[i]<dSmallest){
			dSmallest=dInput[i];
		}	
	}

	printf("The smallest is %d \n", dSmallest);

	return 0; 
		
}//end main
