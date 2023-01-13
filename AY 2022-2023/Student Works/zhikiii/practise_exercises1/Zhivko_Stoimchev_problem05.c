#include<stdio.h>

int main(){

    int dNumber;
    printf("Enter 10 numbers: ");
    scanf("%d", &dNumber);

    int dSmallest=dNumber;

    for (int i = 1; i < dNumber; i++)
    {
        scanf("%d", &dNumber);
        if(dNumber<dSmallest)
            dSmallest=dNumber;
    }

    printf("The smallest number from the given numbers is %d\n", dNumber);
    return 0;
}
