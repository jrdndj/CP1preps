#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,res; // declaration
    printf("Please input 3 numbers operation\n");   //Asking for input
    scanf("%d %d %d",&a,&b,&c);   //input
    res = (a*b)/3 + 4*c - b; // voodoo magic
    printf("My voodoo magic on numbers produced this: %d",res); //printing out
}
