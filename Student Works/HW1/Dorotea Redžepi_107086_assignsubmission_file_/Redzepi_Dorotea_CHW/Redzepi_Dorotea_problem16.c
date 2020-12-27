#include<stdio.h>
#include<stdbool.h>

#define N 1001 // program can be easily modified to find any other prime number

int main(){
	int dPrimeNumber = 1; // inital prime number 
	int dCounter = 1; // counter that keeps track of how many prime numbers we found so far, we set the initail value to one, because we already counted numbers 2 as prime
	bool a; //kind of like a switch that will tell us if the number that we are checking is prime or not
	
	while (dCounter<N){
		dPrimeNumber+=2; // we are increasing values of current potential prime number by 2, as we can skip all the prime numbers because we are certain that they are not prime
		a = true; // set inital value of switch to true
		for (int j=2; j<dPrimeNumber; j++){
			if (dPrimeNumber % j == 0){
				a = false; // if we find out that number is not prime we change value of switch to false
				break;
			}
		}
		if (a){ // if switch is still "on" we know that our number is prime and therefore, we can increase value of counter by 1
			dCounter++;	
			}	
	}
	
	printf("The %d. prime number is %d\n", N, dPrimeNumber);
	return 0;
}
