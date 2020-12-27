#include<stdio.h>

int main()
{
	//i assume we start from 0, not -∞, as that would be quite a bit more difficult
	int dN = 0;
	int dDivisors = 0;
	
	printf("Enter a positive integer pls: ");
	scanf(" %d", &dN);
	fflush(stdin);
	if (dN >= 2) printf("2 "); //i hate this, i really hate this
	
	for(int i = 1; i<=dN; i++) //for all numbers 1 to N
	{
		if (i % 2 == 0 && dN != 2) continue; //skip even numbers except 2, there probably is a much cleaner way but oh well
		for(int j = 1; j<=i; j++) if (i%j == 0) dDivisors++ ;
		//  /\ if number is divisible by number from 1 to itself, increment dDivisors
		
		if (dDivisors==2) printf("%d ", i); //if number had only two divisors, 1 and itself, print it as it's a prime
		dDivisors = 0; //reset divisors and start for next number
	}
	return 0;
	
} //end main