/* 
	A C program that uses functions and pass by reference/value with structures 
*/
#include<stdio.h>
#include<string.h>

//structure definitions here
struct animal{
	int dAnimal_id;
	char sFamily[15];
	char sSpecies[20];
	char sName[20];
}; //i want the variables to be local 

//function declarations here
void printAnimalData( struct animal *data ); //example of pass by reference 
void printValue( struct animal data ); //pass by value

int main(){
	//local structure variable based from the structure defined above 
	struct animal creature1; //local to main only 
	struct animal creatures[10]; //array of records creatures[1].dAnimal_id 
	//array of records vs linkedlists 

	puts("\n Enter animal id: ");
	scanf(" %d", &creature1.dAnimal_id ); //creature id 666 
	puts("\n Enter animal family name: ");
	scanf(" %s", creature1.sFamily);
	//gets( creature1.sFamily ); //family homo
	puts("\n Enter animal species name: ");
	scanf(" %s", creature1.sSpecies);
	//gets( creature1.sSpecies ); //species homo erectus
	puts("\n Enter animal english name: ");
	scanf(" %s", creature1.sName);
	
	//function call will look like this
	printValue( creature1 );
	strcpy( creature1.sName , "Elder Scrolls" );
	printAnimalData( &creature1 );
	return 0; 
}//end main

//function definitions here 
void printAnimalData( struct animal *data ){ //pass by reference so we will use ->
	printf("\n Animal ID: %d ", data->dAnimal_id ); 
	printf("\n Scientific name: %s %s ", data->sFamily, data->sSpecies ); 
	printf("\n English name: %s \n", data->sName);
}//end

void printValue( struct animal data ){ //pass by value so we will use .
	printf("\n Animal ID: %d ", data.dAnimal_id ); 
	printf("\n Scientific name: %s %s ", data.sFamily, data.sSpecies ); 
	printf("\n English name: %s \n", data.sName);
}//end



