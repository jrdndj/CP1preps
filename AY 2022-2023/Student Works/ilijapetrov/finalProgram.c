/*
structures(records)
functions and parameters
by value and by refrence (pointers)
*/
#include <stdio.h>

//define structure
struct agent
{
	char cRole;
	char sName[10];
	int dID;
	struct agent *a;
};

//function prototypes
void printAgentRef();
void printAgentVal();


int main(int argc, char const *argv[])
{

	//local variables of struct agent
	struct agent a1, a2, a3, a[100];

	//we want the user to enter values for a1
	printf("\nEnter agent name: ");
	scanf("%s", a1.sName); //no &
	printf("\n Enter the role of %s: ", a1.sName);
	scanf(" %c", &a1.cRole);
	printf("\n Enter ID of %s: ", a1.sName);
	scanf("%d", &a1.dID);

	printf("\nEnter agent name: ");
	scanf("%s", a2.sName); //no &
	printf("\n Enter the role of %s: ", a2.sName);
	scanf(" %c", &a2.cRole);
	printf("\n Enter ID of %s: ", a2.sName);
	scanf("%d", &a2.dID);

	//we are going to use pointers to connect a1 to a2
	a1.a = &a2;


	//print a1 using the externam function
	printAgentRef(&a1); //use & to pass the adress of the struct
	// printAgentVal(a1); //just duplicate no need for address
	printAgentRef(a1.a);

	return 0;
}//end of main

//function definitions
void printAgentRef(struct agent *a){
	printf("\n Agent name: %s", a->sName);
	printf("\n Agent role: %c", a->cRole);
	printf("\n Agent ID: %d \n", a->dID);
}//endref



void printAgentVal(struct agent a){
	printf("\n Agent name: %s", a.sName);
	printf("\n Agent role: %c", a.cRole);
	printf("\n Agent ID: %d \n", a.dID);
}//endval























