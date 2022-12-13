#include<stdio.h>
int main(){
	
	//declare vars
	int A[10], count=0;

	//enter array
	printf("Enter ten integers: ");
	for(int i=0; i<10; i++){
		scanf("%d", &A[i]);
	}

	//print array + counts odd
	printf("\n");
	for(int i=0; i<10; i++){

		if(i==9){
			printf("%d", A[i]);
		}
		else {
			printf("%d, ", A[i]);
		}

		if(A[i]%2!=0){
			count++;
		}

	}

	//print odd
	printf("\nThere's %d odd numbers in your array\n", count);

	return 0;

}//end main
