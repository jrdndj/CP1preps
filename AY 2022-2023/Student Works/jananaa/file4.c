/*
Challenge 03: Ask the user to enter 10 integers (5 even, 5 odd) 
in an array. Print the contents of the array. All even numbers 
in the array should be sorted in ascending order ( in the first 
"half" of the array). Then all odd numbers should be sorted in 
descending order (in the second "half" of the array).
*/

#include <stdio.h>
int main()
{
	//declearing variables
	int myNum[10], even[5], odd[5];
	int i, j=0, k=0, a;
	
	//insert elements
	printf("Enter the elements: ");
	for(int i = 0; i < 10; ++i) 
	{
     scanf("%d", &myNum[i]);
  	}

	//for loop for even and odd numbers
	for (int i = 0; i < 10; i++)
	{
		if (myNum[i]%2==0)
		{
			even[j] = myNum[i];
			j++;
			
		}
		else
		{
			odd[k] = myNum[i];
			k++;
		}
	}

	//for loop for sorting the even
	for (int i = 0; i < 5; i++)
	{
   		for (int j = i + 1; j < 5; j++)
   		{
   			if (even[i] > even[j])
   			{
   				a = even[i];
         		even[i] = even[j];
         		even[j] = a;
      		}
   		}
	}

	//for loop for sorting the odd
	for (int i = 0; i < 5; i++)
	{
   		for (int j = i + 1; j < 5; j++)
   		{
   			if (odd[i] < odd[j])
   			{
   				a = odd[i];
         		odd[i] = odd[j];
         		odd[j] = a;
      		}
   		}
	}

	//print sorted arrays
	printf("Even sorted elements: ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d ", even[i]);
	}

	printf("\nOdd sorted elements: ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d ", odd[i]);
	}
	return 0;
}