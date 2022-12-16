/*
We have the word onomatopoeia
user enters a number 4
4 letter groupings ( should be dynamic )
*/
#include <stdio.h>
#include <string.h>
int main(){
	int dLen, counter=0, dInput;
	char sWord[12] = "onomatopoeia";
	dLen = strlen(sWord);
	printf("\n Insert a number: ");
	scanf("%d", &dInput);
	for (int i = 0; i <= dLen-dInput; i++){
		for(int j = i; j < i+dInput; j++){
			printf(" %c ", sWord[j]);
		}
		if(i!=dLen-dInput){
			printf(", \n");
		}
		counter++;
	}
	printf("\n There are %d groupings: ", counter);

	return 0;
}
