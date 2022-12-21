#include <stdio.h>
#include <string.h>
int main(){
	char sWord[20] = "tfuwuftruuwuuuwufftr";
	int dLen=0;int uwucount=0;
	dLen=strlen(sWord);
	for (int i=0; i<dLen-2;i++){
		if(sWord[i]=='u' && sWord[i+1]=='w' && sWord[i+2]=='u'){
			uwucount++;
		}
	}
	printf("\n This word has %d uwus in it. ", uwucount);
	return 0;
}