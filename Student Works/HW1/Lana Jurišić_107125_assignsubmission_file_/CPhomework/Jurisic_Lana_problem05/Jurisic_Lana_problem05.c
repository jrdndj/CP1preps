#include <stdio.h>
#include<conio.h>
int main()
{
int dN;
int i;
int j;
printf("Enter number of rows to show star pattern: ");
scanf("%d",&dN);
for(i = 1; i <= dN; i++)
{
for(j = 1; j <= i;  j++)
{
printf("*");
}
printf("\n");
}
for(i = dN; i >= 1; i--)
{
for(j = 1; j <= i; j++)
{
printf( "*");
}
// ending line after each row
printf("\n");
}
return 0;
}
