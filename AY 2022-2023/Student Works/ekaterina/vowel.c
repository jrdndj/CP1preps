
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

	//declaring variables
	char sString[];
	int dCtr=0;
	int dLength;


	//asking the user to enter a string
	printf("\n Please enter a string:");
	scanf("%s\n",&sString);

	//this function gets the lenfth of the text the user entered 
	dLength=strlen(sString);

	//entering a for-loop to go trough the array
	for(int i=0;i<dLength;i++){
		if(sString[i]=='a' || sString[i]=='e' || sString[i]== 'i' || sString[i]=='o' || sString[i]=='u' ||sString[i]=='A' || sString[i]=='E' || sString[i]== 'I' || sString[i]=='O' || sString[i]=='U')
		{
			printf("\n I found a vowel");
			dCtr++;
		}

	}
	printf("\nThe number of vowels in the string is %d", dCtr);







	return 0;
}

