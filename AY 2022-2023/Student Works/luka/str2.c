#include <stdio.h>

int main(){
	
	char sWord[20] = "tfuwudsdfuwusadf";
	int dLen = strlen(sWord);
	int uwucnt = 0;

	for (int i = 0; i < dLen-2; ++i){
		if (sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2] == 'u'){
			uwucnt++;
		}
	}

	printf("There are %d uwu's in your word \n",uwucnt);

	return 0;
}
