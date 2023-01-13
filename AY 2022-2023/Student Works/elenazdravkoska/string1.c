#include<stdio.h>
#include<string.h>

int main(){
	char sWord[20]="tfuwuftruuwuuuwufftr"
	int dLen, counter=0;

	printf("\n Insert your word here: ");
	scanf("%s", sWord);
	dLen = strlen(sWord);

	for (int i = 0; i < dLen-2; i++)
	{
		if (sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2]'u')
		{
			counter++;
		}
		printf("\n Here is %d your word", counter);
		
	}//endfor


}//endmain
