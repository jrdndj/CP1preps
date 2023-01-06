#include <stdio.h>

/* this is also another comment in C*/
int main(){
	
	//local variables here
	int dNum1, dNum2;

	//ask the user for intput
	printf("\n Give me a number: ");
	scanf("%d", &dNum1);

	printf("\n Give me a number: ");
	scanf("%d", &dNum2);

	//print numbers
	printf("The numbers are %d %d", dNum1, dNum2);

	if(dNum1>dNum2){
		printf("\n %d is the greater number. \n", dNum1);
	}//endcheckbigger number
	else printf("\n %d is the greater number. \n", dNum2);
	//we assumed dNum2 is the bigger one

	//lets check if dNum1 is even
	if( dNum1 %2 ==0){
		printf("\n %d is even. \n",dNum1);
	}//endcheckeven
	else printf("\n %d is odd. \n",dNum1);

	//to print
	printf("\n Hello world! \n");

	if( (dNum1/2)*2 == dNum1){
		printf("\n %d is even. \n",dNum1);
	}
	return 0;
}//endmain
