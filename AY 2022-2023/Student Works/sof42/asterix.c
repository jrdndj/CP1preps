#include<stdio.h>

int main(){
	//declare variables
	int dStar;
	printf("\n Please enter a value between 1 and 10: ");
	scanf("%d", &dStar);
	for(int i = dStar; i>=1; i--){
		for(int j = 1; j<=i; j++){
			printf("*");
		}//endinnerfor
		printf("\n");
	}//endouterfor
}//endmain
