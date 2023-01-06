#include <stdio.h>

int main(){

	int num1;
	float num2,sum;
	double num3;

	printf("Enter an integer, float and double\n");
	scanf("%d%f%lf", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("The sum of all numbers is: %.3f.",sum);


	if ((num1/2)*2!=num1){
		printf("\n %d is odd. \n", num1);
	}
	else printf("\n %d is even. \n", num1);



	return 0;
}
