#include <stdio.h>
#include <stdlib.h>
/*
* Homework 2, math magic, look up homework 2 text of Computer practicum 1 for a detailed description
* Amir Hadžipašić
* 89201282
*/
int input() // this function is used for... *input*
{
    int dInput = -1; // dInput is used to save the input of the user, it's initialized to -1 so i can run it trough a while looš
    while (dInput < 0 || dInput > 10) // while integer is not positive or is greeter than 10 repeat the input
    {
        printf("Human input a positive integer between 1 and 10\n");
        scanf("%d",&dInput); //input
    }
    return dInput;
}

 long long int factorial(int n) //this function is used for.. factorial..
{
    long long int i; // this is a counter for loop
    double dSum = 1; // this variable is used for calculating factotorial
    for (i = 1; i < n+1; i++)
        dSum *= i;
    return dSum;
}

int magic(int n) //this function finds the k (look up task text)
{
    int dTmp; // temporary used for storing square of n
    dTmp = n*n;
    while(1)
    {
        if (factorial(n) % dTmp == 0) // if factorial of K is divisible by n
            return n;
        else
            n++;
    }
}
int main()
{
    int dCounter; //this variable is used for number of cases
    int i; // this is a counter for loop
    printf("How many cases do you want ?\n");
    scanf("%d",&dCounter);
    printf("\n");
    int dArray[dCounter]; // declaring array with number of cases
    for (i = 0; i < dCounter; i++) // inputing in aray
        dArray[i] = input();
    printf("\n");
    for (i = 0; i < dCounter; i++) // finding and printing K values
        printf("%d\n",magic(dArray[i]));
    return 0;
}
