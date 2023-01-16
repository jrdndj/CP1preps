#include <stdio.h>

int main(){
	//declare variable
	int dNum;

	//take user input
	scanf("%d",&dNum);

	//nested for, for a dNumxdNum matrix
	for (int i = 0; i < dNum; ++i)
	{
		//for the lower diagonal print space
		for (int j = 0; j < i; ++j)
		{
			printf(" ");
		}
		//for the upper diagonal print *
		for (int j = 0; j < dNum - i; ++j)
		{
			printf("*");
			
		}
		printf("\n"); //print new line to switch to new row
	}

	return 0;
}//endmain