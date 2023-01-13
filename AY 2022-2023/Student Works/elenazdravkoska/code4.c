#include <stdio.h>
int main(){
	int n, i, j, k;
	printf("\n Insert a number:");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			printf(" ");
		}
		for(k = i; k<=n; k++){
			printf("*");
		}
		printf(" \n ");
	}
}
