#include <stdio.h>
#define MAX_SIZE 25

int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

    printf("Enter size of the array (min 5,max 25) : ");
    scanf_s("%d", &size);

    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}