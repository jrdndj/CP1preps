#include <stdio.h>

/*
	Request user to enter one or two-digit integers, 
then print that input but three times,
until user enters -999.
If user enters ‘1’ then it should print “111”. If user enters ‘8’ then it
should print ‘888’. program will never stop asking for an input until user enters 999.
*/
int main (int argc, char *argv[]) {

	int dInt = 0;
	
	while (1) {
	
		printf("Enter one or two digit integer:");
		scanf("%d", &dInt);
	
		// ambiguous values in task
		if (dInt == 999 || dInt == -999)	break;
		
		
		for (int i = 0; i < 3; ++i)	printf("%d", dInt);
		printf("\n");
	}
	
	return 0;
}