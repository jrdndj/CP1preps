#include<stdio.h>
#include<string.h>
#include<ctype.h> 

int main(){
	//declare variables
	char sWord[25];
	int dLen=0, dQues, dCtr=0;

	printf("\n String: ");
	scanf("%s", sWord);

	printf("\n number: ");
	scanf("%d", &dQues);

	dLen=strlen(sWord);
	
	if(dQues==3){
	for(int i=0;i<dLen-2;i++){
		printf("%c%c%c, ", sWord[i], sWord[i+1],sWord[i+2]);
		dCtr++;
	}//endfor
	}

	printf("\nnumber of combinations: %d \n", dCtr);
	return 0;
}
