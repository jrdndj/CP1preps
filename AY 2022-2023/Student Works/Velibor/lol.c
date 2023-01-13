/*
use structures (records)
functions pass by reference and pass by value 
preview of linkedlists
*/

#include<stdio.h>
#include<string.h>

//define structures
struct champion{
	char sName[10], cRole;
	int dDiff, dHP, dMP;
	double fArmor,fMagRes;
	struct champion *c;
	
};//i want to declare local versions of it later on 

//function prototypes
void printChampionRef();
void printChampionVal();

int main(){
	//i want to have local copies 
	struct champion c1, c2, c3[100];

	//ask the user to input the details of the champion 
	printf("\n Enter champion name: ");
	scanf("%s", c1.sName); //no &
	printf("\n Enter the role of %s: ", c1.sName);
	scanf(" %c", &c1.cRole);
	printf("\n Enter the difficulty level of %s: ", c1.sName);
	scanf("%d", &c1.dDiff);
	printf("\n Enter the armor value of %s : ", c1.sName);
	scanf("%lf", &c1.fArmor);

	//ask the user to input the details of the champion 
	printf("\n Enter champion name: ");
	scanf("%s", c2.sName); //no &
	printf("\n Enter the role of %s: ", c2.sName);
	scanf(" %c", &c2.cRole);
	printf("\n Enter the difficulty level of %s: ", c2.sName);
	scanf("%d", &c2.dDiff);
	printf("\n Enter the armor value of %s : ", c2.sName);
	scanf("%lf", &c2.fArmor);

	//i am going to use pointers to connect c1 amd c2
	c1.c = &c2;


	//i am going to print the function outside main
	//thus i need to pass the values by ref or by val
	printChampionRef( &c1 );
	//printChampionVal( c1 );
	printChampionRef( c1.c);



	return 0;
}//endmain

//function definitions go here
void printChampionRef(struct champion *c){
	printf("\n Champion name: %s ", c->sName);
	printf("\n Champion role: %c ", c->cRole);
	printf("\n Champion difficulty: %c ", c->dDiff);
	printf("\n Champion armor value: %.1f \n",c->fArmor );

}//endref

void printChampionVal(struct champion c){
	printf("\n Champion name: %s", c.sName);
	printf("\n Champion name: %s ", c.sName);
	printf("\n Champion role: %c ", c.cRole);
	printf("\n Champion difficulty: %c ", c.dDiff);
	printf("\n Champion armor value: %.1f \n",c.fArmor );

}//endval