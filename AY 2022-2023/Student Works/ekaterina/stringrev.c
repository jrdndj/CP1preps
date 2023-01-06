/*print a reverse of a string */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	//declaring some variables 
	char sString[10];
	int dLen;

	dLen=strlen(sString);
	//asking the user to enter an input 

	printf("\n Please enter a sting ");
	fgets(sString,10,stdin);


	//printong the string array from the last elelement
	for(int j=strlen(sString)-1;j>=0;j--)
	{
		printf("%c",sString[j]);
		
	}
	return 0;
}