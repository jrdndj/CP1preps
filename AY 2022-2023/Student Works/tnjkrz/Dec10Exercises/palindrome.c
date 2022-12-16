#include <stdio.h>

/*

	Ask the user to enter a 4 digit integer. The program should determine if the number is a palindrome.

*/


int main(){

	int number = 0, reverse = 0, remainder, originalNum;


	printf("Enter a 4 digit integer: ");
	scanf("%d", &number);
	originalNum = number;

	for (;number>0;){
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}

	if (originalNum == reverse){
		printf("%d is a palindrome", originalNum);
	} else {
		printf("%d is not a palindrome", originalNum);
	}

	return 0;
}
