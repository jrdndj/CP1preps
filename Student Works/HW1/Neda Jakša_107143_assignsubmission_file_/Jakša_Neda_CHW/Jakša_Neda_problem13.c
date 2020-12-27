//This code was written by Neda Jakša, unfortunately
#include<stdio.h>
int main(){
	
	//defining variables
	char dArray[10];
	char dEven[10];
	char dOdd[10];
	int dCtr=0;
	int dCtr1=0;
	int dCtr2=0;
	
	//interactive input
	printf("Please enter 10 elements for your array \n");
	for(dCtr=0; dCtr<10; dCtr++){
		scanf("%d",&dArray[dCtr]);
	}//endfor
	
	for(dCtr=0; dCtr<10; dCtr++){
		if(dArray[dCtr]%2==0){
			dEven[dCtr1]=dArray[dCtr];
			dCtr1++;
		}//endif
		else{
			dOdd[dCtr2]=dArray[dCtr];
			dCtr2++;
		}//endelse
	}
	
	int dCtr1cpy=dCtr1;
	int dCtr2cpy=dCtr2;
	
	printf("The odd array is: \n");
	for(dCtr2=0; dCtr2<dCtr2cpy; dCtr2++){
		printf("%d  ",dOdd[dCtr2]);
	}//endfor
	
	printf("\n The even array is: \n");
	for(dCtr1=0; dCtr1<dCtr1cpy; dCtr1++){
		printf("%d  ",dEven[dCtr1]);
	}//endfor
}//endmain
