/*Get the length of a string without using a function*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char sText[20];
	int dCtr1=0;  //a counter for full length including blank space 
	int dCtr2=0; //a counter for blank space 

	//asking the user to enter a string
	printf("\n Please enter a string:");
	fgets(sText,20,stdin);

	for(int i=0;sText[i]!='\0';i++)
	{
		dCtr1++;
	}

	for(int i=0;sText[i]!='\0';i++)
	{
		if(sText[i]==' ')
		{
			dCtr2++;

		}
	}

	printf("\nThe length of the string you entered  is %d", dCtr1-dCtr2-1); //-1 becuse we do not want to include the null terminator C add at the end of every string
	return 0;
}
