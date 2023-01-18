 /*
	structures (records);
	functions and parameter passing;
	by value and by reference (pointers).

 */
#include<stdio.h>

//define our structure here
struct agent {
	char cRole;
	char sName[10];
	int dID;
	struct agent *a; 


}; //we will use local variables later on

//function prototypes should be written before main
void printAgentRef();
void printAgentVal();

int main(){

	//local variables of struct agent
	struct agent a1, a2, a3, a[100]; //0-99

		/*
		a1 -> same for a2, a3, a[100]
		__
		cRole
		sName
		dID
		_
		*a

		*/
	//we want the user to enter values for a1
	printf("\n Enter agent name: ");
	scanf("%s", a1.sName); //no & cause it's a string
	printf("\n Enter the role of %s : ", a1.sName);
	scanf(" %c", &a1.cRole); // must use a space for multiple inputs
	printf("\n Enter the ID of %s : ", a1.sName);
	scanf("%d", &a1.dID);

		//we want the user to enter values for a1
	printf("\n Enter agent name: ");
	scanf("%s", a2.sName); //no & cause it's a string
	printf("\n Enter the role of %s : ", a2.sName);
	scanf(" %c", &a2.cRole); // must use a space for multiple inputs
	printf("\n Enter the ID of %s : ", a2.sName);
	scanf("%d", &a2.dID);

	//we are going to use pointers to connect a1 to a2
	a1.a = &a2;

	//what if I want to print them using another function
	//print a1 using the external function
	printAgentRef(&a1); //use & to pass the address of the struct
	printAgentRef(a1.a);
	//printAgentVal(a1); //just duplicate, no need for address =! pointer

	return 0;
}//end main

//function definitions

void printAgentRef( struct agent *a ){ //passing by reference uses pointers 
	printf("\n Agent Name: %s ", a->sName); //a pointer sName
	printf("\n Agent Role: %c ", a->cRole);
	printf("\n Agent ID: %d \n", a->dID);


}//end ref

void printAgentVal( struct agent a ){ //passing by value doesn't use pointers
	printf("\n Agent name: %s ", a.sName);
	printf("\n Agent Role: %c ", a.cRole);
	printf("\n Agent ID: %d \n", a.dID);
}//end val

struct element{
	int val
	struct element *next
}

struct element e1, e2, e3, e4, head, tail, temp

/*

	H -> e1 -> e2 -> e3 -> tail -> null

	1) temp should remember e1
	2) head goes to e3
	3) e1 connects/points to the tail
	4) e2 -> temp
	5) e3 -> e2
	6) e2 -> e1
*/

//initialize a list
head.next = &e1;
e1.val = 420;
e1.next = &e2;
e2.val = 69;
e2.next = &e3;
e3.val = 27;
e3.next = NULL;
tail = e.next;

//so if i want to sort them
temp = &e1
head.next = &e3
