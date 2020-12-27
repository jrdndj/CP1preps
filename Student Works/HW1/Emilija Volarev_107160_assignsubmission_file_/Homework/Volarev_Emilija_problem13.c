#include <stdio.h>

    int main(){
	
	//declare variables
        int Array[10], OddArray[10], EvenArray[10]; //creating three integer arrays that have capacity of 10

        int i, j = 0, k = 0, dInput;

  	//ask user to put in the size of the array
        printf("\nInput the size of an array: ");
        scanf("%d", &dInput);

	//ask user for elements of the array
        printf("\nElements to be inserted in the array: ");

	
	//creating the first array that will have inserted elements 
        for (i = 0; i < dInput; i++){

            scanf("%d", &Array[i]);

        }//end for

        // put odd and even elements into their respective arrays
        for (i = 0; i < dInput; i++){

            if (Array[i] % 2 == 0){

                EvenArray[j] = Array[i];

                j++;

            }//end inner if

            else{

                OddArray[k] = Array[i];

                k++;

            }//end else

        }//end outer for


	printf("\nArray of the even elements: "); //print array of the even elements

        for (i = 0; i < j; i++){

            printf("%d ", EvenArray[i]);

        }//end for

 
        printf("\nArray of the odd elements: "); //print array of the odd elements

        for (i = 0; i < k; i++){

            printf("%d \n", OddArray[i]);

        }//end for

	
	return 0;

    }//end main
