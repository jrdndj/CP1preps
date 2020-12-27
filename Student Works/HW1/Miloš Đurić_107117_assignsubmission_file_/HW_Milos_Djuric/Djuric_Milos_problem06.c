#include <stdio.h>
#include <limits.h>
/*
Write a program that asks the user to type 10 integers and returns the smallest integer in the
list.
*/
int main (int argc, char *argv[]) {

int dInt = 0, dMin = INT_MAX;

printf("Enter 10 integers. \n");

for (int i = 0; i < 10; ++i) {
	
	printf("%d.num: ", i+1);
	scanf("%d", &dInt);
	
	if (dInt < dMin)	dMin = dInt;
}

printf("Smallest number is: %d", dMin);

return 0;
}