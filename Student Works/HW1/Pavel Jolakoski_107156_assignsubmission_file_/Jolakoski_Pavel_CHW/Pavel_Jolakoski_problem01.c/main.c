#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("If you want to adopt an animal please type yes, if you don't want to adopt an animal type no.\n");

    //declaring variables
    char sChoiceAdoption[10];

    scanf(" %s", sChoiceAdoption);

    if ( (strcmp(sChoiceAdoption, "yes") == 0) || (strcmp(sChoiceAdoption, "Yes") == 0) || (strcmp(sChoiceAdoption, "YES") == 0) ) {
       printf("\nWhat kind of animal you want to adopt: \nDog-Type d or D, \nCat- Type c or C, \nBird-Type b or B \nOr a reptile- Type r or R.\n");

       char cChoiceAnimal;
       scanf(" %c", &cChoiceAnimal);

       switch ( cChoiceAnimal ) {


           case 'd':
                printf("\nDo you want your dog to be neutered, type yes or no.\n");
                char sChoiceNeuteredDog[10];
                scanf(" %s", sChoiceNeuteredDog);

                if( (strcmp(sChoiceNeuteredDog, "yes") == 0) ){
                    printf("\nThe insurance fee will be $50.\n");
                }//endIf
                else if( ( strcmp(sChoiceNeuteredDog, "no") == 0) ) {
                    printf("\nThe insurance fee will be $80.\n");
                }//endElse
            break;

            case 'D':
                printf("\nDo you want your dog to be neutered, type yes or no.\n");
                char sChoiceNeuteredD[10];
                scanf(" %s", sChoiceNeuteredD);

                if( (strcmp(sChoiceNeuteredD, "yes") == 0) ){
                    printf("\nThe insurance fee will be $50.\n");
                }//endIf
                else if( ( strcmp(sChoiceNeuteredD, "no") == 0) ) {
                    printf("\nThe insurance fee will be $80.\n");
                }//endElse
            break;

            case 'c':
                printf("\nDo you want your cat to be neutered, type yes or no.\n");
                char sChoiceNeuteredCat[10];
                scanf(" %s", sChoiceNeuteredCat);

                if( (strcmp(sChoiceNeuteredCat, "yes") == 0) ){
                    printf("\nThe insurance fee will be $40.\n");
                }//endIf
                else if( (strcmp(sChoiceNeuteredCat, "no") == 0) ) {
                    printf("\nThe insurance fee will be $60.\n");
                }//endElse
            break;

            case 'C':
                printf("\nDo you want your cat to be neutered, type yes or no.\n");
                char sChoiceNeuteredC[10];
                scanf(" %s", sChoiceNeuteredC);

                if( (strcmp(sChoiceNeuteredC, "yes") == 0) ){
                    printf("\nThe insurance fee will be $40.\n");
                }//endIf
                else if( (strcmp(sChoiceNeuteredC, "no") == 0) ) {
                    printf("\nThe insurance fee will be $60.\n");
                }//endElse
            break;

            case 'b':
                printf("\nThere is no insurance fee for birds.\n");
            break;

            case 'B':
                printf("\nThere is no insurance fee for birds.\n");
            break;

            case 'r':
                printf("\nThere is no insurance fee for reptiles.\n");
            break;

             case 'R':
                printf("\nThere is no insurance fee for reptiles.\n");
            break;

            default:
                printf("\n Please enter one of the given options.\n");
            break;
        }//endSwitch
    }//endIf
    else{
        printf("\nWell that's too bad, have a nice day.\n");
    }//endElse

    return 0;
}
