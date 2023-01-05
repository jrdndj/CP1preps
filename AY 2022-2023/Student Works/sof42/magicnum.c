#include<stdio.h>
//function
void magic(int n){
// declare variable
	int sum=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
			sum+=i;
		}// end if
	}// end for
	if(sum==n){
		printf("a magic number!\n\n");
	}//end if
	else{
		printf("NOT a magic number!\n\n");
	}// end else
}// end of function magic


int main(){
// Declare variable
	int dNum, dArrSize, dArrSum=0;
	int dArr[dArrSize];
// PART 1
	printf("Enter an integer: ");
	scanf("%d", &dNum);
	magic(dNum);
// PART 2
	//prompt for input
	printf("\nInsert array size: ");
	scanf("%d", &dArrSize);
	for (int i=0; i<dArrSize; i++){
		printf("\nPlease insert %d element of array: ", i );
		scanf("%d", &dArr[i]);
	}
	// determine which aarray elements are magic
	for (int i=0; i<dArrSize; i++){
		printf("\nElement at index [%d] of array, which is %d, is ", i, dArr[i] );
		magic(dArr[i]);
	}
// PART 3
	// determine the sum of all array elements
	for(int i=0; i<dArrSize; i++){
		dArrSum+=dArr[i];
	}
	// see whether the sum is magic or not
	printf("The sum of the array is ");
	magic(dArrSum);

	return 0;
}// END MAIN