#include <stdio.h>

int main() {
    //variables declaring
    int dNumberThatUserInputs[];
    int dCounter = 0;
    int dSum = 0;
    double dAverage;

    //taking input from user
    printf("Please, insert positive integer, until You deside to end ( then type 0 ): \n");
    printf("Type elements in the array: \n");
    for(int i = 0; ; i++) {
        scanf("%d", &dNumberThatUserInputs[i]);
    }//end for
    if (dNumberThatUserInputs[i] < 0) {
        printf("You put the wrong format, please type positive integer!");
    } else if (dNumberThatUserInputs[i] == 0) {
        dSum += 0;
        dCounter++;
        dAverage = dSum / dCounter;
    } else if (dNumberThatUserInputs > 0) {
        dSum += 0;
        dCounter++;
    } else return 0;

    if (dCounter == 0) {
        printf("There is no average!");
    } else
        printf("This is the average: %d", dAverage);

    return 0;
}// end main
