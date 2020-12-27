//This code was written by Marko Taleski :P
//C code for a pet store

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nWelcome to Pet Pals. \n");
    //Here I prompt the user to make a choice if he wants to adopt an animal or not
    printf("\nIf you want to adopt an animal please type yes, if you don't want to adopt an animal type no.\n");
    //I use the variable sChoiceAdoption for the input of yes or no
    char sChoiceAdoption[10];
    //Here i scan for his choice
    scanf(" %s", sChoiceAdoption);
    //With and if statement and strcmp I compare is the input of sChoiceAdoption is yes or Yes or YES depending on how excited the user is
    if ( (strcmp(sChoiceAdoption, "yes") == 0) || (strcmp(sChoiceAdoption, "Yes") == 0) || (strcmp(sChoiceAdoption, "YES") == 0) ) {
       printf("\nThat's great you've come to the right place.\n");
       printf("\nNow we need to know what kind of animal you want to adopt, you can choose from: \nDog-Type d or D, \nCat- type c or C, \nBird-Type b or B \nOr a reptile- Type r or R.\n");
        //We declare a variable cChoiceAnimal so the user can choose between all the animals in the store
       char cChoiceAnimal;
       scanf(" %c", &cChoiceAnimal);
       //I use a switch to distinguish from all the available animals
       switch ( cChoiceAnimal ) {

           //I make 2 cases for dog one were the input is d and the other were the input is D
           case 'd':
                printf("\nA dog, good choice, do you want your dog to be neutered, type yes or no.\n");
                char sChoiceNeuteredDog[10];
                scanf(" %s", sChoiceNeuteredDog);
                //With this if statement i check if the user wants the animal to be neutered or not
                if( (strcmp(sChoiceNeuteredDog, "yes") == 0) ){
                    printf("\nThe insurance fee will be $50.\n");
                    printf("\nThe total adoption will cost you $200\n");
                }//end of if
                else if( ( strcmp(sChoiceNeuteredDog, "no") == 0) ) {
                    printf("\nThe insurance fee will be $80.\n");
                    printf("\nThe total adoption will cost you $230\n");
                }//end of else
            break;//end of case d

            case 'D':
                printf("\nA dog, good choice, do you want your dog to be neutered, type yes or no.\n");
                char sChoiceNeuteredD[10];
                scanf(" %s", sChoiceNeuteredD);
                //Same as the first case, I check if the user wants the animal to be neutered
                if( (strcmp(sChoiceNeuteredD, "yes") == 0) ){
                    printf("\nThe insurance fee will be $50.\n");
                    printf("\nThe total adoption will cost you $200\n");
                }//end of if
                else if( ( strcmp(sChoiceNeuteredD, "no") == 0) ) {
                    printf("\nThe insurance fee will be $80.\n");
                    printf("\nThe total adoption will cost you $230\n");
                }//end of else
            break;//end of case D

            //The same as the dog i use 2 cases for the cat one for input c and one for input C
            case 'c':
                printf("\nA cat, nice, do you want your cat to be neutered, type yes or no.\n");
                char sChoiceNeuteredCat[10];
                scanf(" %s", sChoiceNeuteredCat);
                //The same as the dog i use the if statement to check if the animal should be neutered
                if( (strcmp(sChoiceNeuteredCat, "yes") == 0) ){
                    printf("\nThe insurance fee will be $40.\n");
                    printf("\nThe total adoption will cost you $140\n");
                }//end of if
                else if( (strcmp(sChoiceNeuteredCat, "no") == 0) ) {
                    printf("\nThe insurance fee will be $60.\n");
                    printf("\nThe total adoption will cost you $160\n");
                }//end of else
            break;//end of case c

            case 'C':
                printf("\nA cat, nice, do you want your cat to be neutered, type yes or no.\n");
                char sChoiceNeuteredC[10];
                scanf(" %s", sChoiceNeuteredC);
                //Same as in the case c, checking if the animal should be neutered
                if( (strcmp(sChoiceNeuteredC, "yes") == 0) ){
                    printf("\nThe insurance fee will be $40.\n");
                    printf("\nThe total adoption will cost you $140\n");
                }//end of if
                else if( (strcmp(sChoiceNeuteredC, "no") == 0) ) {
                    printf("\nThe insurance fee will be $60.\n");
                    printf("\nThe total adoption will cost you $160\n");
                }//end of else
            break;//end of case C

            //The same as before 2 cases for the bird, one for b and one for B
            case 'b':
                printf("\nA bird, interesting.\n");
                printf("\nThere is no insurance fee.\n");
                printf("\nThe total adoption will cost you $60\n");
            break;//end of case b

            case 'B':
                printf("\nA bird, interesting.\n");
                printf("\nThere is no insurance fee.\n");
                printf("\nThe total adoption will cost you $60\n");
            break;//end of case B

            //I think you get it at this point 2 cases again
            case 'r':
                printf("\nA reptile, dangerous.\n");
                printf("\nThere is no insurance fee.\n");
                printf("\nThe total adoption will cost you $100\n");
            break;//end of case r

             case 'R':
                printf("\nA reptile, dangerous.\n");
                printf("\nThere is no insurance fee.\n");
                printf("\nThe total adoption will cost you $100\n");
            break;//end of case R

            default:
                printf("\n We currently don't have that animal sorry.\n");
            break;//end of default
        }//end of switch

    }//end of if
    else{
        printf("\nWell that's too bad, have a nice day.\n");
    }//end of else

    return 0;
}
