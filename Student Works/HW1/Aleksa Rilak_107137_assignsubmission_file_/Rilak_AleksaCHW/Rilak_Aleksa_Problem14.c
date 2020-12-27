#include <stdio.h>
#define MAX_SIZE 100  // to avoid error buss dump core (error???)

int main() {
    int i, j, n, count = 0;
    int arr[MAX_SIZE];

    printf("Enter size of the array : "); // Input size of array 
    scanf("%d", &n);
    printf("Enter elements in array : "); // Input elements in array 
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) { //Find all duplicate elements in array
        for(j=i+1; j<n; j++) {
                                                  
            if(arr[i] == arr[j]) { // If duplicate found then increment count by 1 
                count++;
                break;
            }
        }
    }

    printf("\nNumber of duplicate elements found in array = %d", count);

    return 0;
} //endmain

