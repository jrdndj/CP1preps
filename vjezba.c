//use structures
//user defined functions
//parameter passing 
//pass by reference(pointers)
//pass by value
//teheme> CD 1.6
#include<stdio.h>

//structure that defines the atributes of CT/T player
struct terrorist{
	int dHP, dArmor, dKillCtr, dDied;
	double dKDR;
	char sPlayerName[20], cHasBomb;
	struct terrorist*t;

};//will use local variables later on

//function prototypes here
void printTerroristRef();
void printTerroristVal();


int main(){
//local variable
	struct terrorist player1, player2, player3, player[100];

	//we will talk to the user ot get these values

	//lets get player 1

	printf("\n enter name of player 1");
	scanf(" %s",player1.sPlayerName); // no &
	printf("\n Does %s have the bomb? 1-yes, 0-no",player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);
	//assign the initial hp of player on to 100
	player1.dHP = 100;
	printf("\n how manz kills did %s already have:",player1.sPlayerName);
	scanf("%d",&player1.dDied);

	//compute KDR
	player1.dKDR = (double)player1.dKillCtr/player1.dDied;


	printf("\n enter name of player 2");
	scanf(" %s",player2.sPlayerName); // no &
	printf("\n Does %s have the bomb? 1-yes, 0-no",player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);
	//assign the initial hp of player on to 100
	player1.dHP = 100;
	printf("\n how manz kills did %s already have:",player2.sPlayerName);
	scanf("%d",&player2.dDied);

	//compute KDR
	player2.dKDR = (double)player2.dKillCtr/player2.dDied;

	//connect player1 to player2
	player1.t = &player2;                       //pointer  t connects to &
	//print them using the foreign functions
	//print player1
	printTerroristRef(&player1); //pass by reference
	printTerroristRef(player1.t); //pass by val



	return 0;
}//end main
void printTerroristRef(struct terrorist *t){
printf("\n Player name: %s",t->sPlayerName);
printf("\n Has bomb: %c",t->cHasBomb);
printf("\n Player HP: %d",t->dHP);
printf("\n Player kills: %d",t->dKillCtr);
printf("\n Player Deaths: %d",t->dDied);
printf("\n Player KDR: %.2f",t->dKDR);





}//end ref
void printTerroristVal(struct terrorist t){
printf("\n Player name: %s",t.sPlayerName);
printf("\n Has bomb: %c",t.cHasBomb);
printf("\n Player HP: %d",t.dHP);
printf("\n Player kills: %d",t.dKillCtr);
printf("\n Player Deaths: %d",t.dDied);
printf("\n Player KDR: %.2f",t.dKDR);

}//end val