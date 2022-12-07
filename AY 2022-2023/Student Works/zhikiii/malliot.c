#include <stdio.h>

int main(){
/*
	//variables but local
	int dNum1, dNum2;

	//ask the user for input
	printf("\nGive me a number: ");
	scanf("%d", &dNum1);

	printf("\nGive me a number: ");
	scanf("%d", &dNum2);

	//print numbers
	printf("The numbers are %d %d", dNum1, dNum2);
	
	if( dNum1 > dNum2 ){
		printf("\n %d is the greatest number \n", dNum1);
	} //end check bigger number
	else printf("\n %d is the greatest number\n", dNum2);
	//we assumed dNum2 is the bigger one
/*
	//check if dNUm1 is even
	if( dNum1 % 2 == 0){
		printf("\n %d is even \n", dNum1);
	} //end of even check
	else printf("\n %d is odd \n", dNum1);

	if( dNum1/2*2 == dNum1)
		printf("\n %d is even\n", dNum1);
	else printf("\n %d is odd\n", dNum1 );
//here ends * /
	//printing string
	printf("\nHello, World!\n");
*/

	int var;
	printf("\nEnter 4-digit number: ");
	scanf("%d", &var);
	if(var<=9999 && var>1000){
		printf("first digit is %d \n", var/1000);
		printf("second digit is %d \n", var/100%10);
		printf("third digit is %d \n", var/10%10);
		printf("fourth digit is %d \n", var%10);
	}
	else printf("Not 4-digit number!\n");
	return 0;
} //endmain
