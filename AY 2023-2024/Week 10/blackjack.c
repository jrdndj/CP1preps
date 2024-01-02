/*
	A program that lets the user enter numbers into an array
	Then the program will scan pairs of elements in the array
	from 0 to n. 
	If the current i and i+1 sum > 25, print black jack

	print the number of times we printed black jack

	filename: blackjack.c

*/
#include<stdio.h>

int main(){
	int dCards[6], dJackCtr=0;

	//lets use a for loop to get the input from the user
	for(int i=0; i<6; i++){
		printf("\n Value of Card %d: ", i+1);
		scanf("%d", &dCards[i]);
	}//endfor

	//scan the pairs from 0 to n
	for(int i=0; i<5; i++){
		if( (dCards[i] + dCards[i+1])>21 ){
			printf("\n Blackjack! ");
			dJackCtr++;
		}//end if
	}//endfor

	printf("\n We had %d blackjacks. \n", dJackCtr);

	return 1;
}//end main