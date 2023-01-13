#include<stdio.h>
int main(){
	
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	for(int i=0; i<n+1; i++){

		for(int k=0; k<i; k++){
			printf(" ");
		}

		for(int j=n; j>i; j--){
			printf("*");
		}

		printf("\n");

	}

	return 0;

}//end main
