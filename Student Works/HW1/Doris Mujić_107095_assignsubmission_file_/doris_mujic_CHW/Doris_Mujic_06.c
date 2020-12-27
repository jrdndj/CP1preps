#include<stdio.h>


int main(){

	//making an array, setting the size of the array  
	int array [10];
	int size=10;
	int temp=0;//declaring temporary variable and initializing it to 0

	//user input
	printf("\n Please enter 10 integers\n");
	
	//for loop so that the user can input 10 values 
	for(int i=0; i<10; i++){
		scanf("%d", &array[i]);
	}
	
	//sorting the array by loooping through it
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
		if(array[i]<array[j]){
			/*if the number at array[j] is smaller than the one in array[i] store it 
			in the temp variable and do so for every number until there are no more */
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	   }
	}
	
	//since the array is sorted, print the element at position/index 0, which is the smallest one
	printf("\n The smallest element is %d ", array[0]);
return 0;
}//end main