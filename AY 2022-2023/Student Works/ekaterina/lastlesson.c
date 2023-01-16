/** usse structures(record) pass them between functions  parameter reference 
 * passing by value*

 1.create a pokedex entry program*/
#include<stdio.h>


//define our structures
struct pokemon{
	char sName[20];
	int dID;
	float lfWeight;
	//cannot initilise values in struct!
	char  sType[2][10];
	struct pokemon *p; //this points to something other of pokemon (linked list)


};//no variables, I want them to be local


//function prototypes
void printPokemonRef(); //use pointers or pass by reference 
void printPokemonVal(); //use pass by value or duplicates
int main(){

	//that lets the user input theese values 
	//we want them to be local varials because this saves memory 

	struct pokemon p1,p2,p[100]; //p1 will jabe a name id weight and type
	char cChoice;

	//that lets the user input variables;
	printf("\n welcome!Please enter pokemon info:");
	printf("\n Enter pokemon name");
	scanf("%s",p1.sName); //will be sored into sName of p1 if we use %s we dont need &

	printf("\n Enter poken Id pf %s: ",p1.sName);
	scanf("%d",& p1.dID);
	//maters the data type of the string, that's we we do not use &

	//ask how many types t=des the pokemon have
	printf("\n How many types does %s have?",p1.sName);
	scanf(" %c",&cChoice);


	//assume each pokemon has at least one type
	printf("\n Enter first type of %s:",p1.sName);
	scanf("%s",p1.sType[0]);  //saving it at position 0 

	//if user enters 2 then go to the lines below

	if(cChoice =='2')
	{
		printf("\n Enter second type of %s :",p1.sName);
		scanf("%s",p1.sType[1]);		
	}
	else{ repeat ()}
  
	printf("\n Enter the weight of the pokemon of %s :",p1.sName);
	scanf("%f",&p1.lfWeight);  //entering the weight of the pokemon for p1

	 //two aproches by reference of by value 
	//a totoaly different print functions where we pass rhe value of p1 to theese functions 

	 //print by calling the reference,means we use *
	printPokemonRef(&p1); 

	//print by calling the value 
	printPokemonVal(p1); //no & since it is passing by value 

	p1->p=p2; //the pointer in p1 leads to p2

	return 0;
}//endmain

//function definitions here
void printPokemonRef(struct pokemon *p) //uses the adress 
{
	//print the name
	printf("\n Pokemon name: %s ",p->sName);
	printf("\n Pokemon ID: %d", p->dID);
	printf("\n Pokemon Type: %s, %s", p->sType[0],p->sType[1]);
	printf("\n Pokemon weight : %.1f  \n", p->lfWeight);

}//endpokemonref

void printPokemonVal(struct pokemon p)  //uses the duplicate
{

	//printing the name 
	printf("\n Pokemon name:  %s", p.sName);
	printf("\n pokemon ID: %d", p.dID);
	printf("\n Pokemon Type: %s, %s", p.sType[0],p.sType[1]);
	printf("\n Pokemon weight : %.1f  \n", p.lfWeight);

}//endpokemonVal