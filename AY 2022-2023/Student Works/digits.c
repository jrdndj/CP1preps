#include <stdio.h>
int main(){
	
	int num;

	//user enters integer
	printf("\nEnter three digit number: ");
	scanf("%d", &num);

	//defining variables for digits
	int a, b, c;

	c = num%10;
	b = (num/10)%10;
	a = num/100;

	printf("\n%d , %d , %d\n", a, b, c);

	return 0;

}//end main
