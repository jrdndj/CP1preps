//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
int main(){
	
	//defining variables
	int dCtr1, dCtr2, dNl;
	int dCtr3=0;
	int dChecker=0;
	
	//*primal noises*
	for(dCtr1=1; dCtr1>0; dCtr1++){
		for(dCtr2=dCtr1; dCtr2>0; dCtr2--){
			if(dCtr1%dCtr2==0){
				dChecker++;
			}//endif
		}//endfor
		if(dChecker==2){
			dCtr3++;
		}//endif
		dChecker=0;
		if(dCtr3==1001){
			printf("%d", dCtr1);
			break;
		}//endif
	}//endfor
}//endmain
