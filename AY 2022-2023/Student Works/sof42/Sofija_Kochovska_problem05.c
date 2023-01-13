#include<stdio.h>

int main(){
//declare variables
	int dArr[10], dSmallestNum;
//prompt the user to insert values in array
	printf("\nPlease insert 10 elements in the array!\n");
	for(int i=0; i<10; i++){
	printf("Please insert %d element of array: ", i);
	scanf("%d", &dArr[i]);
	}//endfor
//make the first element the smallest
	dSmallestNum=dArr[0];
//find the smalest number in array
	for(int i=0; i<10; i++){
		if(dSmallestNum>dArr[i]){
			dSmallestNum=dArr[i];
		}//endif
	}//endfor
	printf("\nSmallest element in the array is: %d\n",dSmallestNum );
	printf("\n");
return 0;
}//endmain