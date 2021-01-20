#include<stdio.h>

unsigned long long factorial(int dNum)
{
	unsigned long long lluFact = 1;
	//printf("Enter integer: ");
	//scanf("%d", &dNum);
	//error if negative integer
	if (dNum < 0)
	printf("Error, negative int.");
	else 
	{
		for (int i = 1; i <= dNum; ++i) 
		{
			lluFact *= i;
		}
	//printf("\nFactorial of %d is %llu", dNum, lluFact);
	}
	return lluFact;
}
int main()
{
	int dN;
	int dT;
	unsigned long long lluNumSquared;
	printf("Enter number of cases: ");
	scanf(" %d", &dT);
	fflush(stdin);
	int dArrayN[dT];
	//printf("\nCreated input array ");
	//loading N's into array
	for(int dCnt = 0; dCnt<dT; dCnt++)
	{
			printf("Enter next number: ");
			scanf(" %d", &dArrayN[dCnt]);
			fflush(stdin);
	}

	//everything is about to become arrays, N's become very big
	//printf("\nLoaded ints ");
	unsigned long long lluArrayNFactSquared[dT];
	//printf("\nCreated ullArray");
	//unsigned long long dShouldntExist;
	for(int dCnt = 0; dCnt<dT; dCnt++)
	{
		//printf("\nIn loop, step %d", dCnt);
		//dShouldntExist = factorial(dArrayN[dCnt]);
		printf("OK ");
		lluArrayNFactSquared[dCnt] = factorial(dArrayN[dCnt])*factorial(dArrayN[dCnt]);	
	}
	//printf("\nLoaded ullArray");
	int dArrayOutput[dT];
	//printf("OK ");
	for(int dCnt = 0; dCnt<dT; dCnt++)
	{
		for(int dK = 1; dK<200000; dK++) //SHOULD IT BE <=??
		{
			if(factorial(dK) % lluArrayNFactSquared[dCnt] == 0)
			{
				dArrayOutput[dCnt] = dK; //save output of k's
				break;
			}
		}
		//THIS SHOULD WORK BUT IT DOES NOT AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA:(
	}
	
	for (int dCnt = 0; dCnt < dT; dCnt++)
	{
		printf("\nOut: %d", dArrayOutput[dCnt]);
	}
	
	
	

	return 0;
}
