#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,res;
    float div;
    char c;
    printf("For addition input +, for subtraction input -,\n for division input / and for multiplication input *!\n in case of wrong input we will do addition\n\n");
    scanf("%c",&c);
    printf("Please input numbers for your desired operation\n");
    scanf("%d %d",&a,&b);
    switch(c)
    {
    case '+':
        res = a+b;
        printf("Result of addition of %d and %d is: %d",a,b,res);
        break;
    case '-':
        res = a-b;
        printf("Result of subtraction of %d and %d is: %d",a,b,res);
        break;
    case '/':
        div = a/b;
        printf("Result of division of %d and %d is: %.2f",a,b,div);
        break;
    case '*':
        res = a*b;
        printf("Result of multiplication of %d and %d is: %d",a,b,res);
        break;
    default:
        res = a%b;
        printf("Because you are breaking the program here is moduo of %d and %d: %d",a,b,res);
        break;
    }
    return 0;
}
