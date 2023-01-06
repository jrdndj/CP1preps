#include <stdio.h>

/*
    Ask the user to enter 10 integers in an array (5 even, 5 odd). Print the contents
    of the array. All even numbers in the array should be sorted in ascending order (in the first
    "half" of the array). Then all odd numbers should be sorted in descending order (in the second
    "half" of the array).
*/

int main(){
	int arr[10];
	int arrEven[5];
	int arrOdd[5];

        //ask user for integers for array
		printf("Please enter 5 even and 5 odd integers");
        for (int i = 0; i < 10; ++i)
        {
                printf("\nEnter number %d: ", i+1);
                scanf("%d", &arr[i]);
        }


        //sorts the array of even numbers in ascending order
        	int evenCount = 0;
                for (int i = 0; i < 10; ++i)
	                {
	                	if (arr[i]%2==0) {
	                        	arrEven[evenCount] = arr[i];
	                        	evenCount++;
	                        }
	                }

                for (int i = 0; i < 5; ++i)
	                {
	                	
	                        for (int j = 0; j < 4 - i; ++j)
	                        {
	                        	if (arrEven[j] > arrEven[j+1]) {
	                                	int temp = arrEven[j];
	                                	arrEven[j]= arrEven[j+1];
	                                	arrEven[j+1]=temp;
	                		}
	                }
                }


        //sorts the array of odd numbers in descending order
                int oddCount = 0;
                for (int i = 0; i < 10; ++i)
	                {
	                	if (arr[i]%2==1) {
	                        	arrOdd[oddCount] = arr[i];
	                        	oddCount++;
	                        }
	                }

                for (int i = 0; i < 5; ++i)
	                {
	                        for (int j = 0; j < 4 - i; ++j)
	                        {
	                                if (arrOdd[j] < arrOdd[j+1]) {
	                                        int temp = arrOdd[j];
	                                        arrOdd[j]= arrOdd[j+1];
	                                        arrOdd[j+1]=temp;
	                                }
	                        }

                }

        //print elements of array
        for (int i = 0; i < 5; ++i)
        {
                printf("%d ", arrEven[i]);
        }

        for (int i = 0; i < 5; ++i)
        {
                printf("%d ", arrOdd[i]);
        }

        return 0;
}