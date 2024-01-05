/*
	A C "game" where we use structures and pass them between functions
	but in a game style 
 */
#include<stdio.h>
#include<string.h>

//structure definitions here 
struct hero{
	char sName[20];
	char sPassive[10], sUlti[20];
	int dSTR, dINT, dAGI;
	int dHP, dMP, dDP; 
	char cAttr; 
}; //no variables here i want them to be local 

//function declarations here pass by reference
void get_inputs(struct hero *h1);
void printAttributes( struct hero *attr );  //add * for pointer
void printprint( struct hero attr ); // by value so no *

int main(){
	//structures that are local to main declared here
	struct hero h1; //array of structsrecords dire[10], radiant[10].sName

	get_inputs( &h1 );
	printprint( h1 ); //no &

	//nerf all int by 10%
	h1.dINT = h1.dINT - (h1.dINT*0.1);
	printf("\n\n All INT values nerfed as of latest patch. \n ");
	printAttributes( &h1 );//we use & here 

	return 0; 
}//endmain

void get_inputs(struct hero *h1){
	printf("\n Enter hero name: ");
	scanf(" %s",h1->sName );
	printf("\n Enter skill passive: ");
	scanf(" %s",h1->sPassive );
	printf("\n Enter hero ulti: ");
	scanf(" %s",h1->sUlti );
	printf("\n Enter strength value: ");
	scanf("%d", &h1->dSTR );
	printf("\n Enter intelligence value: ");
	scanf("%d", &h1->dINT );
	printf("\n Enter agility value: ");
	scanf("%d", &h1->dAGI );
	printf("\n Enter main attribute S- str, I- int, A-agi:  ");
	scanf(" %c", &h1->cAttr );
}//end get_inputs

//function definitions here 
void printAttributes( struct hero *attr ){ //passing by reference ->
	printf("\n Hero name is %s", attr->sName );
	printf("\n Hero passive is %s. ", attr->sPassive);
	printf("\n Hero ult is %s. ", attr->sUlti);
	printf("\n Strength: %d ", attr->dSTR);
	printf("\n Intelligence: %d ", attr->dINT);
	printf("\n Agility: %d ", attr->dAGI);
	printf("\n Main attribute: %c ", attr->cAttr);
}

void printprint( struct hero attr ){ //passing by value we use .
	printf("\n Hero name is %s", attr.sName );
	printf("\n Hero passive is %s. ", attr.sPassive);
	printf("\n Hero ult is %s. ", attr.sUlti);
	printf("\n Strength: %d ", attr.dSTR);
	printf("\n Intelligence: %d ", attr.dINT);
	printf("\n Agility: %d ", attr.dAGI);
	printf("\n Main attribute: %c ", attr.cAttr);
}






