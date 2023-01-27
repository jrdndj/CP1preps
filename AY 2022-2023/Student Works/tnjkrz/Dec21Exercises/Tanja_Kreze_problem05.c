#include <stdio.h>

int main()
{
    short int arr[10];
    short int smallest_num;
    
    printf("\nEnter 10 integers in total.");
    for (int i = 0; i <10; i++) {
        printf("\nEnter integer: ");
        scanf("%hd", &arr[i]);
    }
    
    smallest_num = arr[0];
    
    for (int i = 0; i < 10; i++) {
        if (smallest_num > arr[i]){
            smallest_num= arr[i];
        }
    }

    printf("Smallest num is %hd", smallest_num);
    return 0;
}
