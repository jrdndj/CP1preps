/* 
	A C program that passes structures in between functions by value/reference
*/
#include<stdio.h>
#include<string.h>

//structure definition here
struct students{
	char sfname[20];
	char slname[20];
	char sprogram[20];
	int dstudid;
}; //a global template but local variables, no struct var declarations here 

//function declarations here 
void printReference( struct students *stdptr ); //by reference, use pointers
void printValue( struct students stdprf ); //by value, no *

int main(){
	//declare variables
	struct students s1; //we have s1 of type struct students

	puts("\n Enter student first name: ");
	gets( s1.sfname );
	puts("\n Enter student last name: ");
	gets( s1.slname );
	puts("\n Enter student degree program: ");
	gets( s1.sprogram );
	puts("\n Enter student id: ");
	scanf("%d", &s1.dstudid);

	//pass by value so we use just s1
	printValue( s1 );
	strcpy( s1.sfname, "Nuwan" );
	//pass by reference so we use &s1
	printReference( &s1 );
	return 0; 
}//endmain 

//function definitions here 
void printReference( struct students *stdptr ){
	printf("\n Student ID: %d ", stdptr->dstudid);
	printf("\n Student Name: %s, %s", stdptr->slname, stdptr->sfname);
	printf("\n Degree program: %s \n", stdptr->sprogram);
}// by reference we use ->

void printValue( struct students stdprf ){
	printf("\n Student ID: %d ", stdprf.dstudid);
	printf("\n Student Name: %s, %s", stdprf.slname, stdprf.sfname);
	printf("\n Degree program: %s \n", stdprf.sprogram);
}// by value we use .



