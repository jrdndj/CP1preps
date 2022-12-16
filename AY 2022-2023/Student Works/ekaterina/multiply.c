//A C program that allows the user to input two numbers Print the product (miltiplication without using the multiplication symbol)
#include<stdio.h>
int main(){
	//introducing the variables 
	int dNum1,dNum2;
	int dSum;

	//asking the user to input two numbers 
	printf("Enter number 1:");
	scanf("%d",&dNum1);
	printf("Enter number 2:");
	scanf("%d",&dNum2);


	//do-while cycle 

	int i=1;
	do{
	 dSum=dSum+dNum1;
	 i++;

	}
	while(i<=dNum2);

	//printing the product
	printf("\nThe product is %d\n",dSum);





	return 0;
}//ednmain