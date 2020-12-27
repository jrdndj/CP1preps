#include<stdio.h>

int main() {
	int dIntegers[10]; // list  that contains 10 integers
	int dMin;  
	printf("Please enter 10 integers: ");
	
	//for loop that takes input from the user and stores it in the list
	
	for (int i=0; i<10; i++){
		printf("\nPlease eneter %d. number: ", i+1);
		scanf("%d", &dIntegers[i]);
	}
	
	dMin=dIntegers[0]; //initial value of minimum is first number from the list
	
	// for loop that will take every number from the list and compare it with the current value of minimum, if it's smaller, then that will become new value of minimum.
	
	for (int i=1; i<10; i++){
		if ( dIntegers[i] < dMin ){
			dMin = dIntegers[i];
		}
	
	}
	printf("Smallest integer is: %d\n", dMin);
	 
	return 0;
}
