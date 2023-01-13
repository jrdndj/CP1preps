/*
	ask the user to entr a string wor dinput, 7-25 char.
	ask the user how many char do they wish 
	to scan at a given time

	if the user enters 3, then it will print all the 3 letters 
	groupings that can be found in the word.
	then the number of combinations printet

	onomatopeia
	number :3
	ono, nom, oma, mat, ato, top, ope, pei, eia
	number of combo: 9

*/

#include <stdio.h>
#include <string.h>

int main(){

	char sWord[25];
	int dLent;
	int dLen=strlen(sWord);
	int dCtr=0;
	int dUwu=0;
	printf("enter a word btw. 7-25 char.: ");
	scanf("%s", sWord);
	printf("enter a int: ");
	scanf("%d", dLent);


	for(int i=0; i<dLen-dLent; i++){
		for(int j=i; i<dLent-1; i++){
			printf
		}
	}





	return 0;
}
