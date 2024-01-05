/*
	A C Program where we use records to store Champion attributes. 
	01 Define a struct record for this. -   ok
	02 Have a variable instance of it that is local to main.  - ok 
	03 Allow the user to enter inputs, using another function. -  ok 
	04 Print the attributes by using another function. - ok
	05 Use pass by VALUE to print the attributes of the champion. -  ok 
	06 Change the values as if there was a patch update -  OK 
	07 Use pass by REFERENCE to print the attributes of the champion. - OK 

	champion data we need: name, passive, attributes, ulti, role, difficulty

	filename: vladimir.c
*/
#include<stdio.h>
#include<stdlib.h>

//define structure here
struct champion{
	char sName[25];
	char sPassive[25], sUlti[25];
	int dSTR, dAGI, dINT, dDiff;
	char cRole; //M for Mage, T for Tank, A for ADC
}; //; because we will be declaring local versions of it 

//function prototypes here
void get_inputs(struct champion *h1);  //* we pass ref
void printByVal(struct champion h1); //pass by value 
void printByRef(struct champion *h1); 

int main(){
	struct champion h1; //h[25]
	//struct champion heroes[5]; 
	//struct champion *ptr[5];

	struct champion *ptr1; 
	ptr1 = &h1; 
	
//	for(int i=0; i<5; i++){
//		ptr[i] = &heroes[i];
//	}


	get_inputs(ptr1);

//	for(int i=0; i<5; i++){
//		get_inputs(ptr[i]);
//	}

//	for(int i=0; i<5; i++){
//		printByRef(ptr[i]);
//		}
	printByVal(h1);

	//latest update nerfs heroes bu reducing 10% of their int value
	h1.dINT = h1.dINT - (h1.dINT * 0.1); 
	printf("\n\n Latest patch reduces 10%% INT for all heroes \n ");

	printByRef(ptr1); 

	//dont forget to cleanup
	ptr1 = NULL;
	free(ptr1);
	return 0;
}//endmain

//function definitions here 
void get_inputs(struct champion *h1){
	printf("\n Enter champion name: ");
	scanf(" %s", h1->sName);				//, no ampersand cos %s
	printf("\n Enter champion passive skill: ");
	scanf(" %s", h1->sPassive);
	printf("\n Enter champion ultimate skill: ");
	scanf(" %s", h1->sUlti);
	printf("\n Enter %s strength: ", h1->sName);
	scanf("%d", &h1->dSTR);							//& because %d
	printf("\n Enter %s agility: ", h1->sName);
	scanf("%d", &h1->dAGI);
	printf("\n Enter %s intelligence: ", h1->sName);
	scanf("%d", &h1->dINT);
	printf("\n Enter %s difficulty: ", h1->sName);
	scanf("%d", &h1->dDiff);
	printf("\n Pick role: [M]age, [T]ank, [A]DC: ");
	scanf(" %c", &h1->cRole);							// space & because %c
}//end get_input

void printByVal(struct champion h1){
	printf("\n\n Champion Name: %s ", h1.sName);
	printf("\n Passive Skill: %s ", h1.sPassive);
	printf("\n Ultimate: %s ", h1.sUlti);
	printf("\n %s Attributes: %d S %d A %d I ", h1.sName, h1.dSTR, h1.dAGI, h1.dINT);
	printf("\n Role: %c", h1.cRole);
	printf("\n Difficulty: %d /3", h1.dDiff);
}//end printByVal

void printByRef(struct champion *h1){
	printf("\n\n Champion Name: %s ", h1->sName);
	printf("\n Passive Skill: %s ", h1->sPassive);
	printf("\n Ultimate: %s ", h1->sUlti);
	printf("\n %s Attributes: %d S %d A %d I ", h1->sName, h1->dSTR, h1->dAGI, h1->dINT);
	printf("\n Role: %c", h1->cRole);
	printf("\n Difficulty: %d /3", h1->dDiff);
}//end by printbyReference



