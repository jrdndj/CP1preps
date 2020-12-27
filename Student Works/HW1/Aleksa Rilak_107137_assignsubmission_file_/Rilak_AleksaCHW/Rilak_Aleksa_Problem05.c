//Pattern which goes maximum to our given number

#include<stdio.h>

int main()
{
    int i;
    int j;
    int n;
    int num;
    printf("Enter the number n:"); // number of columns
    scanf("%d",&n);

    num=1;

    for(i=1; i<n*2; i++) {
        for(j=1; j<=num; j++) {
            printf("*");
        }

        if(i < n) {
            num++; //incrementing for first half of the pattern
        }
        else {
            num--; //decrementing from the other half
        }
        printf("\n"); //new line 
    } //end for loop

    return 0;
} //endmain
