#include <stdio.h>

//declare functions
int isPrime(int dNum);

int main(){
	//declare variables
	int dNum;

	//take user input
	scanf("%d",&dNum);

	//print all prime numbers until dNum
	printf("All prime numbers until %d:\n",dNum );
	for (int i = 2; i <= dNum; ++i)
	{
		if (isPrime(i)) //if a number is prime, print it
		{
			printf("%d ",i);
		}
	}
	printf("\n");

	return 0;
}//endmain


int isPrime(int dNum){
	if (dNum <= 1) //numbers less or equal than 1 are not prime
	{
		return 0;
	}
	int dCount = 2; //set count to 2 (prime nums have 2 divisors)

	for (int i = 2; i < dNum; ++i)
	{
		if (dNum%i==0) //if another divisor found, return not prime
		{
			return 0;
		}
	}
	return 1; //if loop didnt find any more divisors it is prime
}