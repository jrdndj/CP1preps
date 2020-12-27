#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Do not use GOTO statements. you took the fun out of it

int main(){


    //declare variables
    char cCurrentFloor = 'G';
    bool bHasExited = false;

    while(!bHasExited){

        switch ( cCurrentFloor){

            case '1':
                printf("You are at the first floor.\n");
                printf("Leave: X,\nGo to ground floor: G,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;
             case '2':
                printf("You are at the second floor.\n");
                printf("Leave: X,\nGo to ground floor: G,");
                printf("\nGo to first floor: 1,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");

            break;
             case '3':
                printf("You are at the third floor.\n");
                printf("Leave: X,\nGo to ground floor: G,");
                printf("\nGo to first floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to fourth floor: 4,\n");
            break;
             case '4':
                printf("You are at the fourth floor.\n");
                printf("Leave: X,\nGo to ground floor: G,");
                printf("\nGo to first floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,\n");

            break;
             case'G':
                printf("You are at the ground floor.\n");
                printf("Leave: X,\nGo to first floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;
            case'g':
                printf("You are at the ground floor.\n");
                printf("Leave: X,\nGo to first floor: 1,");
                printf("\nGo to second floor: 2,");
                printf("\nGo to third floor: 3,");
                printf("\nGo to fourth floor: 4,\n");
            break;
        }//endSwitch

        char cInput;
        scanf(" %c", &cInput);

        switch ( cInput){

            case '1':
                cCurrentFloor = '1';
            break;
             case '2':
                cCurrentFloor = '2';
            break;
             case '3':
                cCurrentFloor = '3';
            break;
             case '4':
                cCurrentFloor = '4';
            break;
             case'G':
               cCurrentFloor = 'G';
            break;
            case'g':
               cCurrentFloor = 'g';
            break;
            case'X':
               cCurrentFloor = 'X';
               printf("You have left the elevator.");
               bHasExited = true;
            break;
            case'x':
               cCurrentFloor = 'x';
               printf("You have left the elevator.");
               bHasExited = true;
            break;

        }//endSwitch
    }//endWhile

    return 0;
}//endMain
