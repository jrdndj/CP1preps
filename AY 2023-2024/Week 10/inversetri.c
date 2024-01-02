/* 
	The program that prints an 
	inverse right triangle
	if n = 4
	****
	***
	**
	* 
	filename: inversetri.c
*/
#include<stdio.h>

int main(){
	//declare 
	int dSize;

	printf("\n How many \'*\' are there in the base? ");
	scanf("%d", &dSize);
	for(int j=dSize; j>0; j-- ){
		for(int i=0; i<j; i++){
			printf("*");
		}//endinnerfor
		printf("\n");
	}//end outerfor
	return 0; 
}//endmain










for(int i=0, j=4; i<j && j%2==0; i++, j--){
	printf("*");

	}//endinnerfor













