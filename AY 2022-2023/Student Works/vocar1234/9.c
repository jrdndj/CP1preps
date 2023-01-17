#include <stdio.h>
#include <string.h>

int main(){
char sWord[20]="tfuwuftruuwuuuwufftr";
int uwu_count = 0;
for (int i = 0; i<strlen(sWord)-2; i++ ){
	if (sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u'){
		uwu_count++;
	}
}
printf("number of uwu is: %d\n", uwu_count);
	return 0;
}

//count number of "uwu" in this string