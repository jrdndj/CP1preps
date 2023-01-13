#include <stdio.h>

int main(){

//declare empty array
int dArr[10];

//declare temporary variable to use while sorting
int temp;

//set "boolean" variable to true, use to check swapped state
int swapped = 1;

//ask user for input
printf("Please enter 10 numbers: ");

//for loop to insert numbers to the array
for (int i = 0; i < 10; ++i){
		scanf("%d", &dArr[i]);
}//endfor

//sort the array in ascending order
//while swapped is true keep repeating
//stop when swapped is false == when the array is sorted / no change happened
while(swapped == 1){

	//set swapped to false, no change happened yet
	swapped = 0;

	//go through the whole array except for last index,it doesnt get compared to anything
	for (int i = 0; i < 9; ++i){

		//if an element is greater than the one after it, swap them 
		if (dArr[i]>dArr[i+1]){

			//swap happened - change swapped to true 
			swapped = 1;

			//store the first one in temp variable
			temp=dArr[i];
			//store the second one in the first
			dArr[i]=dArr[i+1];
			//store temp (first one) in second one
			dArr[i+1]=temp;

		}//endif
}//endfor
}//endwhile

//for loop to print the sorted array
for (int i = 0; i < 10; ++i){
		printf("%d ", dArr[i]);
}//endfor




return 0;
}//endmain