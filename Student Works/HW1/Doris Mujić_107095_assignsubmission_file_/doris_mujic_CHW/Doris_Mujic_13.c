#include<stdio.h>

int main(){

	//user input 
	printf("\nHow many elements do you want to insert\n");
	int a;
	scanf("%d",&a);
	
	//using for loop to insert elements
	int array[a];
	printf("\nPlease insert the elements\n"); 
	for(int i=0; i<a; i++){
		scanf("%d",&array[i]);
	}
	
	//declaring, initializing variables 
	int count=0;
	int counter=0;
	
	//making the odd and even array
	int odd[a];
	int even[a];
	
	/*looping through the first array and dividing each element 
	by 2 and sorting them into their own array*/
	for(int i=0; i<a; i++) {
		if(array[i]%2 == 0) {
		even[count]=array[i];
		count++;		
		}
	}
	for(int i=0; i<a; i++) {
		if(array[i]%2 != 0) {
		odd[counter]=array[i];
		counter++;		
		}
	}
	//looping through the odd and even array and printing each element 
	printf("\nThe odd elements are:\n");
	for(int i=0; i<counter; i++) {
		printf("%d",odd[i]);
		printf(" ");
	}
	printf("\n");
	printf("\nThe even elements are:\n");
	for(int i=0; i<count; i++) {
		printf("%d",even[i]);
		printf(" ");
	}
	
return 0;
}//end main