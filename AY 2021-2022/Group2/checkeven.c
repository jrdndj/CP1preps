/* this program receives an integer from the user and returns whether is it even or odd */
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0;

	//prompt the user to input a number
	printf("\n Dober dan! Please give number: ");
	scanf("%d", &nUserInput);

	//check whether the number is odd or even
	if( nUserInput%2 == 0 ){
		//if 0 then it is even
		printf("\n %d is even\n ", nUserInput);
	}//endif
	else{
		//else then it is odd
		printf("\n %d is odd\n ", nUserInput);
	}//endelse
	return 0; 
}//endmain