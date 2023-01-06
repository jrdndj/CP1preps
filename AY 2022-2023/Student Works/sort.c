#include<stdio.h>
int main(){
	
	int A[4] = {33, 12, 111, -9}, temp;

	for(int i=0; i<4; i++){

		for(int j=i+1; j<4; j++){

			if(A[j]<A[i]){

				temp = A[i];
				A[i] = A[j];
				A[j] = temp;

			}

		}

	}

	for(int i=0; i<4; i++){
		printf("%d ", A[i]);
	}
	pritnf("\n");

	return 0;

}//end main
