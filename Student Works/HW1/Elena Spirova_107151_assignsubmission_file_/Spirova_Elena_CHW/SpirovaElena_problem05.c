#include<stdio.h>

int main()
{
    //declare variables
    int dNuM,I,J,K=1, a, b;

    //prompt
    printf("Please enter a positive number:");
    scanf("%d",&dNuM);
    for(I=1; I<=dNuM; I++){
     for(J=1;J<I;J++){
        printf(" * ");
     }
     printf(" * \n");
     }

     for(a=dNuM; a>=0; a--){
     for(b=0;b<a;b++){
        printf(" * ");
     }
     printf(" * \n");
     }

    return 0;
}
