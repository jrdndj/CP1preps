#include <stdio.h>

int main(){

	//ask user for number and print it out
	int dNum1, dFirstDigit, dMiddle, dLast;
	printf("\n Give me a 3 digit number: \n");
	scanf("%d", &dNum1);
	printf("\n You have entered %d. \n" , dNum1);

	//print the first digit
	printf("\n The first digit is: %d \n" , dNum1/100);
	

	//print middle
    printf("\n is the middle digit:%d \n" ,(dNum1-((dNum1/100)*100))/10);

    //print last 
    printf("\n is the last digit is:%d \n" , (dNum1-((dNum1/100)*100))%10);
	
    


  return 0;
}//end main
