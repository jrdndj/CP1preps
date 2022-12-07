#include <stdio.h>

int main(){
	

	int dNum, dFirst, dSecond, dLast;
	printf("Enter a three digit number: ");
	scanf("%d",&dNum);

	dFirst=(dNum/100);
	dSecond=(dNum%100)/10;
	dLast=(dNum%100)%10;

	printf("%d is the first digit. \n %d is the second digit. \n %d is the third digit. " ,dFirst, dSecond, dLast);

}
