#include <stdio.h>
/*
Write a C program that will perform the following functions below:
Allow the user to enter a number.
This number will determine the maximum number of asterisks
in a row.
Print a left-based triangle that will have the user’s input number as the maximum
number. For example, if the user inputs the number 5, the output should be as displayed below:

*
***
****
*****
****
***
**
*
*/
int main (int argc, char *argv[]) {

int dSize;
printf("Enter max value for stars:");
scanf("%d", &dSize);

int index = 1;
int down = 1;

while (index > 0) {
	
	
	for (int i = 0; i < index; ++i)		printf("*");
	printf("\n");
	
	if (down == 1 && index < dSize) {
		
		++index;
		continue;
	}
	
	if (index == dSize) {
		down = 0;
	}
	
	--index;	
}



return 0;
}
