#include <stdio.h>
#include <string.h>
int main(){
	//declare the variables
	//print to ask the user for enter number
	//scanf to ast the user for the number

	//the number unput by the user is used as dChar in this solution

	char sWord[12] = "onomatopoeia";
	int n=0;
	int userinput=0;
	int dLen = strlen(sWord);
	int dChar = userinput;
	int Count=0;
	printf("\n Enter number:");
	scanf("%d", userinput);
	for (int i=0; i<n-dChar; i++){
		for (int j=0; j<i+dChar; j++){
			printf("%c", sWord[j]);
		}
		if(i != n-dChar){
			printf(", ");
		}
		Count++;
	}
printf("\n %d", Count);
return 0;
}
