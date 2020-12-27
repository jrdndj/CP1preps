#include<stdio.h>

int main(){
    //declaring variable
    int dStart;
    int dNum;


    //ask the user for input
    printf("Calendar of a specific month will be shown.\n");
    printf("Which day of the week does the month start?\n");
    printf("Input figure among following figures.\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
    scanf("%d", &dStart);
    printf("How many days does the month have?\n");
    scanf("%d", &dNum);

    int dNo = 8 - dStart;
    int dBag = 1;
    int dBeg = dNo-1;

    //prints the day names
    printf("Su\tMo\tTu\tWe\tTh\tFr\tSa");
    printf("\n");

    for(int dCtr=7; dCtr>0; dCtr--){
        if (dStart > 0){
            printf("\t");
            dStart--;
        }//end if
        if (dStart == 0) {
           if (dBag <= dBeg){
            printf("%d\t", dBag);
            dBag++;
        }//end inner if
        }//end outer if

    }//end for

    printf("\n");
    for(int dCtr=0; dCtr<5; dCtr++){
            for (int dCtr1=0; dCtr1<7; dCtr1++) {
                if (dNo <= dNum) {
                printf("%d\t", dNo);
                dNo++;
                }
                else {
                printf("\t");
                }
            }
        printf("\n");
    }//end outer for

    return 0;

}//end main