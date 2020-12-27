//This code was wr++itten by Marko Taleski :P
//C code for duplicate elements in an array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Declaring the variables
    long int dALongInteger = 2000000000;
    int dN=0;
    int i,j;
    int dCounter=0;
    //Asking the user for a number
    printf("\nPlease input a which prime number you want.\n");
    scanf("%d", &dN);

    //I used the same code as Problem 04 but i little changed
    for(i=2; i<=dALongInteger; i++) {

        //First we must assume that the number we are currently on is prime
        int dCheck = 1;

        //For loop to check if the number is prime
        for(j=2; j<=i/2; j++) {
            if(i%j==0)
            {
                dCheck = 0;
                break;
            }
        }

        //If the variable dCheck did not change then its a prime number
        if(dCheck == 1)
        {
          dCounter++;
          if(dCounter == dN) {
            printf("\nThe %d prime number is %d.\n", dN, i);
        }
        }

    }
    return 0;
}
/* I know the code is a combination of the Problem 04 code with some changes but it gets the job done, it can find any prime number bellow 2 000 000 000 so it works,
    i could have done it better but its 5 30 am and i am dead tired so, the code does it's job so i see it as a success */
