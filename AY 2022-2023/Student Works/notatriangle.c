#include<stdio.h>
int main(){
	
	int n;

	printf("\nEnter n: ");
	scanf("%d", &n);

	printf("\n");

	for(int i=0; i<2*n; i++){

		if(i<n){

			for(int j=0; j<i; j++){
				printf("*");
			}

		} else {

			for(int j=0; j<n-(i-n); j++){
				printf("*");
			}

		}

		printf("\n");

	}

	printf("\n");

	return 0;

}//end main
