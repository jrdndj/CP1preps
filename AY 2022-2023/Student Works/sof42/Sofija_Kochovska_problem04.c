#include<stdio.h>
int main(){
//declare variables
	int dMaxAsterix;

//prompt the user for input
	printf("\nPlease insert the maximum value for asterixes: ");
	scanf("%d", &dMaxAsterix);

//make the triangle
	for(int i=0; i<dMaxAsterix; i++){
		for(int j=0; j<=i; j++){
			printf(" *");
		}//endfor2
		printf("\n");
	}//endfor1
	for(int i=dMaxAsterix; i>0; i--){
		for(int j=0;j<i; j++){
			printf(" *");
		}//endfor2
		printf("\n");
	}//endfor1
	return 0;
}//endmain