#include <stdio.h>
#include<string.h>
int main(){

char sWord[50];
int num;
int groupings = 0;
//prompt the user for an input
printf("Please give me a word: ");
scanf("%s", sWord);//we dont need an ampersand for string
//scanning a string
printf("Please give me a number: ");
scanf("%d", &num);

for(int i=0; i<(strlen(sWord)-(num-1)); i++){//scanning per character
	for (int j = i; j<i+num; j++){
	printf("%c", sWord[j]);
	}
	groupings++;
	printf(", ");
}//endfor

printf("number of groupings is %d\n", (strlen(sWord)-(num-1)));/*because thats how many times you execute the loop*/

return 0;
}//endmain
