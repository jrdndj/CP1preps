//Enter from 1 to 10 and the program prints a for loop with asterisks in inverted right triangle
#include <stdio.h>
int main(){
	int dn;
	printf("\nEnter a number between 1 and 10");
	scanf("%d", &dn);

	for(int i=0; i<dn;i++){
		for(int j=0; j<dn; j++)
		{
			printf("*");
			for(int j=dn; j>=i ; j--)
		{
			
			printf(" ");
		}
		printf("\n");
		}

	}


	return 0;
}