#include <stdio.h>
#include <string.h>

int main(){
	char sWord[10];
	int dLen = 0;
	int dFlag = 0;

	scanf("%s",sWord);
	//set dLen as the length minus 1 halfed
	dLen = (strlen(sWord)-1)/2;
	
	for (int i = 0; i <= dLen; ++i)
	{
		//if the first and last char dont match break and not a pal, break
		if(sWord[i]!=sWord[strlen(sWord)-i]){
			dFlag = 0;
			break;
		}
		//everything else true, set to true, pal
		else{
			dFlag = 1;
		}
	}//endfor
	if (dFlag){
		printf("This is not a palindrome\n.");
	}
	else{
		printf("This is a palindrome.\n");
	}

	return 1;
}//endmain