#include <stdio.h>

int main() {
	//declaring variables
	char cInput, cInputYN;
	//asking the user to input information
	printf("Please tell us which type of animal you have:  (d for dog, c for cat, b for bird or r for reptile)\n");
	scanf_s("%c", &cInput);
	printf("Is the animal neutured? (y for yes, n for no) \n");
	scanf_s(" %c", &cInputYN);

	//calculating and printing out the price
	//switch
	switch (cInput) {
	case 'd':
		if (cInputYN == 'y') {
			printf("The price is $50");
		}
		else if (cInputYN == 'n') {
			printf("The price is $80");
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
		printf("insurance is free!");
		break;
	case 'r':
		printf("Insurance is free!");
		break;
	default:
		printf("Error, animal input is invalid!");
		break;

	}//endswitch

	return 0;
}