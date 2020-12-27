#include<stdio.h>

int main ()

{
    
    int dUser, dPrime; //declaring variables

    printf("Enter a number: "); //printing message
    scanf("%d", &dUser); //user input
    printf("Prime number less and equal to %d are: ", dUser); //printing message before results

    for (int i=1 ; i<=dUser ; i++) { //for looping going until user input
        dPrime=1; //assigning first prime number
        for (int j=2 ; j<i ; j++) //for loop incrementing number used for dividing
            if (i%j==0) //checking reminder
            {
                dPrime=0;
                break;
            }
            if (dPrime) {
                printf(" %d ", i); } //printing prime numbers
    } //end first for
    
    return 0;
    
}