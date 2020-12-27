#include<stdio.h>

int main(){

	//declare our variables
	char cInput;

	//prompt the user for an input
	printf("\nPlease enter one of the following characters: \n D for neutered dog \n d for unneutered dog \n C for neutered cat \n c for unneutered cat \n B for bird \n R for reptile \n O for any other animal\n");

	scanf(" %c", &cInput);

	//using switch statement we will print the receipt for the chosen animal
	switch( cInput ){

		case 'D': printf("\nYou need to pay $50 for your pet.");
			break;

		case 'd': printf("\nYou need to pay $80 for your pet.");
			break;

		case 'C': printf("\nYou need to pay $40 for your pet.");
			break;

		case 'c': printf("\nYou need to pay $60 for your pet.");
			break;

		case 'B': printf("\nYou need not to pay for your pet.");
			break;

		case 'R': printf("\nYou need not to pay for your pet.");
			break;

		default:
			printf("\nUnfortunately we do not have necessary informations about the chosen pet.");
			break;

	}//endswitch

	printf("\nThank you for using our program!\n");
	return 0;

}//endmain
