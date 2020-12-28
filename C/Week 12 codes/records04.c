/*
	A C "game" where we use structures and pass them between functions
	but in a game style 
 */
#include<stdio.h>
#include<string.h>

//structure definitions here 
struct hero{
	char sName[20];
	char sPhrase[50];
	int dSTR, dINT, dAGI;
	int dHP, dMP, dDP; 
	char cAttr; 
}; //no variables here i want them to be local 

//function declarations here pass by reference
void printAttributes( struct hero *attr );  //add * for pointer
void printprint( struct hero attr ); // by value so no *

int main(){
	//structures that are local to main declared here
	struct hero h1; //array of structsrecords dire[10], radiant[10].sName

	puts("\n Enter hero name: ");
	gets( h1.sName );
	puts("\n Enter hero history: ");
	gets( h1.sPhrase );
	puts("\n Enter strength value: ");
	scanf("%d", &h1.dSTR );
	puts("\n Enter intelligence value: ");
	scanf("%d", &h1.dINT );
	puts("\n Enter agility value: ");
	scanf("%d", &h1.dAGI );
	puts("\n Enter main attribute S- str, I- int, A-agi:  ");
	scanf(" %c", &h1.cAttr );

	printprint( h1 ); //no &

	strcpy( h1.sPhrase, "Dont believe what he said" );
	printAttributes( &h1 );//we use & here 

	return 0; 
}//endmain

//function definitions here 
void printAttributes( struct hero *attr ){ //passing by reference ->
	printf("\n Hero name is %s, the %s", attr->sName, attr->sPhrase );
	printf("\n Strength: %d ", attr->dSTR);
	printf("\n Intelligence: %d ", attr->dINT);
	printf("\n Agility: %d ", attr->dAGI);
	printf("\n Main attribute: %c ", attr->cAttr);
}

void printprint( struct hero attr ){ //passing by value we use .
	printf("\n Hero name is %s, the %s", attr.sName, attr.sPhrase );
	printf("\n Strength: %d ", attr.dSTR);
	printf("\n Intelligence: %d ", attr.dINT);
	printf("\n Agility: %d ", attr.dAGI);
	printf("\n Main attribute: %c ", attr.cAttr);
}







