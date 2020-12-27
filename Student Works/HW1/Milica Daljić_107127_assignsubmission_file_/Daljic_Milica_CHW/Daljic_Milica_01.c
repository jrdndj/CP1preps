#include <stdio.h>
#include <string.h>

int main() {

    //declaring variables
    int dInputUserForPetType;
    char cInputUserForNeuterisation;
    char cIfTheyLeaveEmail;
    char sUserEmail[45];

    //printing messages for user and taking input form user
    printf("Please choose Your pet: ");
    printf("\n 1) dog \n 2) cat \n 3) bird \n 4) reptile \n 5) other\n");
    scanf("%d", &dInputUserForPetType);

    printf("Please, choose insurance fee for Your pet: ");
    printf("\n a) neutered \n b) not neutered\n");
    scanf("%c", &cInputUserForNeuterisation);

    //if statements for User input
    if (dInputUserForPetType == 1 && cInputUserForNeuterisation == 'a') {
        printf("The fee for Your dog is: 50$.");
    } else if (dInputUserForPetType == 1 && cInputUserForNeuterisation == 'b') {
        printf("The fee for Your dog is: 80$.");
    } else if (dInputUserForPetType == 2 && cInputUserForNeuterisation == 'a') {
        printf("The fee for Your cat is: 40$.");
    } else if (dInputUserForPetType == 2 && cInputUserForNeuterisation == 'b') {
        printf("The fee for Your cat is: 60$.");
    } else if (dInputUserForPetType == 3 && (cInputUserForNeuterisation == 'a' || cInputUserForNeuterisation == 'b')) {
        printf("The fee for Your bird is free!");
    } else if (dInputUserForPetType == 4 && (cInputUserForNeuterisation == 'a' || cInputUserForNeuterisation == 'b')) {
        printf("The fee for Your reptile is free!");
    } else if (dInputUserForPetType == 5 && (cInputUserForNeuterisation == 'a' || cInputUserForNeuterisation == 'b')) {
        printf("Sorry, but we still does not have services for Your animal. \n"
               "If You want, You can leaves us your e-mail, and we will notify when we will do!");

    printf("Do You want to leave us Your email? ( Type Y/N ): ");
        switch (cIfTheyLeaveEmail) {
            case 'y':
                scanf("%s", &sUserEmail);
                puts("Thanks, we will notify You soon, hopefully!");
                break;
            case 'Y':
                scanf("%s", &sUserEmail);
                puts("Thanks, we will notify You soon, hopefully!");
                break;
            case 'n':
                puts("We hopes to see You soon!");
                break;
            case 'N':
                puts("We hopes to see You soon!");
                break;
    }//end switch

    } else {
        printf("You inserted wrong format! Try again!");
    } //end if

    return 0;
} //end main

