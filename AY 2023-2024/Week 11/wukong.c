/*
	A C Program where we use records to store Champion attributes. 
	01 Define a struct record for this. -  OK
	02 Have a variable instance of it that is local to main.  - OK 
	03 Allow the user to enter inputs, using another function. -  OK 
	04 Print the attributes by using another function. - OK 
	05 Use pass by VALUE to print the attributes of the champion. - OK  
	06 Change the values as if there was a patch update - OK  
	07 Use pass by REFERENCE to print the attributes of the champion. - OK
	10 points for comments
	10 points for variable names and code organization
	10 points for cleaning up the pointers
	champion data we need: name, passive, attributes, ulti, role, difficulty

	filename: wukong.c
*/
#include<stdio.h>
#include<stdlib.h> //free(pt)

struct champion{
	char sName[25];
	char sPassive[20], sUlti[20];
	int dSTR, dAGI, dINT, dDiff;
	char cRole; //Mage, Tank, Fighter, ADC
}; 

//function prototype
void get_inputs(struct champion *h); //pass by REF
void printByVal(struct champion h); //pass by VAL
void printByRef(struct champion *h); //print with pass by REF

int main(){
	struct champion h; //h[100]
	struct champion h1[100]; 
	struct champion *ptr, *heroes[100]; 
	//ptr = &h; 
	//get_inputs(ptr); //use ptr cos h is a complex data type

	for(int i=0; i<100; i++){
		heroes[i] = &h1[i]; //match the pointes per struct
		get_inputs(heroes[i]); //get the input
	}

	for(int i=0; i<100; i++){
		printByVal(h1[i]);
	}

	for(int i=0; i<100; i++){
		printByRef(heroes[i]);
	}

	//SOLID design pattern: Gang of 4 Design Patttern

	printByVal(h); //passing by value

	printf("\n All heroes INT reduced by 10%% as of latest patch. ");
	h.dINT = h.dINT - (h.dINT*0.1);

	printByRef(ptr); //reference 

	//free up pointers
	ptr = NULL;
	free(ptr); 

	return 0; 
}//endmain

//define the functions here
void get_inputs(struct champion *h){
	printf("\n Enter chamnpion name: ");
	scanf(" %s", h->sName);					// no & because %s
	printf("\n Enter passive skill: ");
	scanf(" %s", h->sPassive);
	printf("\n Enter ultimate skill: ");
	scanf(" %s", h->sUlti);
	printf("\n Enter champion strength: ");
	scanf("%d", &h->dSTR);						//no space, with & because %d
	printf("\n Enter champion agility: ");
	scanf("%d", &h->dAGI);
	printf("\n Enter champion intelligence: ");
	scanf("%d", &h->dINT);
	printf("\n Enter champion difficulty  1-2-3: ");
	scanf("%d", &h->dDiff);
	printf("\n Enter role: [M]age [T]ank [F]ighter");
	scanf(" %c", &h->cRole);			//space & because %c
}//end get_inputs

void printByVal(struct champion h){
	printf("\n\n Champion name %s: ", h.sName);
	printf("\n %s Passive is called %s. ", h.sName, h.sPassive);
	printf("\n %s Ultimate is called %s. ", h.sName, h.sUlti);
	printf("\n Attributes: %d S %d A %d I. ", h.dSTR, h.dAGI, h.dINT);
	printf("\n Difficulty: %d /3", h.dDiff);
	printf("\n Role: %c. \n ", h.cRole);
}//end printbyVal

void printByRef(struct champion *h){
	printf("\n\n Champion name %s: ", h->sName);
	printf("\n %s Passive is called %s. ", h->sName, h->sPassive);
	printf("\n %s Ultimate is called %s. ", h->sName, h->sUlti);
	printf("\n Attributes: %d S %d A %d I. ", h->dSTR, h->dAGI, h->dINT);
	printf("\n Difficulty: %d /3", h->dDiff);
	printf("\n Role: %c. \n ", h->cRole);
}//end printbyRef





