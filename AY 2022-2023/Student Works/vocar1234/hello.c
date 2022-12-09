#include <stdio.h>

int main(){

	//put local variables here
	int dNum1 = 0;
	int dNum2 = 0;

	// ask the user for an input
	printf("\n Hey, give me a number 1:");
	scanf("%d", &dNum1);

	// ask the user for number 2
	printf("\n Hey, give me number 2:");
	scanf("%d", &dNum2);

	if( dNum1 > dNum2 ){
		printf("\n the bigger number is %d. ", dNum1);
	}//end if
	else {
		printf("\n the bigger number is %d.", dNum2);
	}

	//if I  want to pritn dNUm
	printf("\n the numbers are %d %d", dNum1, dNum2);

	//to know if even
//	if(dNum1%2==0){
//		printf("\n %d is even.", dNum1);
//	}//endcheckeven
//	else printf("\n %d is odd". dNum1);

		if( ( dNum1/2*2 ) == dNum1 ){
		printf("\n %d is even.", dNum1);
	}
	else printf("\n %d is odd. ", dNum1);

	//this is a comment
	printf("\n Hello World! \n");
 	return 0;
}//endmain