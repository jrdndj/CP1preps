#include<stdio.h>
int main(){

    //declare
    const char *week[7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
    int daysOfTheWeek, daysOfTheMonth; 

    //text to the user
    printf("\nCalendar of a specific month will be shown.\nWhich day of the week does the month start?\n");
    printf("\n Input figure among following figures.\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
    scanf("%d", daysOfTheWeek);
    printf("\nHow many days does the month have?\n");
    scanf("%d", daysOfTheMonth);

    //use for loop to print the month
    for(int i=0; i < daysOfTheWeek; i++ ){
        printf("  ");
    }

    //print days of the week 
    for(int i = 0; i<=6; i++){
        printf("%d", week[i]);
    }
    // For each day in the month...
for(int i = 1; i <= daysOfTheMonth; i++)
{
    // Print the date for the current day_of_week.
    printf("%d", i);

    // Increment the day_of_week.
    daysOfTheWeek = (daysOfTheWeek + 1) % 7;

    // if the new day_of_week is 0, output a newline to start at the
    // beginning of the next line.
    if(daysOfTheWeek == 0)
        printf("\n");
}


    return 0;
}