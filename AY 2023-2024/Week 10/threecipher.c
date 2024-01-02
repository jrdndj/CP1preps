/*
	A program that lets the user enter 5 numbers
	into an array. 
	Then inspect each number. Replace each number
	if they are divible by 3. Replace them with 0. 

	array={2,3,4,5,6}
	array={2,0,4,5,0}

	filename: threecipher.c
*/
#include<stdio.h>

int main(){
	//declare int array
	int dNumbers[5];

	//get input from the user using a for loop
	for(int i=0; i<5; i++){
		printf("\n Enter number %d: ", i+1);
		scanf("%d", &dNumbers[i]);

		//check if the number is divisible by 3 
		if(dNumbers[i]%3==0){
			//if true replace it by zero
			dNumbers[i] = 0; 
		}//endcheck divisible by 3
		//else ignore it
	}//endfor

	//we need a separate for loop to print them
	for(int i=0; i<5; i++){
		printf("\n %d ", dNumbers[i]);
	}//endprint for
	return 0; 
}//endmain





