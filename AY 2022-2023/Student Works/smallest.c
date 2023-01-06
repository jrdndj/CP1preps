#include<stdio.h>
int main(){
	
	int A[10];

	printf("\nEnter 10 integers: ");

	for(int i=0; i<10; i++){

		scanf("%d", &A[i]);

	}

	int min = A[0];

	for(int i=0; i<10; i++){

		if(min > A[i]){
			min = A[i];
		}

	}

	printf("\nSmallest integer: %d\n\n", min);

	return 0;

}//end main
