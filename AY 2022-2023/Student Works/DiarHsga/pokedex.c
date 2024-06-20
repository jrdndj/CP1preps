/*use structures(records), pass them between functions, 
parameters passing by reference, passing by value
create a podex entry program*/
#include<stdio.h>
#include<string.h>

//define our structures
struct pokemon{
	char sName[25],sType[2][10];
	short int dID;
	float lfWeight;
	struct pokemon p;

};//no variables, I want them to be local

	//function prototypes
	void printfPokemonRef();//use pointers or pass by value
	void printfPokemonVal();//use pass by value or duplicades

int main(){
	
	//local variables
	struct pokemon p1,p2,p[100];
	char cChoice;
	//that lets the user input these values
	printf("\nWelcome please enter pokemon info: ");
	printf("\nEnter pokemon name: ");
	scanf("%s", p1.sName);	
	printf("\n Enter pokemon ID of %s: ",p1.sName);
	scanf("%hu",&p1.dID);

	//ask how ,many types does the pokemon have
	printf("\n How many types does %s have?",p1.sName);
	scanf(" %c", &cChoice);
	//assume each pokemon has at least one type
	printf("\n Enter first type of %s: ",p1.sName);
	scanf("%s", p1.sType[0]);

	//if user enters 2 then go to the lines below
	if(cChoice=='2'){
		printf("\n Enter second type of %s: ",p1.sName);
		scanf("%s",p1.sType[1]);
	}//endif

	//enter the weight of the pokemon
	printf("\n Enter weight of %s: ",p1.sName);
	scanf("%f",&p1.lfWeight);
	//what I want is a totally different print function
	//where we pass the value of p1 to these functions

	//print by calling the reference
	printfPokemonRef(&p1);//use & since we are calling by reference

	//print by call by value
	printfPokemonVal(p1);

	p1->p=p2;//this is saying the pointer in p1 leads to p2
	return 0; 

		
}//end main

//function definition here
//pass by reference
void printfPokemonRef(struct pokemon *p){
	//printname
	printf("\n Pokemon name: %s", p->sName);
	printf("\n Pokemon ID: %d",p->dID);
	printf("\n Pokemon type: %s, %s", p->sType[0],p->sType[1]);
	printf("\n Pokemon Weight: %1f \n ",p->lfWeight);
}//endpokemonref

//pass ba value
void printfPokemonVal(struct pokemon p){
	//print the name
	printf("\n Pokemon name: %s", p.sName);
	printf("\n Pokemon ID: %d", p.dID);
	printf("\n Pokemon type: %s, %s", p.sType[0],p.sType[1]);
	printf("\n Pokemon Weight: %1f \n ",p.lfWeight);
}//endpokemonval
