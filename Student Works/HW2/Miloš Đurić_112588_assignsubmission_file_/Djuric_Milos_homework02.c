#include<stdio.h>

void printTests(int[], int);
int minFactor(int);
unsigned long long fact(int);
int reverseFact(unsigned long long);

int dLimit = 200000;

/*
created by Milos Djuric		89201297
11.01.2021

due to long long unsigned limit this app works from 1-10 int 
*/
int main (int argc, char *argv[]) {

	
	printf("How many numbers you want to test: ");
	int dLen;
	scanf("%d", &dLen);
	
	if (dLen < 0 || dLen > dLimit) {		
		printf("Number must be between 1 and %d\n", dLimit);
		return 1;
	}

	int dTests[dLen];
	
	// get user numbers
	int dCounter = 0;
	while (dCounter < dLen) {
		
		printf("%d num :", dCounter + 1);
		scanf("%d", &dTests[dCounter]);
		if (dTests[dCounter] < 0 || dTests[dCounter] > dLimit) {
			printf("Number must be between 1 and %d\n", dLimit);
			continue;
		}
		
		++dCounter;
	}
	
//	int dTests[] = {4,5,7,10,24};
//	int dLen = sizeof dTests / sizeof dTests[0];

	printTests(dTests, dLen);

return 0;
}

/*
	return 0 if no real factoriel number
*/
int minFactor (int n) {
	
	unsigned long long lluN = fact(n);
	lluN = lluN * lluN;		// square
	
	for (int i = 1; i < dLimit; ++i) {
		
		int k = reverseFact(lluN * i);
		if (k != 0) {
			return k;
		}
	}
	
	return 0;
}



/*
	create desired output table on screen.
*/
void printTests (int arr[], int dLen) {
	
	printf("\nSample Input      Sample Output\n");
	printf("_______________________________\n");
	
	for (int i = 0; i < dLen; ++i) {
	
		if (arr[i] < 1 || arr[i] > 200000)	continue;
		
		printf("\n| %-15d", arr[i]);
		printf("| %-10d |", minFactor(arr[i]));
	}

	printf("\n_______________________________\n");
}

/*
	
10!	3628800
15	1307674368000
20	2432902008176640000
*/
unsigned long long fact (int num) {
	
	unsigned long long res = 1;
	
	for (int i = 1; i <= num; ++i) {
		
		res *= i;
	}
	
	return res;
}

/*
125 5
720 6

finds reverse factoriel

return n for n!
	0 if not real factoriel number
*/
int reverseFact(unsigned long long lluFact) {
	
	int dCounter = 2;
	
	while (lluFact % dCounter == 0) {
		
		lluFact = lluFact / dCounter;
		if (lluFact == 1)	return dCounter;	
		++dCounter;
	}
	
	return 0;
}






