#include <stdio.h>

int main()
{
    char animalType;
    char neutered;
    int fee = 0;
    
    printf("What type of animal do you want to insure? (Dog/Cat/Bird/Reptile): ");
    scanf("%c", &animalType);

    switch (animalType) {
        case 'D':
        case 'd':
            printf("Is the dog neutered? (Y/N): ");
            scanf(" %c", &neutered);
            if (neutered == 'Y' || neutered == 'y') {
                fee = 50;
            } else {
                fee = 80;
            }
            break;
        case 'C':
        case 'c':
            printf("Is the cat neutered? (Y/N): ");
            scanf(" %c", &neutered);
            if (neutered == 'Y' || neutered == 'y') {
                fee = 40;
            } else {
                fee = 60;
            }
            break;
        case 'B':
        case 'b':
            printf("The fee for a bird is free!\n");
            break;
        case 'R':
        case 'r':
            printf("The fee for a reptile is free!\n");
            break;
        default:
            printf("Error: Unrecognized animal type!\n");
            break;
    }
    
    if (fee > 0) {
        printf("The insurance fee for the animal is $%d\n", fee);
    }
    
    return 0;
}