#include <stdio.h>
#include <stdlib.h>

int main() {
    int truntnoNadstropje = 0;
    int numOfPeople = 1;
    while (1){
        char nadstropje[2];

        printf("you are now on floor %i\n", truntnoNadstropje);
        printf("\nto which floor do you want to go?\n");

        if(scanf(" %c",&nadstropje) != 1){
            printf("incorrect input");
            continue;
        }

        if(nadstropje[0] == 'P' || nadstropje[0] == '1' || nadstropje[0] == '2' || nadstropje[0] == '3' || nadstropje[0] == '4' || nadstropje[0] == '5'){
            if(nadstropje[0] == 'P') nadstropje[0] = '0';
            if ((atoi(&nadstropje[0])) > truntnoNadstropje){
//              go up
                while (truntnoNadstropje < (atoi(&nadstropje[0]))){
                    char yesNo;
                    if(numOfPeople > 0) {
                        printf("\nThere are %i people in elevator\n", numOfPeople);
                        printf("you are on floor %i do you want to go out[y/n]?", truntnoNadstropje);
                        scanf(" %c", &yesNo);
                        if (yesNo == 'y') {
                            numOfPeople--;
                        }
                    }else{
                        printf("\nThere are %i people in elevator\n", numOfPeople);
                    }
                    if(numOfPeople < 7) {
                        printf("\nThere are %i people in elevator\n", numOfPeople);
                        printf("you are on floor %i did anybody enter[y/n]?", truntnoNadstropje);
                        scanf(" %c", &yesNo);
                        if (yesNo == 'y') {
                            numOfPeople++;
                        }
                    } else{
                        printf("\nThere are alrady max number people in elevator");
                    }

                   truntnoNadstropje++;
                }
            } else {
//              go down
                while (truntnoNadstropje > atoi(&nadstropje[0])){
                    char yesNo;
                    if(numOfPeople > 0){
                        printf("\nThere are %i people in elevator\n", numOfPeople);
                        printf("you are on floor %i do you want to go out[y/n]?", truntnoNadstropje);
                        scanf(" %c",&yesNo);
                        if(yesNo == 'y'){
                            numOfPeople--;
                        }
                    } else{
                        printf("\nThere are %i people in elevator\n", numOfPeople);
                    }
                    if(numOfPeople < 7) {
                        printf("you are on floor %i did anybody enter[y/n]?", truntnoNadstropje);
                        scanf(" %c", &yesNo);
                        if (yesNo == 'y') {
                            numOfPeople++;
                        }
                    } else {
                        printf("\nThere are alrady max number people in elevator");
                    }

                    truntnoNadstropje--;
                }

            }

        }else{
            printf("incorrect input\n");
            continue;
        }
    }
    return 1;
}
