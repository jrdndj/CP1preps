#include <stdio.h>

int main(){

	int dNum1=0, dNum2=0;

	printf("\n Hello world\n");

	printf("\n Give number\n");
	scanf("%d",&dNum1);

	printf("\n Give number\n");
	scanf("%d",&dNum2);

	printf("\n You entered %d %d.\n", dNum1,dNum2);

	//print the greater number 

	if(dNum1 > dNum2){
		printf("\n %d is the greater number. \n", dNum1);

	}//end if check number
	else printf("\n %d is the greater number. \n", dNum2);

	//check if the number is even 
	if (dNum1%2 ==0){
		printf("\n %d is even",dNum1 );
	}//end check even
	else printf("\n %d is odd.", dNum1);

	dNum2 = dNum1; //storing the value of dnum1 for later comparison
	//check even without modulo
	if ((dNum1/2)*2 == dNum2{
		printf("\n %d is even \n", dNum1);

	}//end check w/o modulo
	else printf("\n %d is odd\n", dNum1);


	return 0;

}//end main
