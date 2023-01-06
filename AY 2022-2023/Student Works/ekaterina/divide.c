//A C program that allows the user to input two numbers Print the quotent (division without using the division symbol)Assume that there are no remainders
//Assume that the first number is larger than the second one
#include<stdio.h>
int main(){
	//introducing the variables 
	int dNum1,dNum2;
	
	int dCtr=0;

	//asking the user to input two numbers 
	printf("Enter number 1 larger:");
	scanf("%d",&dNum1);
	printf("Enter number 2 smaller than the prevoius number :");
	scanf("%d",&dNum2);


	//do-while cycle 

	while(dNum1>0){
		dNum1=dNum1-dNum2;
		dCtr++;
	}

	//printing the product
	printf("\nThe  quotent is %d\n",dCtr);





	return 0;
}//ednmain