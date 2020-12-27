#include <stdio.h>

int main() {

    int dNumberOfElements;

    printf("Please, insert how many elements in the array You will have: ");
    scanf("%d", &dNumberOfElements);

    //allocation of memory and declaration of the arrays
    int dArrayThatUserInput[dNumberOfElements];
    int dArrayWithOdds[dNumberOfElements];
    int dArrayWithEvens[dNumberOfElements];

    //inserting elements in the array
    printf("Type elements of Your array here: \n");
    for (int i = 0; i < dNumberOfElements; i++) {
        scanf("%d", &dArrayThatUserInput[i]);
    } // end for

    int j = 0;
    int k = 0;
    //even nums
    for (int i = 0; i < dNumberOfElements; i++) {
        if (dArrayThatUserInput[i] % 2 == 0){
            dArrayWithEvens[j] = dArrayThatUserInput[i];
        } else {
            dArrayWithOdds[k] = dArrayThatUserInput[i];
        } // end if
    }// end for

    int newJ = j-1;
    //array printing - evens
    while (newJ >= 0){
        printf("%d ", dArrayWithEvens[newJ]);
        newJ--;
    } // end for

    int newK = k-1;
    //array printing - odds
    while (newK >= 0){
        printf("%d ", dArrayWithEvens[newK]);
        newK--;
    } // end for
    return 0;
} //end main
