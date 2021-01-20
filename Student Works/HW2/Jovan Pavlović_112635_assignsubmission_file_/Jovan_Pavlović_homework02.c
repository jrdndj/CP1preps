#include <stdio.h>
#include <stdlib.h>

long long factorial(long n); // function that calculates factorial
double leastMultiple(long dFct,long n); // function that calculates final output

int main(int argc, char const *argv[])
{
	long ldT; // variable that reperesents number of inputs
	scanf("%ld",&ldT);

	if (ldT > 200000 || ldT < 0) // check if variable respects given bounds
	{
		printf("Exception: your input must be < 200000\n");
	}

	double* leArray = (double*) calloc(ldT, sizeof(double));
	// ^array for storing answers since they are hard to calculate 
	// in sense of time complexity
	for (int i = 0; i < ldT; ++i)
	{
		long ldInput; // variable that represents input
		if (ldInput > 200000 || ldInput < 0) // check if variable respects given bounds
	    {
		    printf("Exception: your input must be < 200000\n");
	    }

		long long ldFactorial;
		double leRes;
		scanf("%ld",&ldInput);

		if (leArray[i] != 0) // chck if result is already calulated
		{
			printf("%le\n", leArray[i]); // return output
			continue;
		}

		ldFactorial = factorial(ldInput);
		leRes = leastMultiple(ldFactorial,ldInput);
		leArray[ldInput] = leRes;
		printf("%le\n", leRes); // return output
	}
	return 0;
}

long long factorial(long ldN){
	if (ldN == 1)
		return 1;
	if (ldN == 2)
		return 2;
	double ldF = 1;
	for (long i = 2; i <= ldN; ++i)
	{
		ldF*=i;
	}
	return (long long) ldF;
}

double leastMultiple(long ldF,long ldN){
	double ldLeast = 1;
	for (long i = 1; i <= ldN; ++i)
	{
		ldLeast *= (ldN + i);
		if((long long)ldLeast % ldF == 0)
			return (double) ldN + i;
	}
	return (double) 2*ldN;
}
// ^LOGIC BEHIND THIS FUNCTION^
/* 
   Since (N!)^2 | K! => K!/N!N! is whole number
   Hence K! = PN! / N!N! = > P/N! is whole number
   Hence P is of form (N+1)*(N+2)*...*(N+R);
   By induction is proovable that N+P <= 2N
   So when checking possible results we are iteratin from (N+1) to (N+N) 

*/