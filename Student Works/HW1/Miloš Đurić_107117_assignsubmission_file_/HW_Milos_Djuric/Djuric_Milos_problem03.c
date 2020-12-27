#include <stdio.h>

/*
Write a program that asks user to type a positive integer.
When user types a negative value program writes ERROR and asks for another value.

When user types 0, that means that last value has been typed 
and program must write average of positive integers.
If number of typed values is zero program writes 'NO AVERAGE'.
*/
int main (int argc, char *argv[]) {

int dInt = 0;
int dCounter = 0;
unsigned long long llSum = 0;

printf("Enter positive integer:\n");
while (1) {

	scanf("%d", &dInt);
	if (dInt < 0) {
		printf("ERROR: You must enter positive values. Try again.\n");
		continue;
	}
	
	if (dInt == 0)	break;
	
	llSum += dInt;
	++dCounter;
}

if (dCounter == 0) printf("NO AVEGARE\n");
else printf("Average: %lf", (double)llSum / (double)dCounter);

return 0;
}