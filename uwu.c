
#include<stdio.h>
#include<string.h>

int main(){

char sWord[20] = "ireallyhateuwuanduwu";

// Count the number of "uwu" in this string

int dLen = strlen(sWord);
int dCounter = 0;

for (int i = 0; i < dLen - 2; i++){ 
	if (sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2] == 'u'){
		dCounter++;
		}
	}
	printf("%d\n", dCounter);
}

