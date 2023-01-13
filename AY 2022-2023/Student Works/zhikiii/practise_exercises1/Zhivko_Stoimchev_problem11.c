#include<stdio.h>

int is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void check_prime(int n){
    int dCount=0, dPrime=0;
    while(dCount<n){
        for(int i=2; dCount<n; i++){
            if(is_prime(i)==1){
                dCount++;
                dPrime=i;
            }
        }
    }
    printf("%d\n", dPrime);
}

int main()
{
    int dCheck;
    printf("Enter a number: ");
    scanf("%d", &dCheck);

    check_prime(dCheck);

    return 0;
}
