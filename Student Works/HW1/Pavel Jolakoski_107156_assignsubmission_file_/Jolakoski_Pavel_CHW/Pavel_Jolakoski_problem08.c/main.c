#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int dN=0;

    //Asking the user for an input
    printf("\nPlease enter a number between 1 and 10.\n");
    scanf("%d", &dN);

    //I am printing the X out side of any for loop so it doesn't get copied all the time
    printf("X   ");

    //For loop so we print out the first row before the multiplication
    for(int i=1; i<=dN; i++) {
        printf("%d  ", i);
    }

    //Printing a new line so the main for loop that prints the multiplication can start
    printf("\n");

    //Main for loop that print the multiplication
    for(int i=1; i<=10; i++) {

        printf("%d  ", i);

        for(int j=1; j<=dN; j++) {

            int temp=0;
            temp=i*j;
            printf("%d  ", temp);

        }//end of inner for loop
        printf("\n");
    }//end of main loop
    return 0;
}
