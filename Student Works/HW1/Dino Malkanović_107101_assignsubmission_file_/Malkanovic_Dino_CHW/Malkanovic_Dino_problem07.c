#include<stdio.h>

int main ()

{
    
    int dUser=0; //declaring variable
    
    while (dUser!=999) { //while loop reapiting until user enter 999
        printf("\nEnter a 1 or 2 digit number: "); //priting message
        scanf("%d", &dUser); //user input
        if (dUser>-1 && dUser<100) { //priting user input 3 times if its a 1 or a 2 digit integer
            printf("%d%d%d", dUser,dUser,dUser); }
    }

    return 0;
    
}