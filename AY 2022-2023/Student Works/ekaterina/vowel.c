/*	1.a program to know if a letter is a vowel or not 
	2.count number of vowels in a string
	3.get the length of a string without using string functions
	4.count number of words in a sentence 
	5.count number of times a letter is repeated in a string
	6.calculate frequency of a number 
	7.convert upper to lowercase and vise versa
	8.print number of white space in a string
	9.the check if a given string is a palindrome or not 
	10.print a reverse of a string
	11.sum of digitis in a string
	12.find the first capital letter in a string
	13.split sentence for a given character 
	14.sort names in Alphabetical odrer
	15.reverse of words in a given string
	16.print largest and smallest word from given string 

	*/

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

