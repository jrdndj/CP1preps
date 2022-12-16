#include <stdio.h>
// This program prints 1x1 all the way until 10x10
int main (){
	//declare variable
	int dFactor=1;

for (; dFactor<11; dFactor++)
{
	printf("\n %d x %d = %d", dFactor, dFactor, dFactor*dFactor);
}//end for
return 0;
}//end main

#include <stdio.h>

int main(){
int dFactor1=1, dFactor2;

//this outer for loop prints the rows
for (; dFactor1<=10; dFactor1++){

	//inner for loop to do the columns
	for( dFactor2=1; dFactor2<=10; dFactor2++){
		printf("%d ", dFactor1*dFactor2);
	}// end inner for loop
	printf("\n");
}


	return 0;
}

#include <stdio.h>

int main(){
/*
int dArr[5];
integer array with 5 slots
int dArr[5]={3,4,5,6,7};
dArr[0] //4

if dCtr = 1

dArr[dCtr] //4

dArr[dCtr+2] //6

dArr[5] //out of bounds exception

print the arrays - we need a loop to print each element

sizeof(dArr) = returns the size of the array

print the elements of the array we use the index

print("%d", dArr[1]);

/*
A C program that will ask the user to enter 10 integers.
The program will print all the contents of the array.
The program will print how many odd numbers are there in the array. 
*/

//declare variables
int dArr[10], dOddCtr=0;

//now we will ask the user for inputs using for loop
for(int dCtr = 0; dCtr<10; dCtr++){
	printf("\n Please enter a number for slot %d: ", dCtr);
	scanf("%d", &dArr[dCtr]);
} //end for
	printf("\n");
//now we need to print the contents of the array using another for loop
for(int dCtr=0; dCtr<10; dCtr++){
	printf("%d ", dArr[dCtr]);
	//check if the element is odd
	if ( dArr[dCtr]%2!=0 ){
		dOddCtr++;
	} //end if for odd elements

} //end for
printf("\n There are %d odd numbers in your array.\n ", dOddCtr);
	return 0;
} //end main
