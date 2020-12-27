// Anastasija_Anteljevic_problem04.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	// First to declare the variable
	int dInput, dPrime;
	// Now I we ask the user for positive integer- interactive input
	printf("\n Please insert positive integer: ");
	scanf("%d", &dInput);
	//Now we check if 'dInput' is negative
	if (dInput < 0) {
		printf("\n Please enter positive integer, error. ");
		return 1;
	}
	// Ending the if loop

	printf("\n The Prime Numbers from 1 to %d are : ", dInput);
	//By using the For Loop we go through the sequences from 1 to dInput
	for (int dNumber = 1; dNumber <= dInput; dNumber++) {
		dPrime = 0;
		for (int dNumber2 = 2; dNumber2 <= dNumber / 2; dNumber2++) {
			if (dNumber % dNumber2 == 0) {
				dPrime = 1;
				break;
			}
		}
		// Now we print the prime numbers
		if (dPrime == 0) {
			printf(" %d \n", dNumber);
		}
		printf("\n Nice job, using this program thank you. ");
		return 0;
	}