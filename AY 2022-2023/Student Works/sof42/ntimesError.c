#include<stdio.h>

void print(int n){
	for(int i=0; i<n; i++){
		printf("\n%d Error\n", i+1);
	}// end for

}// end of fucntion print
int main(){
// declare variable
	int dNum;

	printf("\nEnter an integer: ");
	scanf("%d", &dNum);
	print(dNum);
	return 0;
}//end main