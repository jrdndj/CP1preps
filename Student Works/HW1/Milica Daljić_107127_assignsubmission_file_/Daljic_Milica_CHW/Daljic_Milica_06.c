#include <stdio.h>

int main() {

    //declaration of variables and array
    int dNumbers[10];
    int dSmallestNum;

    //taking input from the user
    printf("Please input 10 numbers for array: \n");
    for (int i = 0; i < 10; i++) {                //10/sizeof()
        scanf("%d", &dNumbers[i]);
    }//end for
    dSmallestNum = dNumbers[0];

    //finding the smallest element in an array
    for (int i = 0; i < 10; i++) {
        if (dSmallestNum > dNumbers[i]){
            dSmallestNum = dNumbers[i];
        }//end if
         }//end for
    printf("Smallest number in Your array is: %d", dSmallestNum);




    return 0;
}//end main
