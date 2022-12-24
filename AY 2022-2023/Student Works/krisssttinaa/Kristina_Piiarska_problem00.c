#include <stdio.h>

int main() {
  char cAnimal, cAgain;
  char cNeutered;
  int dStatus;
do {
  //ask the user for the type of animal
  printf("Enter the type of animal (D or d for dog, C or c for cat, B or b for bird, R or r for reptile): ");
  scanf("%c", &cAnimal);

  //determine the insurance fee based on the type and neutering status of the animal
  if (cAnimal == 'D' || cAnimal == 'd') {
	// prompt the user for whether the animal has been neutered
  	printf("Has the animal been neutered (Y/N)? ");
  	scanf(" %c", &cNeutered);
    if (cNeutered == 'Y' || cNeutered == 'y') {
      printf("\n Insurance fee for a dog that has been neutered costs $50.00");
    } else {
      printf("\n Insurance fee for a dog that has not been neutered costs $80.00");
    }
  } else if (cAnimal == 'C' || cAnimal == 'c') {
	// prompt the user for whether the animal has been neutered
  	printf("Has the animal been neutered (Y/N)? ");
  	scanf(" %c", &cNeutered);
    if (cNeutered == 'Y' || cNeutered == 'y') {
      printf("\n Insurance fee for a cat that has been neutered costs $40.00");
    } else {
      printf("\n Insurance fee for a cat that has not been neutered costs $60.0");
    }
  } else if (cAnimal == 'B' || cAnimal == 'b' || cAnimal == 'R' || cAnimal == 'r') {
    printf("\n Insurance fee is $0.00");
  } else {
    printf("Error: Unrecognized animal type. Please, insert another type of animal.\n");
  }
  printf("\nDo you want to find out insurance fee for another animal? (Y/N): ");
    scanf(" %c", &cAgain);
  } while (cAgain == 'Y' || cAgain == 'y');

  return 0;
}
