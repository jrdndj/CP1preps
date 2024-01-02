/*
	Encryption, ciphers
	The program will allow the user to enter values in an array
	There are 5 slots in the array. 
	These are integer values. 

	The program then inspects each element of the array. 
	If the value is divisible by 7, we replace with the value 99. 

	Then we print the values of the array

	filename: seven.c
*/
#include<stdio.h>

int main(){
	int dNum[5]; 

	//get values from the user 
	for(int i=0; i<5; i++){
		printf("\n Enter number %d: ", i+1);
		scanf("%d", &dNum[i]);

		//inspect
		if(dNum[i]%7==0){
			dNum[i]=99;
		}//endif

	}//endfor

	//print the values
	//force a space
	printf("\n ");

	for(int i=0; i<5; i++){
		printf("%d ", dNum[i]);
	}//endfor
	
	//force a space
	printf("\n ");

	return 1; 
}//

