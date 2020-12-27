//Veterinary challenge
#include<stdio.h>

int main() {
	char sAnimal, D, d, C, c, R, r, B, b;

	printf("What kind of animal do you have? D/d for dog, C/c for cat, R/r for reptile, B/b for bird\n");
	scanf_s("%c", &sAnimal);

	switch (sAnimal) //switch case for determine the user input and the printing the correct prices for the animal
	{
	case 'D':
		printf("A dog that has been neutered costs $50.\nA dog that has not been neutered costs $80.\n");
		break;
	case 'd':
		printf("A dog that has been neutered costs $50.\nA dog that has not been neutered costs $80.\n");
		break;
	case 'C':
		printf("A cat that has been neutered costs $40.\nA cat that has not been neutered costs $60.\n");
		break;
	case 'c':
		printf("A cat that has been neutered costs $40.\nA cat that has not been neutered costs $60.\n");
		break;
	case 'R':
		printf("A bird or reptile costs nothing.");
		break;
	case 'r':
		printf("A bird or reptile costs nothing.");
		break;
	case 'B':
		printf("A bird or reptile costs nothing.");
		break;
	case 'b':
		printf("A bird or reptile costs nothing.");
		break;
	default:
		printf("Error: Animal does not exist");
	}
	return 0;
}