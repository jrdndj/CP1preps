#include <stdio.h>
#include <stdlib.h>
/*Write a program that asks the user to type an integer N and that writes the number of prime
*numbers lesser or equal to*/
int prime(int n) // function that checks if number is prime
{
      if (n <= 1) // if number is smaller 2 it's prime
        return 0;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0) // if it's divisible
            return 0;

    return 1;
}
int main()
{
    int n,nop = 0,i; // n is number, nop is number of primes, i is counter
    printf("Input a number\n");
    scanf("%d",&n); // input
    for (i = 2; i <= n; i++)
        if (prime(i)) // if number is prime
            printf("%d ", i); // print the number
    return 0;
}
