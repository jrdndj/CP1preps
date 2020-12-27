#include<stdio.h>

int main()
{
	int dDivisors = 0;
	int counter = 0;
	int dN = 1;
	while(counter<=999) //the code ignores 2 numbers, so we have two number less to count!
	{
		dN+=2;
		for(int j = 1; j<=dN; j++) if (dN%j == 0) dDivisors++;
		if (dDivisors==2) counter++; 
		

		
		dDivisors = 0;
	}
	printf("The 1001st prime is: %d", dN);
	return 0;
	
} //end main