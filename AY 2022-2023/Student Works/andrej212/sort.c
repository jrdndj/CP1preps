#include<stdio.h>

int main(){
	int nList[10];

	//get input from user
	for(int i=1; nCtr<10; nCtr++){
		printf("\n Enter a number:");
		scanf("%d", nList[nCtr]);
	}//endinput

	//iterate again through the array but this time check for even
	for(int nCtr=0; nCtr<10; nCtr++){
		if(nList[nCtr]%2<=0) nList[nCtr]=0;
	}//endinput

	//sort we need two for loops
	//outer for loop to pass thru the 10 elements of the array i to 10
	//inner for loop to check if element j is smaller than i
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			
		}//endinnerforloop
	}//endoutforloop
	return 0; 
}
