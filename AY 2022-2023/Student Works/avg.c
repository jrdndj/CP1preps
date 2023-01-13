#include<stdio.h>
int main(){
	
	int A[50], n=0, sum=0;

	printf("\n");
	do {

		printf("Enter an integer: ");
		scanf("%d", &A[n++]);

		if(A[n-1]<0){
			printf("\nError!\n\n");
			n--;
		}

	} while(A[n-1]!=0);

	for(int i=0; i<n; i++){

		sum += A[i];

	}

	float avg = (float) sum/n;

	if(sum == 0){
		printf("\nNo average\n\n");
	} else {
		printf("\nAverage: %.1f\n\n", avg);
	}

	return 0;

}//end main
