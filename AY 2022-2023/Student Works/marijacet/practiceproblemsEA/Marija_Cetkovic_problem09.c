#include <stdio.h>

//declare functions
void printArray(int dArray[], int dSize);

int main(){
	//initialize variables
	int dNum, dCountOdd=0,dCountEven=0;

	//user input size of array
	scanf("%d",&dNum);

	//initialize arrays
	int dArray[dNum], dArrayOdd[dNum], dArrayEven[dNum];

	//let user enter the first array
	for (int i = 0; i < dNum; ++i)
	{
		scanf("%d",&dArray[i]);
	}

	for (int i = 0; i < dNum; ++i)
	{	
		//if the element is even add it to the even array
		if (dArray[i]%2==0)
		{
			dArrayEven[dCountEven]=dArray[i];
			//count how many there are so we know the size
			dCountEven++;
		}
		else{ //else add to odd array
			dArrayOdd[dCountOdd]=dArray[i];
			//count them
			dCountOdd++;
		}
	}

	//print both arrays
	printf("\nArray of even numbers is:");
	printArray(dArrayEven,dCountEven);
	printf("\nArray of odd numbers is:");
	printArray(dArrayOdd,dCountOdd);


	return 0;
}//endmain

void printArray(int dArray[], int dSize){
	for (int i = 0; i < dSize; ++i)
	{
		printf("%d ", dArray[i]); //print elements of the array using a for loop
	}
}//endfunc