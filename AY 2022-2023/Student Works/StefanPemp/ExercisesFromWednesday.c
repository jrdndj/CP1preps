//Write a program that asks for an integer, a float and a double input from the user. Print the sum in float data type with three decimal places


#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);
	printf("\n Give me a float: ");
	scanf("%f", &fNum2);
	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//do the addition using implied typecasting
	fSum = dNum1 + fNum2 + lfNum3;

	//print the sum 
	printf("\n The sum of %d, %.1f and %.2lf is %.3f\n", dNum1, fNum2, lfNum3, fSum);

	return 0;
} // end main


#include <stdio.h>

int main(){
	//declare variables
	int dNum, dFirstDigit, dSecondDigit;
	//ask the user for input
	printf("\n Input a two digit number: ");
	scanf("%d", &dNum);
	//split the number into two digits
	//divide by 10 to get the first digit eg. 69/10 returns 6
	dFirstDigit = dNum/10;
	//modul 10 to get the last digit eg. 69%10 returns 9
	dSecondDigit = dNum%10;
	//check the digits by treating them as boolean
	if (dFirstDigit && !dSecondDigit){
	printf("\n Bazinga! \n");
	}//endif
	else if (!dFirstDigit && dSecondDigit){
	printf("\n Booyeah! \n");
	}//endelse if
	else printf("\n Alakazam! \n");
	return 0;
}//end main

#include <stdio.h>

int main(){
	int dNum;
	printf("\n Enter n: ");
	scanf("%d", &dNum);
	for (int i = 0; i<dNum; i++){
		for (int j = 0; j<i; j++){
			printf(" ");
		}
		for (int k = i; k<dNum; k++){
			printf("*");
		}
		printf("\n");
	}
}

//Multiplication and Devision of two numbers without using the (*) & (/) operators.

#include<stdio.h>
int main(){
    int dNum1, dNum2;
    int dSum=0;
    int dRes=0;
    printf("\n Enter two numbers: \n");
    scanf("%d", &dNum1);
    scanf("%d", &dNum2);
    for (int i = 0; i<dNum1; i++){
        dSum = dSum + dNum2;
    } //end for 
        printf("\n The multiplication of: %d and %d is: %d ", dNum1, dNum2, dSum);
    while (dNum1 >= dNum2)
    {
        dNum1 = dNum1 - dNum2;
        dRes++;
    } //end while
        printf("\n The division of the two entered numbers is: %d ", dRes);
	return 0;
    } // end main
