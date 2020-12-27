#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaring variables
    char cType = '0';
    char cNeutered = '0';

    //prompt the user for the appropriate info
    printf("\n Welcome to Animal insurance Inc.\n A program that prints the insurance fee you'll need to pay for you pet.");
    printf("\n What kind of pet do you have? ");
    printf("\n D or d represents a dog \n C or c represents a cat \n B or b represents a bird \n R or r represents a reptile \n and anything else represents some other kind  of animal\n");
    scanf(" %c", &cType);

    // switch case that determines the insurance fee
    switch( cType ){
            case 'D':
            case 'd':
                printf("Has your dog been neutered? \n Enter Y for yes and N for no.\n");
                scanf(" %c", &cNeutered);
                switch( cNeutered ) {
                    case 'Y': printf("Your insurance fee will be $50."); break;
                    case 'N': printf("Your insurance fee will be $80."); break;
                }//end switch
                break;
            case 'C':
            case 'c':
                printf("Has your cat been neutered? \n Enter Y for yes and N for no.\n");
                scanf(" %c", &cNeutered);
                switch( cNeutered ) {
                    case 'Y': printf("Your insurance fee will be $40."); break;
                    case 'N': printf("Your insurance fee will be $60."); break;
                }//end switch
                break;
            case 'B':
            case 'b':
            case 'R':
            case 'r':
                printf("You have no insurance fees!"); break;
            default:
                printf("\n Currently we do not support insurance for your pet at the moment. \n", cType);
                break;
        }//end switch
        
        return 0;

}//end main