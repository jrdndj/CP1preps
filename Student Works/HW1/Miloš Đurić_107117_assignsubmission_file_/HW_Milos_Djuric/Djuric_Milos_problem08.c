#include <stdio.h>
/*
Multiplication Table:
A program that will ask user to input an integer between 1 to 10 only.
If user inputs “2”, it will display multiplication table values from 1 from 1 to 10 and
values of 2 from 1 to 10. If user inputs “4”, it will display like as shown below:
x 1 2 3 4
1 1 2 3 4
2 2 4 6 8
3 3 6 9 12
4 4 8 12 16
5 5 10 15 20
6 6 12 18 24
7 7 14 21 28
8 8 16 24 32
9 9 18 27 36
10 10 20 30 40
The headers on top are multiplied to first column, and values in middle are its
respective product values.

*/
int main (int argc, char *argv[]) {

	int dInt;
	
	printf("Enter integer from 1 to 10: ");
	scanf("%d", &dInt);
	
	if (dInt < 1 || dInt > 10)	{
		printf("Values between 1 and 10 only.");
		return 1;
	}
	
	
	printf("\nx\t");
	for (int i = 1; i <= dInt; ++i)	printf("%d\t", i);
	printf("\n");
	
	for (int a = 1; a <= 10; ++a) {
		
		printf("%d\t", a);
		for (int b = 1; b <= dInt; ++b) {
			
			printf("%d\t", a*b);
		}
		printf("\n");
	}
	
	return 0;
}