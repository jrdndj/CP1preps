long long int nPrime (int n) {

	unsigned long long dInt = 0;
	int dPrimeCounter = 0;
	
	while (++dInt) {
		
		if (isPrime(dInt))	++dPrimeCounter;
		if (dPrimeCounter == n) {
			return dInt;
		}
	}
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
	
	if (n <= 1)	return 0;
	
	unsigned long long half = n/2;
	
	for (unsigned long long i = 2; i <= half; ++i) {
		
		if (n % i == 0)	return 0;	
	}
	return 1;
}
// #include<conio.h>
char YN (char str[]) {
	
	printf("%s (y/n)", str);
	
	while (1) {
		
		char c = getch();
		if (c == 'y' || c == 'Y') {
			
			printf(" %c\n", c);
			return 1;
		} else if (c == 'n' || c == 'N') {
			
			printf(" %c\n", c);
			return 0;
		} 
	}
}





void calendar (int dStart, int dDays) {

	// ok to sanitize user input
	dStart = dStart % 7;	// 0-6
	dDays = dDays > 31 ? 31 : dDays;
	dDays = dDays < 1 ? 1 : dDays;
	
	
	// European week starts with Monday
	printf("Mo	Tu	We	Th	Fr	Sa	Su\n");
	
	// tab padding
	for (int i = 0; i < dStart; ++i)	printf("\t");
	
	for (int i = 1; i <= dDays; ++i) {
		
		printf("%d", i);
		if ((i+ dStart) % 7 == 0)		printf("\n");
		else							printf("\t");
	}
}





