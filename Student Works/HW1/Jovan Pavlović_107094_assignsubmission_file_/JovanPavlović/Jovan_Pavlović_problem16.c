#include<stdio.h>
#include<math.h>

int isPrime(int n){
	if ( n % 2 == 0) // integer is even and > 2, hence not prime
		return 1;
	if ( n % 3 == 0) // integer is divisible by 3 and > 3, hence not prime
		return 1;
	for (int i = 3; i <= sqrt(n); i+=2) // start from last checked prime divisor
	{                                   // since all prime numbers > 2 are odd, nth prime+1 
		                                // is even and hence isn't prime
                                        // so proceed checking divisors with step 
		if ( n % i == 0)
			return 1;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int checked = 6; // informations provided from exercise
	int prime = 13;
	while (checked < 1001){
		prime += 2;
		int res = isPrime(prime);
		if (res == 0){
			checked++; // keep track of checked number of primes
		}
	}
	printf("1001st prime number is %d \n", prime);
	return 0;
}
