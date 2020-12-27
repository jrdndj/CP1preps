#include <stdio.h>

/*
Write a program that asks the user to type an integer N and that writes the number of prime
numbers lesser or equal to N.
*/
int isPrime (unsigned long long);

int main (int argc, char *argv[]) {

	int dInt = 0;
	
	printf("Enter positive number:");
	scanf("%d", &dInt);
	
	printf("Primes <= %d are:", dInt);
	
	for (int i = 2; i <= dInt; ++i) {
		
		if (isPrime(i))	printf("%d\n", i);
	}
	
	return 0;
}

/*
1979339339
1000000223
10691097123712491259
9876543210230123456789

return:
	1 prime
	0 not prime
*/
int isPrime (unsigned long long n) {
	
	unsigned long long half = n/2;
	
	for (unsigned long long i = 2; i <= half; ++i) {
		
		if (n % i == 0)	return 0;	
	}
	return 1;
}