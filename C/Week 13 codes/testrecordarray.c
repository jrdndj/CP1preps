/*
	A C program with functions and using structures 
*/
#include<stdio.h>
#include<string.h>

//structure declaration
struct students{
	char sfname[20];
	char slname[20];
	char sprogram[20];
	int dstudid;
}; //i did not use a variable here because i want them to be local to main


//function declaration
void printStudentsReference( struct students *person ); //pass by reference


int main(){
	//variables local only to main
	struct students profile;
	struct students *ptr = &profile; 
	//struct students profile[10]; //array of records vs linkedlists 
	char sInput[20]; //for student input 

	puts("\nEnter student first name: ");
	strcpy( profile.sfname, gets(sInput) );
	puts("\n Enter student last name: ");
	gets( profile.slname );
	puts("\n Enter degree program: ");
	gets( profile.sprogram );
	puts("\n Enter student id: ");
	scanf("%d", &profile.dstudid ); 

	printStudentsReference( ptr ); //pass by reference
	//s1 exclusive to main is shared to this function

	//printStudentsValue( s1 );
	
	return 0; 
}//endmain

//function definitions here
void printStudentsReference( struct students *person ){
	printf("\n Student ID: %d", person->dstudid ); //we use -> to access their elements
	printf("\n Student Last Name: %s", person->slname);
	printf("\n Student First Name: %s", person->sfname);
	printf("\n Student Program: %s", person->sprogram);
}//end printstudents


