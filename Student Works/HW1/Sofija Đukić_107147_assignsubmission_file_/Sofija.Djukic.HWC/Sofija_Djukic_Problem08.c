#include <stdio.h>

int main()
{
    int dNumb;
    int i,j;
    scanf("%d",&dNumb);
    for(i=1; i<=10; i++){
        for(j=1; j<=dNumb; j++){
                printf("%d\t", i*j);
    }
    printf("\n");
    }
    return 0;
}