/*
char sWord[20] = ""
count the number of "uwu" in this string
*/
#include <stdio.h>
#include <string.h>
int main(){
	int dLen, counter=0;
	char sWord[20] = "tuwujvuwuudheyuwuokk";
	dLen = strlen(sWord);
	for (int i = 0; i < dLen-2; i++){
		if (sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u'){
			counter++;
		}
	}
	printf("\n Here are %d uwu: ", counter);

	return 0;
}
