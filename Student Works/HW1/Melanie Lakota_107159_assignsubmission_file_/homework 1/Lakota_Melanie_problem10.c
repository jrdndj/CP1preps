

#include <stdio.h>

int main()
{
    //declare variables
    char sUserInput;
    char sCurrentFloor='g';
    char sGroundFloor='g';
    char dFirstFloor='1';
    char dSecondFloor='2';
    char dThirdFloor='3';
    char dFourthFloor='4';
    char sAnswerYes='y';
    char sanswerNo='n';

    //introduction message and scan user input
    printf("\n Hello and welcome to the elevator. Which floor would you like to go to? \n");
    printf("\n You can choose between ground floor (g), first floor (1), second floor (2), third floor (3) and fourth floor (4). \n");
    scanf(" %c", &sUserInput);
    
    //while the user enters one of the defined floors, do the next tasks
    while (sUserInput == sGroundFloor || dFirstFloor || dSecondFloor || dThirdFloor || dFourthFloor) {
        
        //if user enteres the floor they're currently on, let them know and ask if they want to leave the elevator
        if(sUserInput == sCurrentFloor) {
            printf("\n You are currently on floor %c. Would you like to leave the elevator? \n", sCurrentFloor);
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
            
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                scanf(" %c", &sUserInput);
            }//endif
        }//endif    
        
        
        //if user says they wish to go to the ground floor, do the following 
        if(sUserInput == sGroundFloor) {
            sCurrentFloor = sUserInput;

            //let user know what floor they're on and ask if they if they want to leave the elevator
            printf("You have come to the ground floor. Would you like to leave the elevator? \n");
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
            
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                printf("\n Reminder: you are on floor %c. \n", sCurrentFloor);
                scanf(" %c", &sUserInput);
            }//endif
        }//endif
        
        if(sUserInput == dFirstFloor) {
            
            sCurrentFloor = sUserInput;
            
            //let user know what floor they're on and ask if they if they want to leave the elevator
            printf("You have come to the first floor. Would you like to leave the elevator? \n");
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
            
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                scanf(" %c", &sUserInput);
                printf("\n Reminder: you are on floor %c. \n", sCurrentFloor);

            }//endif
        }//endif
        
        
        if(sUserInput == dSecondFloor) {
            sCurrentFloor = sUserInput;

            //let user know what floor they're on and ask if they if they want to leave the elevator
            printf("You have come to the second floor. Would you like to leave the elevator? \n");
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
            
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                 printf("\n Reminder: you are on floor %c. \n", sCurrentFloor);
                scanf(" %c", &sUserInput);
            }//endif
        }//endif
        
        if(sUserInput == dThirdFloor) {
            sCurrentFloor = sUserInput;
            
            //let user know what floor they're on and ask if they if they want to leave the elevator
            printf("You have come to the third floor. Would you like to leave the elevator? \n");
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
    
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                printf("\n Reminder: you are on floor %c. \n", sCurrentFloor);
                scanf(" %c", &sUserInput);
            }//endif
        }//endif
        
        if(sUserInput == dFourthFloor) {
            sCurrentFloor = sUserInput;
            
            //let user know what floor they're on and ask if they if they want to leave the elevator
            printf("You have come to the fourth floor. Would you like to leave the elevator? \n");
            printf("\n Type 'y' if you would like to leave the elevator and type 'n' if you wish to stay. \n");
            scanf(" %c", &sUserInput);
    
            
            //if they say they wish to leave, thank them and exit program
            if (sUserInput == sAnswerYes) {
                printf("Thank you for using our elevator service! See you next time!");
                return 0;
            }//endif
            
            
            //if they say they wish to stay, ask where they would wish to go and scan what they say
            if (sUserInput == sanswerNo) {
                printf("\n Okay great! Where are we going next? \n");
                printf("\n Reminder: you are on floor %c. \n", sCurrentFloor);
                scanf(" %c", &sUserInput);
            }//endif
        }//endif
    }//endwhile
    
    
    //this doesn't work every time I try it and I don't know why but here is my idea I hope you like it, the elevator works perfectly if you enter correct values
    if (sUserInput != sGroundFloor || dFirstFloor || dSecondFloor || dThirdFloor || dFourthFloor) {
        printf("\n Enter a valid floor. \n");
        return 0;
    }//endif
        
    if (sUserInput<1) {
        printf("\n Enter a valid floor. \n");
        return 0;
    }//endif
    return 0;
}
