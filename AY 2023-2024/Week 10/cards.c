/*
	Ask the user for 7 values of cards, one at a time
	check each card and the card next to it 
	if their sum is > 25, print black jack. 
	else do nothing. 

	print the number of times blackjack was printed

	filename: cards.c
*/
#include<stdio.h>

int main(){
	int dCards[7], dJackCtr=0; 

	for(int i=0; i<7; i++){
		printf("\n Enter value of Card %d: ", i+1); 
		scanf("%d", &dCards[i]); 
	}//endfor

	//now we shall scan i and i+1 at a time
	for(int i=0; i<6; i++){
		if( dCards[i]+dCards[i+1] > 21 ){
			printf("\n Blackjack! ");
			dJackCtr++; 
		}//endif //if false do nothing 
	}//end check for 

	printf("\n \n ");

	//print the contents of the array
	for(int i=0; i<7; i++){
		printf("%d ", dCards[i]);
	}//end print for

	printf("\n There are %d blackjacks. ", dJackCtr);
	return 1;
}//end main









