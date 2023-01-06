#include <stdio.h>

int main(){
	//declare variable
	int dArr[10];

	//create for loop
	for(int dCount=0; dCount<10; dCount++){
		printf("Enter the %d number: ",dCount+1 );
		scanf("%d", &dArr[dCount]);
	}

	for(int dCount1=0; dCount1<10; dCount1++){
		int dTemp=dArr[dCount1];
		int dInd=dCount1;
		for(int dCount2=dCount1; dCount2<10; dCount2++){
			if(dTemp>dArr[dCount2]){
				dTemp=dArr[dCount2];
				dInd=dCount2;
			}
		}
		int dtemp=dArr[dCount1];
		dArr[dCount1]=dTemp;
		dArr[dInd]=dtemp;

	}

	for(int dCount=0; dCount<10; dCount++){
		printf(" %d ",dArr[dCount] );
	}
	printf("\n");

	return 0;
}