#include <stdio.h>

/*  
    Ask the user to enter 10 integers in an array. Print the contents of the array.
    Then sort the array in ascending order then print the sorted array. Consider duplicate
    numbers in your solution
*/

int main(){

	int arr[10];

        //ask user for integers for array
        for (int i = 0; i < 10; ++i)
        {
                printf("\nEnter number %d: ", i+1);
                scanf("%d", &arr[i]);
        }


        //sorts the array
                for (int i = 0; i < 10; ++i)
                {
                        for (int j = 0; j < 10 - i; ++j)
                        {
                                if (arr[j] > arr[j+1]) {
                                        int temp = arr[j];
                                        arr[j]= arr[j+1];
                                        arr[j+1]=temp;
                                }
                        }
                }

        //print elements of array
        for (int i = 0; i < 10; ++i)
        {
                printf("%d ", arr[i]);
        }

        return 0;
}