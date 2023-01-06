#include<stdio.h>

int main(){
	int number;

	printf("\n Please enter number: ");

	scanf("%d", &number);


	for(int i = 0; i < number; i++){
		printf(" ");
		
		for(int i = 0; i < number; i--){
			printf("*");
		}
	}
	return 0;
}