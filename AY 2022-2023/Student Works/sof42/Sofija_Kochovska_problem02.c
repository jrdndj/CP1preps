#include<stdio.h>
int main(){
//declare variables
	int dNum, dCounter=0, dSum=0;

//prompt the user for input
	printf("\nInsert a value: ");
	scanf("%d", &dNum);

//while loop, to keep inserting values while dNum is not equal to 0
	while(dNum!=0){
		if(dNum<0){
			printf("Insert a POSITIVE integer: ");
			scanf("%d", &dNum);
		}//endif
		else{
			dCounter++;
			dSum+=dNum;
			printf("Insert another positive integer: ");
			scanf("%d", &dNum);
		}//endelse
	}//endwhile

//output the average
	if(dSum==0){
		printf("\nNO AVERAGE!\n\n");
	}//endif
	else{
		printf("\nThe average of the positive integers is: %f", (double)dSum/dCounter);
	}//endelse
return 0;
}//endmain