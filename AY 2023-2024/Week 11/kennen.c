/*
	A C Program where we use records to store Champion attributes. 
	01 Define a struct record for this. - ok  
	02 Have a variable instance of it that is local to main.  - OK
	03 Allow the user to enter inputs, using another function. - OK 
	04 Print the attributes by using another function. - OK
	05 Use pass by VALUE to print the attributes of the champion. - OK 
	06 Change the values as if there was a patch update - OK 
	07 Use pass by REFERENCE to print the attributes of the champion.

	champion data we need: role, difficulty, win rate, pick rate

	filename: kennen.c
*/
#include<stdio.h>

//define structure 
struct champion{
	char sName[20]; 
	char sPassive[25], sUlti[30];
	int dSTR, dINT, dAGI, dDiff; 
	char cRole; 
}; 

//function prototypes here
void get_inputs(struct champion *h1); //how you pass WHOLE STRUCTURE
void printAttrByVal(struct champion h1); //giving a copy of the structure
void printAttrByRef(struct champion *h1); // add * passing by ref wc is a pointer

int main(){
    struct champion h1; //h1, a record is a pointer by "default"
    struct champion *p = &h1; 

    get_inputs(&h1); //call and pass by reference 
    printAttrByVal(h1); //pass by value so no special symbols

    //nerf all INT values by 10%
    h1.dINT = h1.dINT - (h1.dINT*0.1); 
    printf("\n\n All INT values are nerfed as of latest patch. \n ");

    //print them by refe
    printAttrByRef(&h1); //use & or replace this with another pointer
   // printAttrByRef(p); //both are the same 

	return 0;
}//endmain

void get_inputs(struct champion *h1){
	printf("\n Enter champion name: ");
	scanf(" %s", h1->sName);					//no & because %s
	printf("\n Enter passive skill name: ");
	scanf(" %s", h1->sPassive);
	printf("\n Enter ultimate skill name: ");
	scanf(" %s", h1->sUlti);
	printf("\n Enter champion strength: ");
	scanf("%d", &h1->dSTR);						//use & because %d
	printf("\n Entter champion agility: ");
	scanf("%d", &h1->dAGI);
	printf("\n Enter champion intelligence: ");
	scanf("%d", &h1->dINT);
	printf("\n Champion Difficulty 1-2-3? : ");
	scanf("%d", &h1->dDiff);
	printf("\n Hero role: [M]age, [T]ank, [A]ttack Damage: ");
	scanf(" %c", &h1->cRole);				// use space and & because %c
}//end get_inputs

//printing values 
void printAttrByVal(struct champion h1){
	printf("\n Champion name is %s ", h1.sName);
	printf("\n Champion passive: %s ", h1.sPassive);
	printf("\n Champion ulti: %s ", h1.sUlti);
	printf("\n %s Attributes: %d S %d A %d I.", h1.sName, h1.dSTR, h1.dAGI, h1.dINT);
	printf("\n Champion Difficulty: %d / 3", h1.dDiff);
	printf("\n Role: %c ", h1.cRole);
}//endprintAttrByVal

void printAttrByRef(struct champion *h1){
	printf("\n Champion name is %s ", h1->sName);
	printf("\n Champion passive: %s ", h1->sPassive);
	printf("\n Champion ulti: %s ", h1->sUlti);
	printf("\n %s Attributes: %d S %d A %d I.", h1->sName, h1->dSTR, h1->dAGI, h1->dINT);
	printf("\n Champion Difficulty: %d / 3", h1->dDiff);
	printf("\n Role: %c ", h1->cRole);
}//end printattrbyref










