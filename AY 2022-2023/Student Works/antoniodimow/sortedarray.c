#include<stdio.h>

int main(){
	int dArr[10],dEvenCtr=0;

	for(int dCtr=0;dCtr<10;dCtr++){
		printf("\n Enter a number in slot %d: ",dCtr);
		scanf("%d", &dArr[dCtr]);
		if(dArr[dCtr]%2==0){
			dEvenCtr++;
		}
	}
	printf("\n There are %d even numbers in our array. \n",dEvenCtr);
	return 0;
}