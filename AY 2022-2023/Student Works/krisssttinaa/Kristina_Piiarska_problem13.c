#include<stdio.h>
#include<string.h>

int substr(char sStr[],int dSize,int dIndex){
	int dSub_size=0;
	for(int dCtr=dIndex; dCtr<dSize; dCtr++){
		int dRepeats=0;
		char cCurrent_character=sStr[dCtr];
		for(int dCtr1=dIndex; dCtr1<dCtr; dCtr1++){
			if (sStr[dCtr1]==cCurrent_character){
				dRepeats=1;
				break;
			}
		}
		if(dRepeats==1){
			break;
		}
		dSub_size++;
	}
	return dSub_size;
}
int main(){
    //Declare our sring 
    //xzyxyy
	char sStr[50];
    //Ask for input
    printf("Insert string to check the longest substring: ");
	scanf("%s", sStr);
    //Length of string
	int dN=strlen(sStr);
    //Deslare var for the longest, to store this value
    //and if there is longer-change the value, if not - do nothing
	int dLongest=0;
	for (int dCtr=0; dCtr<dN; dCtr++){
        //Length of current subctring
		int dLen_sub=substr(sStr, dN, dCtr);
		if (dLen_sub>dLongest){
			dLongest=dLen_sub;
		}
	}
	printf("%d\n",dLongest);
    return 0;
}