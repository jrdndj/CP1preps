#include <stdio.h>

int check_prime(int dNumber){
    for(int i=2; i<dNumber; i++){
        if(dNumber%i==0){
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{

    int dNumberToCheck, dCount=0;
    printf("Enter an integer N: ");
    scanf("%d", &dNumberToCheck);

    for(int i=2; i<dNumberToCheck; i++){
        if(check_prime(i)==0)
            dCount++;
    }

    printf("%d\n", dCount);

    return 0;
}