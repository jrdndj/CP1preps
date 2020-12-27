#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter value for n \n");
    scanf("%d", &n);
    int counter=0;
    for(int i=0;i<n;i++){
        if((n%i==0) && (n%1==0)){
            counter++;
        }
    }
    printf("the number of prime numbers is %d", counter);
    return 0;
}
