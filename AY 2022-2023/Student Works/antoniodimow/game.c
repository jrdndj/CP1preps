#include <stdio.h>
#include<string.h>

//structure definitions

struct terrorist
{
	int dHasBomb,dHealthPoints,dArmor,dKilled,dDied;
	char sPlayerName[50],sSkin[20],sLeft[20],sRight;
	double dKDR;
};//no variables here because I want them to be local

struct counterTerrorist
{
	int dHasDefuse,dHealthPoints,dArmor,dKilled,dDied;
	char sPlayerName[50],sSkin[20],sLeft[20],sRight;
	double dKDR;
};//no variables here because I want them to be local

//function prototypes
void printTerrorist(struct terrorist *p1);
void printCounterTerrorist(struct counterTerrorist p2);

int main(){

	//define structure variables locally
	struct terrorist player1;
	struct counterTerrorist player2;

	// i will ask the user to choose between terrorist or counter-terrorist
	char cChoice;

	printf("Welcome ! Please choose your type: \n");
	printf("[T] for terrorist\n");
	printf("[C] for counter-terrorist\n");
	scanf("%c",&cChoice);

	//let main decide
	if (cChoice == 'T')
	{
		//then we use terrorist
		//lets ask for the name
		printf("Enter terrorist name: ");
		scanf("%s",player1.sPlayerName);
		//we ask if this player should have the bomb
		printf("Do you want %s to have this bomb? [y or n]",player1.sPlayerName);
		scanf(" %c",&cChoice);
		if (cChoice == 'y')
		{
			player1.dHasBomb=1;
		}
		printTerrorist(&player1);//use & if pass by refference

	}else if(cChoice == 'C'){
		//then we use counterTerrorist
		printf("Enter counter-terrorist name: ");
		scanf("%s",player2.sPlayerName);
		//we ask if this player should have the bomb
		printf("Do you want %s to buy defuse Kit? [y or n]",player1.sPlayerName);
		scanf(" %c",&cChoice);
		if (cChoice == 'y')
		{
			player2.dHasDefuse=1;
		}
		printCounterTerrorist(player2);//no & uf pass by value
	}else{
		//bad input

	}

	return 0;
}

//function definitions here
//pass by reference
void printTerrorist(struct terrorist *p1){
	printf("\n The player name is %s. ",p1->sPlayerName);
	printf("\n Bomb status: %d",p1->dHasBomb);
}

void printCounterTerrorist(struct counterTerrorist p2){
	printf("The player name is %s. ",p2.sPlayerName);
	printf("\n Defuse Kit Status: %d ",p2.dHasDefuse);
}