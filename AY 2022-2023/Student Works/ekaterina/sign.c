/*count number of times a character is repeated in a string*/
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

//Please enter the character 
printf("\n What charcter do you want me to search for?");
scanf("%c",&cCar);

//get the length of the string 
dLen=strlen(dText);
for(int i=0;i<dLen;i++){
	if(dText[i]==cCar)
	{
		dCtr++;
	}
}

printf("\n I found the character %c, %d times.",cCar,dCtr);



	return 0;
}