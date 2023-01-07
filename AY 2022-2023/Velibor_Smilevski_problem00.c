#include <stdio.h>

int main(void){
	char animal;
	char neutered;
	int fee;

	printf("Enter the kind of animal (D, C, B, R): ");
	scanf("%c", &animal);
	printf("Has the animal been neutered (Y/N)? ");
	scanf(" %c", &neutered);

	if(animal == 'D' || animal == 'd'){
		if(neutered == 'Y' || neutered == 'y'){
			fee = 50;
		} else {
			fee = 80;
		}
	} else if (animal == 'C' || animal == 'c'){
		if (neutered == 'Y' || neutered == 'y'){
			fee = 40;
		} else {
			fee = 60;
		}
	} else if (animal == 'B' || animal == 'b' || animal == 'R' || animal == 'r'){
		fee = 0;
		} else {
			printf ("Error: invalid animal type.\n");
			return 1;
		}

		printf("The insurance fee is $%d.\n", fee);

		return 0;
}
