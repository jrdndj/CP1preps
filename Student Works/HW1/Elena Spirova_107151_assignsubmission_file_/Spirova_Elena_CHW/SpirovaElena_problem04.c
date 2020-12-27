/*Problem 04.c
Write a program that asks the user to type an integer N
and that writes  the number of prime
numbers lesser or equal to N.*/
#include <stdio.h>

int main()
{
    int num,upto,i,counter=0;
    printf("Enter range:\n");
    scanf("%d",&upto);
    printf("\nThe number of prime numbers up to %d:",upto);
 for(num = 2; num <= upto; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        // If the number is prime then count it.
        if(i != num) {
            counter++;
        }
    }
printf("%d",counter);
    return 0;
}
