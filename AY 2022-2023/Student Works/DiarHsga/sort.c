#include <stdio.h>

int main(){
	//declare my array
	int dArr[10], dEvenCount=0, dCtr, dCtr1,dCtr2,dCtr3, dCtr4;
	int dChange;
	for(dCtr=0;dCtr<10;dCtr++){
		printf("\n Enter number %d: ", dCtr+1);
		scanf("%d", &dArr[dCtr]);
		//we store the integer in the slot represented by dCtr in dArr				
	}//endfor

	for(dCtr1=0;dCtr1<10;dCtr1++){
		printf("\n %d", dArr[dCtr1] );
	}

	for(dCtr2=0;dCtr2<10;dCtr2++){
		
		for(dCtr3=dCtr2+1;dCtr3<10;dCtr3++){
			if(dArr[dCtr2]>dArr[dCtr3]){
				dChange=dArr[dCtr2];
				dArr[dCtr2]=dArr[dCtr3];
				dArr[dCtr3]=dChange;
				dChange=0;
			}
		}
	}
	
	printf("\n Ascendet: \n");
	for(dCtr4=0;dCtr4<10;dCtr4++){
		printf("%d \n", dArr[dCtr4] );
	}
	

	return 0;

}//end main
