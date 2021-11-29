/* this program receives an integer from the user and tells if it is even or odd using the modulo operation*/
#include<stdio.h>

int main(){
	//declare variables
	int num1 = 0;

	//prompt user for input
	printf("\n Dober dan, pls give number: ");
	scanf("%d", &num1);

	//check now if the number is odd or even
	if( num1%2 == 0 ){
		//if remainder is 0, then it is even
		printf("\n %d is even", num1);
	}//endif
	else {
		//if it goes here there remainder is 1
		//then it is odd
		printf("\n %d is odd", num1);
	}//endelse
	printf("\n Thank you have a nice day!\n");
	return 0;
}//endmain