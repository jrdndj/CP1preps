#include <stdio.h>
#include <stdlib.h>

int main()
{
    char animal,n;
    printf("Enter the species of animal \n");
    scanf("%c", &animal);
    printf("Enter neutered or unneutered \n");
    scanf(" %c", n);
    if((animal=='d') && (n=='neutered')){
        printf("The price is 50$");
    }
    else if((animal=='d') && (n=='unneutered')){
        printf("The price is 800$");
    }
        return 0;

}
