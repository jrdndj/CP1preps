#include<stdio.h>
int main(){
	//declare int array
	int dArr[10], dCtr=0, dEvenCtr=0;

	//ask for input using loops
	while(dCtr<10){
		printf("\n Enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		//even or odd?
		if( dArr[dCtr]%2==0 ){
			dEvenCtr++;
		}//endif
		dCtr++;
	}//endwhile

	//total of even numbers
	printf("\n You entered %d even numbers. \n", dEvenCtr);
	return 0;
}