/*
This program was written by Melanie Lakota on 15th December 2020. It doesn't really work but here's my idea
*/

#include <stdio.h>

int main()
{
    //declare variables
    int dNum;
    
    //ask user how large they want the shape and scan input
    printf("\n How many lines do you wish to have? \n");
    scanf("%d", &dNum);
    
    
    //create loop for printing the stars
    //for some reason it isn't working, this is my idea but it just prints a block of dNum stars...

    for (int i=1; i<=dNum; i++) {
        //here I calculate the spaces(start at 0 and increase each row)
        for(int j=0; j<=dNum; j++) {
            printf(" ");
        }
        //and here I calculate the stars but something isn't working
        for(int k=dNum; k>0; k--) {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
