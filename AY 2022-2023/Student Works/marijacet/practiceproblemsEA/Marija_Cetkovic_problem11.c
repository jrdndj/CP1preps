#include <stdio.h>
#include <limits.h> //for INT_MAX

//used function isPrime i made for problem08
int isPrime(int dNum){
	if (dNum <= 1)
	{
		return 0;
	}
	int dCount = 2;

	for (int i = 2; i < dNum; ++i)
	{
		if (dNum%i==0)
		{
			return 0;
		}
	}
	return 1;
}//endfunction

int main(){

	//initialize variables
	int dCount, n = INT_MAX; //n to INT_MAX since we dont know how big the number is

	//loop through all numbers until we find the desired
	for (int i = 2; i < n; ++i) //2 is the first prime number
	{
		if (isPrime(i)==1) //if a number is prime
		{
			dCount++; //count it
			if (dCount == 1001) //when the count reaches 1001
			{
				printf("1001st prime number is %d\n", i); //print the 1001st prime number
				break; //break for
			}//endif
		}//endif
	}//endfor
	return 0;
}//endmain