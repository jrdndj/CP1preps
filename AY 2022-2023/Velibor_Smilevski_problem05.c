#include <stdio.h>

int main(){
	int  dArr[10], dNum, smallest;

	printf("Enter 10 numbers: " );
	scanf("%d", &dNum);

	for (int i = 0; i < dNum; i++)
	{
		scanf("%d", &dArr[i]);

	}
	smallest = dArr[0];

	for (int i = 0; i < dNum; i++){
		if (dArr[i] < smallest){
			smallest = dArr[i];
		}
	}

	printf("\nSmallest number is: %d", smallest );
	printf("\n");

	return 0;


}