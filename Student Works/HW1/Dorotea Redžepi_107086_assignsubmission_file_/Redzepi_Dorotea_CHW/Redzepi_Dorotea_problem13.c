#include<stdio.h>

int main(){
	int dArray[10], dEven[10], dOdd[10]; // declaring three arrays (one general, one that will contain even integers and one that will contain odd)
	int dEvenIndex=0, dOddIndex=0; // variables that will keep track of how many elements we added to Even and Odd lists
	
	printf("Please enter 10 integers: ");
	for (int i=0; i<10; i++){
		scanf("%d", &dArray[i]);
		
		/* if input is even, we add it to the even list and increase 		
		value of index by one, if it's odd, we do exactly the same 			
		thing but for the odd list */
		
		if (dArray[i] % 2 == 0){
			dEven[dEvenIndex]=dArray[i];
			dEvenIndex++;
		}
		else{
			dOdd[dOddIndex]=dArray[i];
			dOddIndex++;
		}
	}
	
	/*
		I assume there is an easier way to do the separation, but I 			
		wasn't sure what is the syntax for that in C (for example in 		
		Python it would bejust list.append(element))
		
	*/

	printf("\nArray of the even elements: ");
	for (int i=0; i<dEvenIndex; i++){
		printf("%d ", dEven[i]);
	}
	
	printf("\nArray of the odd elements: ");
	for (int i=0; i<dOddIndex; i++){
		printf("%d ", dOdd[i]);
	}
	
	return 0;
}
