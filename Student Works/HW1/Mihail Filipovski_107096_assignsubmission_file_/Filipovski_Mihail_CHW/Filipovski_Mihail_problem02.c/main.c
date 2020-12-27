#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   printf("Enter value for n: \n");
   scanf("%d",&n);
   for(int i=n;i>=1;i--){
    for(int k=n-i;k>0;k--){
        printf(" ");
    }
    for(int j=i;j>0;j--){
    printf("*");
    }
    printf("\n");
   }

    return 0;
}
