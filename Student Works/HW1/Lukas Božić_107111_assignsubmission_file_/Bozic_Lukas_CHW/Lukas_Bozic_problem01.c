
#include<stdio.h>

void main() {
	//declaring variables
	char cAnimal;
	int dContinue = 1;
	//while loop for the user to be able to enter multiple animals
	while (dContinue == 1) {
		//asking the user for information
		printf("Insert a character in front of an animal for which you wish to pay the insurance for!\n");
		printf("[D] neutered dog\n[d] non neutered dog\n[C] neutered cat\n[c] non neutered cat\n[B] or [b] a bird\n[R] or [r] reptile\n");
		scanf_s("%c", &cAnimal);
		//output
		switch (cAnimal) {
		case 'D':
			printf("\nInsurance for a neutered dog costs 50$.\n");
			break;
		case 'd':
			printf("Insurance for a non neutered dog costs 80$.\n");
			break;
		case 'C':
			printf("Insurance for a neutered cat costs 40$.\n");
			break;
		case 'c':
			printf("Insurance for a non neutered cat costs 60$.\n");
			break;
		case 'B':
		case 'b':
			printf("Insurance for a bird is free.\n");
			break;
		case 'R':
		case 'r':
			printf("Insurance for a reptile is free.\n");
			break;
		default:
			printf("Sorry, but we don't offer insurance for your animal.\n");
			break;
		}
		//asking the user to continue or not
		printf("Do you have another animal that you wish to ensure?\n[1] yes [2] no\n");
		scanf_s("%d", &dContinue);
	}
}