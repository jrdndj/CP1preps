/*sort names in alphabetical order */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	//declaring some variables 
	char strName[100][100];
	char sName[100]; //this is temporary variable 
	int dNumNames;


	//asking the user how many names he will enter 
	printf("\n How many names you will eneter?");
	scanf("%d",&dNumNames);

	//enetering the names in 2D array 
	for(int i=0;i<dNumNames;i++)
		{
			scanf("%s",strName[i]);
		}
	//sorting the string array 
	for(int i=0;i<dNumNames;i++)
	{
		for( int j=i+1;j<dNumNames;j++)
		{
			if(strcmp(sName[i],strName[j])>0)
			{
				strcpy(sName,strName[i]);
				strcpy(strName[i],strName[j]);
				strcpy(strName[j],sName);
			}
	}
}
	printf("\n The sorted array of alphabetical order is:");
	for(int i=0;i<dNumNames;i++)
	{
		printf("%s\n",strName[i]);
	}
	
	return 0;
	}









