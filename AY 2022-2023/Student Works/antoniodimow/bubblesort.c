#include<stdio.h>
int main(){
	int dArr[10],biggestVal,biggestPos=0;

for(int dCntr = 0;dCntr<10;dCntr++){
	printf("\n Enter a number in slot %d: ",dCntr);
	scanf("%d",&dArr[dCntr]);
	}
	for(int dCntr = 0;dCntr<10;dCntr++){
		for(int dCntr2=0;dCntr2<dCntr;dCntr2++){
			
		if(dArr[dCntr]>biggestVal){
			biggestPos=dCntr;
			biggestVal=dArr[dCntr];
			}
		}
	}
}