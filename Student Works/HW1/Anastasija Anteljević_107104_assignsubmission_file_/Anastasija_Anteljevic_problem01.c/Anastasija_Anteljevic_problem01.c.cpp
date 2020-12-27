// Anastasija_Anteljevic_problem01.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	// Now we declare the variables
	char cInput, cInputYN;
	//Now we ask the user to put in the information
	printf("\n Please let us know which type of animal do you have: (d for dog, c for cat, b for bird or r for reptille");
	scanf_s("%c", &cInput);
	printf("\n Is the animal neutured? (y for yes, n for no) ");
	scanf_s("%c", &cInputYN);
	//Now we use switch
	switch (cInput) {
	case 'd':
		if (cInputYN == 'y') {
			printf(" The price is $50");
		}
		else if (cInputYN == 'n') {
			printf(" The price is $80");
		}
		else printf("Error");
		break;
	case 'c':
		if (cInputYN == 'y') {
			printf("The price is $40");
		}
		else if (cInputYN == 'n') {
			printf("The price is $60");
		}
		else printf("Error");
		break;
	case 'b':
		printf("Insurence is free!");
		break;
	case 'r':
		printf("Insurence is free!");
		break;
	defaults:
		printf("Error,animal input is invalid!!");
		break;
	}
	return 0;
}




