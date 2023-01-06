#include <stdio.h>
#include <string.h>

int main()
{
	char sWord[25];
	int counter=0, dLength=0;

	//asking for input
	printf("\n Please enter a word  ");
	scanf("%s", sWord); 
	for (int i = 0; i < strlen(sWord); i++)
	{
		if(sWord[i]=='u'&& sWord[i+1]=='w' && sWord[i+2]=='u') counter++;
	}
	if(counter==0) printf("\n The word doesn't contain uwu ");
	else printf("\n The word contains %d uwus \n", counter);
	return 0;
}