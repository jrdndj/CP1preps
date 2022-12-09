/*
Aski the user to enter 10 valjues
and then print the number of even values in it
*/

#include <stdio.h>

int main(){
//declare an array
	int dArr[10], dEvenCtr=0;
    
    //ask the user for an input 
	for(int dCtr=0; dCtr<10; dCtr++){
		printf("\n Enter a numkber in slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);

		//check if the number is even
		if( dArr[dCtr]%2==0 ){
            dEvenCtr++;

		}//endcheckeven
      
	}//endforloop
	printf("\n")

	for( int dCtr=0; dCtr<10;dCtr++){
		printf("%d", dArr[aCtr]);
	}
	biggerstVal = dArr[0];
	biggestPos = 0;

	for (int dCtr=1; dCtr<10;dCtr++){
		for(int dCtr2=0;dCtr2){
		if (dArr [dCtr]=biggerstVal){
          biggestPos=dCtr;
          biggerstVal=dArr[dCtr];
		
		}
	}
}
	
    //rintf("\n There are %d even number in our array. \n ", dEvenCtr);
 	return 0;
}
