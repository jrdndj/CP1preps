#include<stdio.h>
#include<string.h> //for the string operators
#include<ctype.h> //for the toupper

/*
	A C program that will allow the user to enter basic math equations 
	do some manipulation or comparisons 

	puts, gets, strlen, strcat, strcmp, strstr
*/

int main(){
	//declare variables
	char sEquation[50];
	char sInput[10];
	char sCheck[50] = "y = mx + b + 1/2";
	int dLen; //length to be used with str length

	//interactive input using puts and gets
	puts("\n Please enter an equation: ");
	// y = mx + b

	//input using gets 
	gets( sEquation );
	//no %, no & 

	printf("\n Your input was %s ", sEquation);

	//get the length of the input
	dLen = strlen(sEquation); 

	printf("\n Your equation has %d characters (including spaces). ", dLen);

	//strcat(string1, string2) = string 2 is added after string 1
	// string 1 = y = mx + b 
	//string 2 = / 2 +1

	//strcat( sEquation, "/ 2 + 1");
	put("\n Please add something to the equation: ");
	gets(sInput);
	strcat( sEquation, sInput );

	printf("\n The updated equation is %s . ", sEquation);

	// strcmp( string1, string2 ) function that returns 0 if they are equal

	if( strcmp( sEquation, sCheck ) == 0 ){
		printf("\n We have the same statements");
	}//endif
	else{
		printf("\n Our statements are different. \n Yours is %s, \nmine is %s. ", sEquation, sCheck);

		//strstr(string1, string2) check if strng2 can be found in string1
		if( strstr(sEquation, "mx") ){ //this statement is true if mx is found in sEquation
			//strchr(sEquation, 'y')
			puts("\n However, the equation has mx on it like mine.  ");
		} 
	}//endif()
	//printf("\n %s", strstr(sEquation, "mx"));

	// AAAAAAAAR18AAAAAAAAAF14BBBBBBBBB

	return 0; 
}









