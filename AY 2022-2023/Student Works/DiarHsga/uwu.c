#include<stdio.h>
#include<string.h>
#include<ctype.h> //to use toupper()

int main(){
	//declare variables
	char sWord[20]="truwudfvduwuuuwutfer";
	int dCtr=0;


	//scan the word array
	for(int i=0;i<18;i++){
		if(sWord[i]=='u'){
			if(sWord[i+1]=='w'){
				if(sWord[i+2]=='u'){
					dCtr++;	
				}
			}
		}
	}//endfor

	//print them to prompt the user
	printf("\n The word has %d repetitions. ", dCtr);

	return 0; 
		
}//end main
