#include <stdio.h>
#include <string.h>

int main(){
	char sWord[20] = "tfuwuftruuwuuuwufftr";
	int dLen = strlen(sWord);
	int uwucount = 0; 

	for(int i=0; i<dLen-2; i++){
		if(sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2] == 'u'){
			uwucount++;
		}
	}
	printf("%d\n",uwucount);
	return 0;
}