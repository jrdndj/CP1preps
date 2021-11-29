/*this program accepts an integer from the user
and prints whether it is even or odd*/
#include<stdio.h>
int main(){
	//declare variables
	int num1 = 0;

	//get a number from the user
	printf("\n Enter a number: ");
	scanf("%d", &num1);

	//check if even using modulo 2
	if( num1%2 == 0 ){
		//if true then even
		printf("\n %d is even.\n", num1);
	}//endif
	else {
		//if here then odd
		printf("\n %d is odd.\n", num1);
	}//endelse
	return 0;
}//endmain