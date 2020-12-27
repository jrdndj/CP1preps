// This progam is written by Katarina Javor, 14.12.2020
// here we have a program that prints the insurance fee to pay for a pet
#include <stdio.h>

int main() {

    // declare varibles
    char cInputAnimal; // what kind of pet the user wants
    char cIfNeutered; // if the user wants it to be neutered

    // inetractive input (aks the user what kind of animal do they have)
    printf("\n Here you can buy the insurance fee for your pet. \n If you have a dog, please input D. \n If you have a cat, please input C. \n If you have a bird, please input B, or if you have a reptile, please input R.\n");
    scanf(" %c", &cInputAnimal);

    // use switch to check what type of pet they have and is it neutered
    switch (cInputAnimal) {
    case 'D':
        printf("\n Is the dog neutered. If yes please press Y, if not please press N");
        scanf(" %c", &cIfNeutered);
        if (cIfNeutered == 'Y') {
            printf("\n The neutered dog costs 50$.");
        } // end if
        else if (cIfNeutered == 'N') {
            printf("\n A dog that has not been neutered costs $80.");
        } // end else if
        else {
            printf("\n Error");
        } // end else
        break;
    case 'C':
        printf("\n Is the cat neutered. If yes please press Y, if not please press N");
        scanf(" %c", &cIfNeutered);
        if (cIfNeutered == 'Y') {
            printf("\n The neutered cat costs 40$.");
        } // end if
        else if (cIfNeutered == 'N') {
            printf("\n A cat that has not been neutered costs $60.");
        } // end else if
        else {
            printf("\n Error");
        } // end else
        break;
    case 'B':
        printf("\n The bird costs nothing");
        break;
    case 'R':
        printf("The reptile costs nothing");
        break;
    default:
        printf("\n Error, input is invalid. Please try again.");
        break;
    }  // end switch 

    return 0;
} // end main