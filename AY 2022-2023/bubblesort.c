#include<stdio.h>

int main(){

	int dArr[10], dCtr, biggestVal= dArr[0], biggestPos = 0;

	for(dCtr = 0; dCtr <= 10; dCtr++){
		printf("\n Enter a number in slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);

	}//endOf1stForLoop
		
		for(int dCtr = 0; dCtr < 10; dCtr++){
			printf("\n %d ", dArr[dCtr]);
			
		}//endOf2ndForLoop
		
	

		for(int dCtr = 0; dCtr < 10; dCtr++){
			for(int dCtr2 = 0; dCtr2 <= dCtr-1; dCtr2++){
				
			
			if(dArr[dCtr] > biggestVal){
				//if this is true we swap
				biggestPos = dCtr;
				biggestVal = dArr[dCtr];
				//remember the position and the value 
			}//endIf
		}//endInnerFor
		printf("\n %d", dArr[dCtr]);
	}//endOuterFor
	
}