/*
Challenge 02: Ask the user to enter 10 Integers in an array. 
Print the contents of the array. Then sort the array in ascending 
order then print the sorted array. Consider duplicate numbers in 
your solution.
*/

#include <stdio.h>
int main()
{
	//declaring variables and array
	int myNum[10];
	int i, j, a;

	//insert elements for array
	printf("Enter the elements: ");
	for(int i = 0; i < 10; ++i) 
	{
     scanf("%d", &myNum[i]);
  	}

  	//forloop for sorting the array
	for (int i = 0; i < 10; i++)
	{
   	for (int j = i + 1; j < 10; j++)
   	{
   		if (myNum[i] > myNum[j])
   		{
   			a = myNum[i];
         	myNum[i] = myNum[j];
         	myNum[j] = a;
      	}//endif
   	}
	}

	//print the sorted array
	printf("Array elements: ");
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", myNum[i]);
	}
	return 0;
}