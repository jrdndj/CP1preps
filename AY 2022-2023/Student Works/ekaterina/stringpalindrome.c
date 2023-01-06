/*a stirng palindrome program*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){


	//declaring some variables 
	char sText[10];
	int dLen;
	int dCtr=0;

	
	//Ask the user for an input 
	printf("\n Please enter a sting ");
	fgets(sText,10,stdin);

	dLen=strlen(sText);

	for(int i=0;i<=dLen;i++)
	{
		if(sText[i]==sText[dLen-i-1])
		{
			dCtr++;
		}
	}
	
	if(dCtr!=0)
	{	
	printf(" %s is a palindrome",sText);
	}
	else{
		printf("%s is not a palindrome",sText);
	}

	return 0;
}