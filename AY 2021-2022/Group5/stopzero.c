/*a c program that will keep asking the user
for an integer input. it will only stop if 
the user enters a 0. when the program ends, 
print the sum of all numbers input. you can only
use two variables. */
#include<stdio.h>

int main(){
	//declare variables
	int sum=0, input=1;

	//i will use a do-while solution
	do{
		printf("\n Enter a number. Type 0 to end: ");
		scanf("%d", &input);
		sum += input; // sum = sum + input;
	}while( input!=0 );//endwhile
	//as long as it is not zero, keep repeating

	//when we are done we print the sum
	printf("The total is %d. \n", sum);
	return 0;
}//end main