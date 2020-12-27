#include<stdio.h>

int main(){
	
	//setting the maximum number of the array to 25
	//intializing and declaring variables 
	int array[25];
	int a;
	int count=0;
	int temp=0;

	//user input 
	printf("\n Enter the number of elements\n");
	scanf("%d",&a);
	
	//telling the user whther the number fits in the criteria 5-25
	if(a<5){
		printf("\n This program only deals with the number of elements greater than 5 in the array \n");
		return 0;
		//with return 0 we break the if command and stop the program
	}
	if(a>25){
		printf("\n This program only deals with the number of elements less than 25\n");
		return 0;
	}
	else{

	//user input for the elements of the array
	printf("\n Please enter the elements of the array\n"); 
	for(int i=0; i<a; i++){
		scanf("%d", &array[i]);
		}

	//sorting the array by looping through it
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
		if(array[i]<array[j]){
			/*if the number at array[j] is smaller than the one in array[i] store it 
			in the temp variable and do so for every number until there are no more */
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	}
	//looping through and saying if the number at i is the same as i+1 then count the number 
	for(int i=0; i<a; i++){
		if(array[i]==array[i+1]){
			count++;
		//setting while loop for the i to continue going up until a
		while(array[i] == array[i+1])
		i++;
	}
	}
	//printing the number of same elements
	printf("\n The number of duplicate elements is %d\n",count);
	}


return 0;
}//end main