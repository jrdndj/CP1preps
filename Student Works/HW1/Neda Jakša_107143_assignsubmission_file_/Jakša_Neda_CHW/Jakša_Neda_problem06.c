//This code was written by Neda Jakša, unfortunately
#include<stdio.h>
int main(){
	
	//defining variables
	int n=10;
	int dMin, dCtr;
	char dArray[n];
	
	//interactive input
	printf("Please enter the elements of your array: \n");
	
	for(dCtr=0; dCtr<n; dCtr++){
		scanf("%d",&dArray[dCtr]);
	}//endfor
	
	//*weird minimised noises*
	dMin=dArray[0];
	
	for(dCtr=1; dCtr<n; dCtr++){
		if(dArray[dCtr]<dMin){
			dMin=dArray[dCtr];
		}//endif
	}//endfor
	
	//output
	printf("The smallest number in your array is: %d \n",dMin);
}//endmain
