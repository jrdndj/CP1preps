#include <stdio.h>

int main(){

	int a=0;
	printf("Please give a three digit number:");
	scanf("%d", &a);
	int b=a%10;
	a=a/10;
	int c=a%10;
	a=a/10;
	printf("\n Your numbers digits are: %d %d %d \n", a, c, b); 

	

	return 0;

}//end main
