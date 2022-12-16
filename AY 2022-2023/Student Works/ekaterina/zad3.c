/* ask the user to enter  a string word input. 7-25 characters
Ask the user how many characters  do they want to scan at a given time
if the user eneters 3 then it will print all the 3 larger groupings that can be found in it then count the number of combinations printed 
*/
 #include<stdio.h>
 #include<string.h>
  int main(){

 	//introducing some variables 
 	char sWord[20];
 	int dCtr=0;
 	int  dCombinations=0;
 	int numChar;


 	

 	//promt the user for an input
 	printf("\n Hello user give me the word:");
 	scanf("%s", sWord);

 	//the length of the string 
 	 int dLen=strlen(sWord);

 	//promt the user for an input
 	printf("\n How many characters will you enter");
 	scanf("%d", numChar);

 	for(int i=0; sWord[i]<=dLen-numChar;i++)
 	{
 		for( int j=i; j<numChar+1; j++)
 		{
 			printf("%s",sWord[j])
 			
 		}
 		
 	dCombinations++;
 	}
 	printf(" The number of combinations are %d \n",dCombinations);





 	return 0; 
 	}