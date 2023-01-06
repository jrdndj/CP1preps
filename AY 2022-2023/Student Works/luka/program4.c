#include <stdio.h>

main(){

	int firstnum, secondnum;
	int prod = 0;
	printf("Enter two numbers \n");
	scanf("%d %d", &firstnum, &secondnum);

	while(secondnum){

	prod += firstnum;

	secondnum--;
}
	printf("Multiplication of two numbers is %d.",prod);
}
