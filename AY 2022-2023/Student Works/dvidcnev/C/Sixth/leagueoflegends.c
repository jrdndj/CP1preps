#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct champion {
	char sName[10], cRole;
	int dDiff, dHP, dMP;
	double fArmor, fMagRes;
	struct champion *c;
};

void enterChampInfo();
void printChampionRef();
void printChampionVal();

int main() {

	struct champion c1, c2, c3[69];
	
	enterChampInfo(&c1);
	enterChampInfo(&c2);

	//using pointers to connect c1 and c2
	c1.c = &c2;

	printChampionRef(&c1);
	printChampionVal(c1);
	printChampionRef(c1.c);

	return 0;
}

//average will be math problem
//difficult will be a long problem, takes time but easier to solve
//arrays and functions on midterm

void enterChampInfo( struct champion *c ) {
	printf("\nEnter champion name: ");
	scanf("%s", c->sName);
	printf("\nEnter the role of %s : ", c->sName);
	scanf(" %c", &c->cRole);
	printf("\nEnter the difficulty level of %s :", c->sName);
	scanf("%d", &c->dDiff);
	printf("\nEnter armor value of %s : ", c->sName);
	scanf("%lf", &c->fArmor);
}

void printChampionRef( struct champion *c ) { //print by a pointer
	printf("\nChampion name: %s", c->sName);
	printf("\nChampion role: %c", c->cRole);
	printf("\nChampion difficulty: %d", c->dDiff);
	printf("\nChampion armor value: %.1f \n", c->fArmor);
}

void printChampionVal( struct champion c ) { //print by a copy of the struct
	printf("\nChampion name: %s", c.sName);
	printf("\nChampion role: %c", c.cRole);
	printf("\nChampion difficulty: %d", c.dDiff);
	printf("\nChampion armor value: %.1f \n", c.fArmor);
}