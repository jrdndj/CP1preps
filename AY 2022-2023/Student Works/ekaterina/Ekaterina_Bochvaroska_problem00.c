#include<stdio.h>

int main(){
	//declaring some variables 
	char cCar;

	//the user eneters the information
	printf("\n Please enter a character according to the animal you want to recieve");
	scanf("%c",&cCar);



	if(cCar=='D'|| cCar=='d')
	{

		printf("\nA dog that has been neutered costs $50.");
		printf("\nA dog that has been neutered costs $80.");
	}//endif
	else if(cCar=='C'|| cCar=='c')
	{
		printf("\nA dog that has been neutered costs $40.");
		printf("\nA dog that has been neutered costs $60.");

	}//endelseif
	else if(cCar=='B'|| cCar=='b'|| cCar=='R'|| cCar=='r')
	{
		printf("\n A bird or a reptile cost nothing");
	}//ednelseif
	else
	{
		printf("\n Error!");
	}//endelse
	



	return 0;
}