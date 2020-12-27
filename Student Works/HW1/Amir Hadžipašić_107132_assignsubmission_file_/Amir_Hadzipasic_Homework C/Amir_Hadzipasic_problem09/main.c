#include <stdio.h>
#include <stdlib.h>
/*
*Calendar Generator: A program that will show the specific month. It will ask the user which day
*of the week it will start, the date and how many days does it have.
*/
int main()
{
    int n = 9,nod,tmp = 1;; //n is number and nod is number of days tmp is temporary counter variable
    int i;
    printf("Calendar of a specific month will be shown.\n"
    "Which day of the week does the month start?\n"
    "Input figure among following figures.\n"
    "0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n"); // multi line output
    while (n < 0 || n > 6) // while number is out of range
        scanf("%d",&n); // input number
    printf("Now kind sir input length of month\n");
    scanf("%d",&nod); // input number of days
    printf("\nSu  Mo  Tu  We  Th  Fr  Sa\n"); // printing day form
    for (i = 0; i < 7; i++) // printing first 7 days
        {
        if (i >= n) // if i is equal or higher than start of month
        {
            printf("%d   ",tmp); // print number in form of month
            tmp++; // increment temp
        }
        else
            printf("    "); // print space
        }
    printf("\n"); // newline
    i = tmp; // i is equal to tmp
    tmp = 0; // tmp is equal to 0
    while(i < nod) // while i is smaller than number of days
        {
        if (i < 10) // if i is smaller than 10
            printf("%d   ",i); // print in this form
        else
            printf("%d  ",i); // if i is higher than 10 print in this form
        i++; // increment
        tmp++; // increment
        if (tmp % 7 == 0) // if tmp is divisible by seven (end of week dummy)
            printf("\n"); // newline
        }
    return 0;
}
