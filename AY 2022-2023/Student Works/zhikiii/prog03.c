/*Problem: A C program that asks the user to enter a number between 1 to 10.
Then the program prints an inverted right triangle with the
input number as the base (or max number) of asterisks.

sample input: 5
output:
*****
 ****
  ***
   **
   	*
*/

#include <stdio.h>

int main(){
	int dNum;
	scanf("%d", &dNum);
	for(int i=0; i<dNum; i++){
		for(int j=0; j<i; j++){
			printf(" ");
		}
		for(int k=i; k<dNum; k++){
			printf("*");
		}
		printf("\n");
	}
}