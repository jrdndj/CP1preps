#include <stdio.h>

int main(){

    long int ARR[10], OAR[10], EAR[10];
    int i, j = 0, k = 0, n;

    printf("Enter the size of array AR \n");
    scanf_s("%d", &n);

    printf("Enter the elements of the array \n");
    for (i = 0; i < n; i++) {
        scanf_s("%ld", &ARR[i]);
        
    }
    for (i = 0; i < n; i++){
        if (ARR[i] % 2 == 0){
            EAR[j] = ARR[i];
            j++;
        }
        else{
            OAR[k] = ARR[i];
            k++;
        }
    }

    printf("The odd elements are: ");
    for (i = 0; i < k; i++)
    {
        printf("%ld ", OAR[i]);
    }

    printf("\nThe elements of EAR are: ");
    for (i = 0; i < j; i++)
    {
        printf("%ld ", EAR[i]);
    }
}