#include<stdio.h>

int main()
{
	int dPosInt = -1;
	int dElements = 0;
	int sum = 0;
	float fAverage = 0;
	
	while(dPosInt!=0)
	{
		printf("Enter a positive integer pls: ");
		scanf(" %d", &dPosInt);
		fflush(stdin);
		if(dPosInt<0 )
		{ 
			printf("ERROR\n");
		}
		if(dPosInt>0) 
		{
			dElements++;
			sum+=dPosInt;
		}
	}
	if(dElements==0)
	{
		printf("NO AVERAGE\n");
	}
	else
	{
		fAverage = (float)sum/dElements;
		printf("Average is: %.4f \n", fAverage);
	}
	return 0;
	
} //end main