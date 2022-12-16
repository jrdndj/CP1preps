#include <stdio.h>
int main(){
	int n;
	
	printf("\n Print an inverted right triangle: ");
	scanf("%d", &n);

	for (int i=0; i<n; i++)
	{
		for (int j; j>=i; j++){
			printf(" ");
		}
		for (int k=n; k>n+(n-1); ++k){	
	
			printf(" * ");
		}

	}
	return 0;
}
