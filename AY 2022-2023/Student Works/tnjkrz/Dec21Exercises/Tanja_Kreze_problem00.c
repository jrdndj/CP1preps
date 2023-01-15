#include <stdio.h>
#include <ctype.h>


int main()
{
    //declare variables
    char animal;
    char neutered;
    short int cost;
    
    //asks user for input
    printf("\nEnter animal (D,C,B,R): ");
    scanf(" %c", &animal);
    animal = toupper(animal);
    
    printf("\nIs it neutered? (Y/N) ");
    scanf(" %c", &neutered);
    neutered = toupper(neutered);
    
    if (animal == 'D'){
        if (neutered == 'Y'){
            cost = 50;
        } else if (neutered == 'N') {
            cost = 80;
        } else {
            printf("Incorrect input. Run the program again!");
            return 0;
        }
    } else if (animal == 'C'){
        if (neutered == 'Y'){
            cost = 40;
        } else if (neutered == 'N') {
            cost = 60;
        } else {
            printf("Incorrect input. Run the program again!");
            return 0;
        }
    } else if (animal == 'B' && animal == 'R'){
            printf("A bird or reptile costs nothing.");
            return 0;
        } else {
        printf("Incorrect input. Run the program again!");
        return 0;
    }
    
    printf("A %c that has been neutered (%c) costs %hu", animal, neutered, cost);
    
    return 0;
}//endmain
