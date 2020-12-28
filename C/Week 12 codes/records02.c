/* 
	A C program that uses functions and structures and pass by values/reference
*/
#include<stdio.h>
#include<string.h>

//declare structures here
struct students{
	char sfname[20];
	char slname[20];
	char sprogram[20];
	int dstudid; 
}; //i will not declare vars here because i want to demonstrate local struct vars

//declare functions here  
void printStudentReference( struct students *profile ); //pass by reference we use pointers

void printStudentValue( struct students person ); //pass by value no pointers 

int main(){
	//declare variables local to main
	struct students s1; 
	char sInput[20];

	puts("\n Enter student first name: ");
	gets( s1.sfname );
	puts("\n Enter student last name: ");
	strcpy( s1.slname, gets(sInput) );
	puts("\n Enter student degree program name: ");
	gets( s1.sprogram );
	puts("\n Enter student id: ");
	scanf("%d", &s1.dstudid);

	printStudentValue( s1 );  //pass by value 
	strcpy( s1.sfname, "Jordan");
	//print the inputs by passing the referenced values 
	printStudentReference( &s1 ); //we use & since it receives addresses only 
	return 0; 
}//endmain 

//define functions here
void printStudentReference( struct students *profile ){ //since passing by reference we use ->
	printf("\n Student ID: %d", profile->dstudid );
	printf("\n Student Name: %s, %s", profile->slname, profile->sfname );
	printf("\n Student Program: %s", profile->sprogram );
}//endfunction

void printStudentValue( struct students person ){ //value we use .
	printf("\n Student ID: %d", person.dstudid );
	printf("\n Student Name: %s, %s", person.slname, person.sfname );
	printf("\n Student Program: %s", person.sprogram );
}//endfunction







