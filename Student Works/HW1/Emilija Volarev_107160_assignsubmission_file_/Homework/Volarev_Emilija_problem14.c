#include <stdio.h>

#define MAX_SIZE 25  // Maximum array size

int main(){

    //declare variables
    int array[MAX_SIZE];
    int i, j, size, dCount = 0;

    //ask user to input the size of the array 
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    //ask user to input the elements of the array 
    printf("Enter elements in array : ");
    for(i=0; i<size; i++){

        scanf("%d", &array[i]);
    }//end for

    // finding all duplicate elements in array
     
    for(i=0; i<size; i++){

        for(j=i+1; j<size; j++){

            //if there are duplicates found then the counter increases by 1 
            if(array[i] == array[j]){
                dCount++;
                break;
            }//end if
        }//end inner for
    }//end outer for

    printf("\nTotal number of duplicate elements found in array: %d\n", dCount);

    return 0;
}//end main
