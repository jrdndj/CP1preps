#include <stdio.h>
#include <stdlib.h>

/*
    Write a program that asks the user to type 10 integers and returns the smallest integer in the
    list.

*/
int main()
{
    //declare variables
    int a[10], dN, dI, dTemp;
    int dMin = 0;

    printf("Enter 10 integers: ");
    for(dI=0; dI<10; dI++){
        scanf("%d", &a[dI]);
    }

    dMin = a[0];
    for(dI=0; dI<10; dI++){
        if(dMin>a[dI]){
            dMin = a[dI];
        }
    }
    printf("The smallest number in the list is: %d", dMin);

    return 0;
}
