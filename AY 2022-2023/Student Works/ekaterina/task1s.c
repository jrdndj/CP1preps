/* word ="jchbsxchb<jsbxn"
 string has 20 characters 
  a program that can count how many "uwu" is there in the stirng 


  dLen=20
  dor i=0  i<n-3 i++ 
  i =w and i+1 == w  and i+3 == u then uwucount++

  #include<stdio.h>
  #include<string.h>
  int main(){

 	//introducing some variables 
 	char sWord[20];
 	int dCtr=0;
 	int  dLen;

 	//strlen returns the size of the string

 	//promt the user for an input
 	printf("\n Hello user give me the word:");
 	scanf("%s", sWord);

 	//the length of the string 
 	dLen=strlen(sWord);

 	for(int i=0; sWord[i]< dLen -3 ;i++)
 	{
 		if(i = 'u' && i+1 ==' w' && i+3 =='u')
 		dCtr++;

 	}





 	return 0; 
 	}