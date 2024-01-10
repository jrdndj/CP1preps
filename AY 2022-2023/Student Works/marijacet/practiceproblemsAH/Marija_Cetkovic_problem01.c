#include <stdio.h>

int main(){

	//declare var
	int dFlats;
	int dCount = 0;

	//user input
	printf("Enter n:\n");
	scanf("%d",&dFlats);
	printf("Enter lights\n");
	int dArray[dFlats];

	//populate array using for loop
	for (int i = 0; i < dFlats; ++i)
	{
		scanf("%d",&dArray[i]);
	}//endfor

	for (int i = 1; i < dFlats -1 ; ++i)
	{
		if(dArray[i-1]==1 && dArray[i]==0 && dArray[i+1]==1){//if left and right are on, middle is disturbed
			dArray[i+1]=0; //turn off right one
			dCount++; //count how many times it happened
		}
	}//endfor
	//print results

	printf("Minimum number of lights to turn off is %d",dCount);

	return 0;
}//endmain