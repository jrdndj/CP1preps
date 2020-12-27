#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variable
    char cUserInput;

    //Ask user for floor
    printf("Hello, can you please tell me, what floor you want to go to? \n");
    printf("\n G for ground, \n 1 for the first floor, \n 2 for the second floor, \n 3 for the third floor, \n 4 for the fourth floor, \n X for exiting the elevator: \n\n");
    scanf(" %c", &cUserInput);

    //Checking the user input
    while(cUserInput!='X') {
    if(cUserInput=='G') {
        printf("\nYou arrived at the ground floor. Where do you wanna go next: ");
        scanf(" %c", &cUserInput);
    } else if(cUserInput=='1') {
        printf("\nYou arrived at the first floor. Where do you wanna go next: ");
        scanf(" %c", &cUserInput);
    } else if(cUserInput=='2') {
         printf("\nYou arrived at the second floor. Where do you wanna go next: ");
        scanf(" %c", &cUserInput);
    } else if(cUserInput=='3') {
     printf("\nYou arrived at the third floor. Where do you wanna go next: ");
        scanf(" %c", &cUserInput);
    } else if(cUserInput=='4') {
     printf("\nYou arrived at the fourth floor. Where do you wanna go next: ");
        scanf(" %c", &cUserInput);
    }
    }
    printf("You left the elevetor, have a nice day! ");

return 0;
}//endmain
