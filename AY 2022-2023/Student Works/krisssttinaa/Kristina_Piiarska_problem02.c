#include <stdio.h>
int main() {
	//declare vars
	float fNum=1, fSum=0, fAver;
	int dCtr=0; 
    
   	while (fNum != 0) {
   	printf("\nEnter a integer: ");
   	scanf("%f", &fNum);

    if (fNum < 0){
       printf("ERROR");
   	}
    else if( fNum > 0) {
       fSum += fNum;
       dCtr++;
     }
   	}//endofwhile
   
   	//print average of typed numbers
   	if (dCtr > 0){
    fAver = fSum / dCtr;
    printf("\nAverage: %f \n", fAver);
 	}
 	//print no average if number of types values is 0
   	else{
    printf("\nNo average");
   }
   return 0;
}