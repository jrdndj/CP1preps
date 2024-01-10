#include <stdio.h>

int main(){
	//declare variables
	int dArray[10], dMin;

	//ask for user input
	printf("Please enter 10 numbers\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&dArray[i]); //let user input elements in the array through loop
	}

	dMin = dArray[0]; //set min initially to first element of the array

	for (int i = 1; i < 10; ++i) //loop through the rest of the elements
	{
		//if the next element is smaller than min, change min
		if (dMin>dArray[i])
		{
			dMin = dArray[i];
		}
	}

	printf("The smallest number is %d.\n", dMin); //printsmallest
	return 0;
}//endmain