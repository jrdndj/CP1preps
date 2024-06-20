#include <stdio.h>
#include <string.h>

struct agent{
	char cRole;
	char sName [10];
	int dID;
	struct agent *a;
};

//function prototypes
void printAgentRef();
void printAgentVal();


int main() {

	//local variables of struct agent
	struct agent a1, a2, a3, a[100];

	//we want the user to enter values
	printf("\n Enter agent name: ");
	scanf("%s", a1.sName);
	printf("\n Enter the role of %s : ", a1.sName);
	scanf(" %c", &a1.cRole);
	printf("\n Enter the ID of %s : ", a1.sName);
	scanf("%d", &a1.dID);

	//we want the user to enter values
	printf("\n Enter agent name: ");
	scanf("%s", a2.sName);
	printf("\n Enter the role of %s : ", a2.sName);
	scanf(" %c", &a2.cRole);
	printf("\n Enter the ID of %s : ", a2.sName);
	scanf("%d", &a2.dID);

	//we are going to connect a1 and a2
	a1.a = &a2;

	//print another function
	printAgentRef(&a1); //use & to pass the addres of the struct
	//printAgentRef(a1);
	printAgentRef(a1.a);

	return 0;
}

//function def
void printAgentRef( struct agent *a ){
	printf("\n agent name: %s ", a->sName);
	printf("\n agent role: %c ", a->cRole);
	printf("\n agent ID: %d ", a->dID);
}

void printAgentVal( struct agent a ){
	printf("\n agent name: %s ", a.sName);
	printf("\n agent role: %c ", a.cRole);
	printf("\n agent ID: %d ", a.dID);

}
