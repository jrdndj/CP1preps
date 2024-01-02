/*
	A program that allows the user to enter 4 bits. 
	Each bit has their equivalent value. 

	The program should print its decimal value
	e.g. 0011 = 3

	filename: bit.c
*/
#include<stdio.h>
#include<math.h> //use the pow

int main(){
	int sum=0;
	int bits[4]; //0 to 3, read from L to R
	//index 0 is x8 , index 1 is x4, 2 is x2, 3 is x1

	//"bit wise" user input, one bit at a time
	for(int i=0; i<4; i++){
		printf("\n Enter bit %d: ", 4-i);
		scanf("%d", &bits[i]);
	}//endfor

	//computing them on demand
	for(int i=0; i<4; i++){
		printf("\n Adding %d", (int)pow(bits[i]*2, 3-i));
		sum = sum + pow(bits[i]*2, 3-i);
		//sum = sum + (bits[i]*2)^(3-i);

	}//endfor

	//print the final value
	printf("\n The decimal value is %d: ", sum);
	return 0; 
}//endmain