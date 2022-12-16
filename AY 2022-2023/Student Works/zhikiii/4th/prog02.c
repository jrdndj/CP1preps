/*
	cryptography and compression
	hashing

	word = "ruwubduwugnreuwuwugn"

	string has 20 char.
	dLen=20
	dLen=n

	write a program that can count how many "uwn" 
	is there in the string

	for i=0 until n-3 then i++
	
	i=u and i=1 == w and i=3 == u then uwuctr++

*/

#include <stdio.h>
#include <string.h>

int main(){

	char sWord[100];
	int dUwu=0;
	printf("enter a word: ");
	scanf("%s", sWord);

	int dLen=strlen(sWord);

	for(int i=0; i<dLen-3; i++){
		if(sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2] == 'u' )
			dUwu++;
	}//forend

	printf("%d \n", dUwu);
	return 0;
}
