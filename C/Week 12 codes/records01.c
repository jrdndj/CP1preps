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
// we do not duplicate the values. 
void printStudentsValue( struct students profile ); 

int main(){
	//variables local only to main
	struct students s1, s2, s3; //s1, s2, s3 are local to main
	//struct students profile[10]; //array of records vs linkedlists 
	char sInput[20]; //for student input 

	puts("\nEnter student first name: ");
	strcpy( s1.sfname, gets(sInput) );
	puts("\n Enter student last name: ");
	gets( s1.slname );
	puts("\n Enter degree program: ");
	gets( s1.sprogram );
	puts("\n Enter student id: ");
	scanf("%d", &s1.dstudid );

	printStudentsValue( s1 ); //pass by value 
	//s1 exclusive to main is duplicated to this function
	//print them by passing the value to printStudents 
	//when receiving a pointer, we pass an address
	
	strcpy( s1.sfname, "Jordan" ); 

	printStudentsReference( &s1 ); //pass by reference
	//s1 exclusive to main is shared to this function

	printStudentsValue( s1 );
	
	return 0; 
}//endmain

//function definitions here
void printStudentsReference( struct students *person ){
	printf("\n Student ID: %d", person->dstudid ); //we use -> to access their elements
	printf("\n Student Last Name: %s", person->slname);
	printf("\n Student First Name: %s", person->sfname);
	printf("\n Student Program: %s", person->sprogram);
}//end printstudents

void printStudentsValue( struct students profile ){ // we receive it as an data structure
	printf("\n Student ID: %d", profile.dstudid ); //we use -> to access their elements
	printf("\n Student Last Name: %s", profile.slname);
	printf("\n Student First Name: %s", profile.sfname);
	printf("\n Student Program: %s", profile.sprogram);
}//end printstudents








