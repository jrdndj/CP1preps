#include <stdio.h>
int main(){
	
	int i, j,k;
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("n = %d\n", n);

	for( i = n; i >= 1; i-- ){

		for(j = n; j > i; j--)
		{
			printf(" ");
		}

		for ( k=1; k<=i; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}//endouterforloop

	return 0;
}