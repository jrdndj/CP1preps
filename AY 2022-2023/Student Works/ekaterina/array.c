//Ask the user to eneter 5 integers in an array.The progra, shoudl print how many even elements are in the array.

#include<stdio.h>
int main(){
	//declare my array
	int dArr[5], dEvenCount=0;

	//lets use a for loop to repeditely ask the user for an input
	for(int dCtr=0;dCtr<5;dCtr++){
		printf("Enter number %d: \n",dCtr+1 );  //prints e.x Enter number 1
		scanf("%d",&dArr[dCtr]); //we store the integer in the slot represented by dCtr in dArr


		//imediately check if the number is even then update dEvenCount
		if(dArr[dCtr]%2==0){
			dEvenCount++;

		}//endif

	}//endfor
	printf("\n You have entered %d even elements in the array. \n", dEvenCount);

	return 0;
}//endmain