//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
int main(){
	
	//defining variables
	int dN, dCtr1, dCtr2, dChecker=0;

	//interactive input
	printf("Please enter your number: \n");
	scanf("%d",&dN);
	
	//*weird prime noises*
	for(dCtr1=dN; dCtr1>0; dCtr1--){
		for(dCtr2=dCtr1; dCtr2>0; dCtr2--){
			if(dCtr1%dCtr2==0){
				dChecker++;
			}//endif
		}//endfor
		if(dChecker==2){
			printf("%d is a prime number. \n",dCtr1);
		}//endif
		dChecker=0;
	}//endfor
	
	//i'm not sure whether to put 1 as a prime number or not. Oh well.
}//endmain
