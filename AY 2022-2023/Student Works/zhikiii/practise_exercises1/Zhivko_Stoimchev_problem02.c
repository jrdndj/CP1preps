#include<stdio.h>

int main(){
    int dNum, dSum=0, dCount=0;

    while(dNum!=0){
        printf("Please enter positive integer: ");
        scanf("%d", &dNum);
        if(dNum<0){
            printf("Error! ");
            continue;
        }
        dSum+=dNum;
        dCount++;
    }

    if((float)dSum/dCount==0)
        printf("NO AVERAGE\n");
    else
        printf("%.2f\n", (float)dSum/dCount);
    return 0;
}