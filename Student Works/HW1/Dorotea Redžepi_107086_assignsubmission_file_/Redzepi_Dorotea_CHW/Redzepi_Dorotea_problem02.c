#include<stdio.h>

int main(){
	int N;
	
	printf("Please eneter integer value N: ");
	scanf("%d", &N);
	
	// We have two for loops, inner that will iterate through a single row, and outer that will iterate through rows
	
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if( j < i ){
				printf(" ");
			}
			else{
				printf("*");
			}		
		}
		printf("\n");
	
	}
	return 0;
}
