#include<stdio.h>
#include<stdbool.h>

/*

Idea of the program is the following:
	-First we check if the number N that user provided is greater than 1
	- if it's not, then we immediately know that there are no prime number that are less or equal to N
	-if N is greater then 1, then we proceed by the following:
	-we have an outter for loop that iterates through all the numbers from 2 to N (including N)
	-We start with 2 (as we know that 1 is not prime)
	-Then we have an inner for loop that for each of those numbers checks if it is prime (by checking if it's divisble by any of integers between 2 and N)
	-when inner for loops finds that number is divisble by some integer i.e. that it's not prime it breaks the inner for loop and variable a becomes false
	-we have an if statement in which we increase value of counter by one only if the number IS prime, and that happens only in the case where variable a remained true
	-we also need to reset value of a back to true each time we eneter outter for loop again 

*/

int main(){
	int dCounter=0, dNumber;
	bool a;
	
	printf("Please enter a positive integer: ");
	scanf("%d", &dNumber);
	
	if (dNumber>1){
		for (int i=2; i<=dNumber; i++){
			a = true;
			for (int j=2; j<i; j++){ // we can probably optimize the program by checking values only until the sqrt of i
				if (i % j == 0){
					a = false;
					break;
				}	
			}
			if (a){
				dCounter++;
			}
		}
		printf("There are %d prime numbers less or equal than %d.\n", dCounter, dNumber);
	}
	else{
		printf("There are no prime numbers less or equal than %d.\n", dNumber);
	}
	return 0;
}
