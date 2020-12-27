#include <stdio.h>

int main() {

    //declaring variables
    static int dFlorNum = 0;
    int dUserInput;
    char cUserAnswer;

    //taking input from user
    printf("Please, insert number for Your floor ( 0 for ground floor): \n");
    scanf("%d", &dUserInput);
    dFlorNum = dUserInput;

    //handling if the input is negative number
    if (dUserInput < 0)
        dUserInput *= -1;

    dFlorNum = dUserInput;
    switch (dFlorNum) {
        case 0:
            printf("You are on the ground floor.\n");
            break;
        case 1:
            printf("You are on the first floor.\n");
            break;
        case 2:
            printf("You are on the second floor.\n");
            break;
        case 3:
            printf("You are on the third floor.\n");
            break;
        case 4:
            printf("You are on the fourth floor.\n");
            break;
    }

    printf("Do You want to use lift once again? Type your answer (y/n): \n");
    scanf("%s", &cUserAnswer);

    if ((cUserAnswer == 'y' || cUserAnswer == 'Y') && (dFlorNum == 1 || dFlorNum == 2 || dFlorNum == 3)) {
        printf("Woah, You take a drive with us once again, thanks!\n");
        printf("Btw, You are now on the %d floor.", dFlorNum);
    } else if ((cUserAnswer == 'y' || cUserAnswer == 'Y') && (dFlorNum == 0)) {
        printf("Woah, You take a drive with us once again, thanks!\n");
        printf("Btw, You are now on the ground floor.", dFlorNum);
    } else if (cUserAnswer == 'n' || cUserAnswer == 'N') {
        printf("Hopefully we will see You again, bye, bye!\n");
    } else {
        printf("Wrong format, please, check Your answer.\n");
    }







    return 0;
} //endmain
