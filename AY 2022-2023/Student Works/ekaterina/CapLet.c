/*find first captal letter in a string 
or else  first lower letter in a string */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

//declaring variables 
char dText[20];
char cCar;
int dLen;
int dCtr=0;

//Ask the user for an input 
printf("\n Please enter a sting ");
fgets(dText,20,stdin);

for(int i=0;i<strlen(dText);i++)
{
	if(dText[i]>='A' && dText[i]<='Z')
	{
		printf("\nCAPITAL LETTER : %c",dText[i]);
	}
	else if(dText[i]>='a' && dText[i]<='z')
	{
		printf("\n small letter:  %c",dText[i]);
	}
}







return 0;
}
