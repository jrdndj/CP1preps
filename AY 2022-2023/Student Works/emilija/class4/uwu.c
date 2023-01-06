#include <stdio.h>
#include <string.h>

int main()
{
	//declare variables
	char sWord[20]="truwudfvduwuuuwutfer";
	int dUWU=0, dLen=20;

	for (int i = 0; i <= 17; i++)
	{
	
		if (sWord[i]=='u'&&sWord[i+1]=='w'&&sWord[i+2]=='u')
		{
			dUWU++;
		}

	}//endfor

	printf("\nThe word %s has %d uwus. \n", sWord, dUWU);


	return 0;
}