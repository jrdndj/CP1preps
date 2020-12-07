/*
	this program shall use switch statements 
	later on we will apply loop statements as well

	the program has a loop and it will only begin if the loop control is true 
*/
#include<stdio.h>

int main(){
	//declare variables 
	int dUserChoice;
	int dPC = 1 ; //PC = program control 
	
	while ( dPC == 1 ) {
		//interactive input
		printf("\n Please enter a number and you will be given a meme of your chocie! \n");
		scanf("%d", &dUserChoice);
		//do the switch comparison
		switch( dUserChoice ){
			case 69: 
				printf("\n Nice! \n");
				break;
			case 28516:
				printf("\n This is the date where Harambe was killed! \n");
				break;
			default: 
				printf("\n Sadly your number does not mean anything\n");
				break;
		}//endswitch
		//prompt the user to ask if they want to enter another input
		printf("\n Do you want to try again?\n ");
		printf("\n [1] = Yes \n [0] = No.\n");
		scanf("%d", &dPC);
	}//endwhile
	//do something here 
	printf("\n Thank you for using our program! ");
	return 0;
}