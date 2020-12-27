//Primes printing to our number 
#include<stdio.h>
int main() {

    int n,i,factor,j;
    printf("Enter the Number"); //n is our number, to which we wanna print primes
    scanf("%d",&n); //take n value

    printf("Prime Numbers are: \n"); //printing 
        for(i=1; i<=n; i++) { 

            factor=0; //its zero so later we can ++ it 

            for(j = 1; j <= n; j++) {
                if(i % j == 0)
                    factor++;
            }
            if(factor == 2)
                printf("%d " ,i);
        }

    return 0;
}
