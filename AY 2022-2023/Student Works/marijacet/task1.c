#include <stdio.h>

int main(){

//declare variables
int dNum = 0;

printf("\nPlease enter a number: ");
scanf("%d", &dNum);
//int dNum2 = 0;
//printf("\nPlease enter another one: ");

if ( (dNum/2)*2==dNum ){
	printf("\n %d is an even number.\n", dNum);
}
else printf("\n %d is an odd number.\n", dNum);


return 0;
}
