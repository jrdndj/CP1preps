#include <stdio.h>

int main(){
	// count even numbers in an array

	int dArr[10]; //declare empty int array
	int dCount = 0; //initialize counter
	printf("Enter elements of your array\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&dArr[i]);  //let user insert values
		if(dArr[i]%2==0){  //check for even
			dCount++;      //count even
		}//endif
	}//endfor
	printf("Number of even elements is %d\n", dCount);

	return 0;
}