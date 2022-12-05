#include<stdio.h>

int main(){

	//declar data types here
	int dNum1, dNum2;

	//ask user for number
	printf("Give number: ");
	scanf("%d", &dNum1);
	printf("Give number: ");
	scanf("%d", &dNum2);

	//print num
	printf("\n You have entered %d and %d.\n", dNum1, dNum2);

	//check and print the bigger number
	if (dNum1 > dNum2){
		printf("\n %d is greater", dNum1);
	
	}//end if check number
	else printf("\n %d is greater", dNum2);

	//check if one number is even
	if(dNum1%2 == 0){
		printf("\n %d is even.", dNum1);
	}//endcheck even
	else printf("\n %d is odd.", dNum1);

	//Jordans problem (how to check if an integer is odd or even without using %)

	if(dNum1/2) //if we can store this in int it is a even number, else it is odd

	
	if ((dNum1/2)*2 == dNum1){
		printf("\n %d is even \n", dNum1); 
	}
	else printf("\n %d is odd \n", dNum1)


	// I am now a C programmer lol
	printf("\n Hello World! \n");
	return 0;
}//end main
