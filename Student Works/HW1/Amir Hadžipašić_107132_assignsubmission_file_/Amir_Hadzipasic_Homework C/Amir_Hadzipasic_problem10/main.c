#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
*Simulate an elevator-controller program. The Elevator should be able to travel between five
*floors namely Ground, 1st, 2nd, 3rd and 4th floor. The elevator can either travel going up or
*going down. The elevator can only contain one passenger (which is the current user of the
*program). Initially, the elevator begins and loads at the ground floor. If the user wants to travel to
*the 4th floor, the elevator shall go to the said floor. It is the option of the user if they want to
*leave the elevator or no
*/

// puts on Black sabbath *programming intensifies*

void delay(int number_of_seconds){ // this is for comedic purposes, mass effect elevators are gold for mine one
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int elevator(int sf) // i'm tired of commenting code but this one is for elevator thingy
{
    int n,ner = 0; //n is surprisingly number and ner is number of errors
    delay(1); // wait 1 second
    system("cls");  // clear screen
    printf("Choose from panel:\n0 1 2\n3 4\n");
    while (n < 0 || n > 5) // range of input
        {
        scanf("%d",&n);
        ner++;
        if (ner == 2) // error joke thingy
            printf("Sir you need to press 0,1,2,3 or 4 button\n");
        else if (ner > 3) // error joke thingy
            printf("SOMEONE TEACH THIS GORILLA HOW TO OPERATE AN ELEVATOR\n");
        }
    while(sf != n) // while floor isn't inputted
        {
            if (sf < n) // if it's larger
                {
                sf++; // increment
                printf("Floor %d..%d\n",sf-1,sf);
                }
            else
                {
                sf--; // decrement
                printf("Floor %d..%d\n",sf+1,sf);
                }
            delay(7);
        }
        printf("We have reached on floor %d\n",n);
        return n;
}
int main()
{
    int n = 0,i;
    n = elevator(n);
    while (i != 0)
        {
        printf("Do you want to ride the elevator again ? (input 1 for yes and 0 for no)\n");
        scanf("%d",&i);
        if (i != 0)
            n = elevator(n);
        }
    return 0;
}
