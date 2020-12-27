#include<stdio.h>

int main(){
	
	int dArray[25], dArrayCp[25], dMarked[25];
	int dNumOfEl;
	int dMark = 1;
	int dCounter = 0;
	
	printf("How many elements will you put in the array? ");
	scanf("%d", &dNumOfEl);
	
	// for loop to get an Array from the User
	// in the same loop we copy the array to dArrayCp
	// and put all zeros in the array: dMarked
	
	printf("Please enter your array: ");
	
	for(int i=0; i<dNumOfEl; i++){
		scanf("%d", &dArray[i]);
		dArrayCp[i] = dArray[i];
		dMarked[i] = 0;
	}
	
	/*
		The idea is to compare array with it's copy, when we find that 	
		elements in some positions are the same we put value of dMark in array dMarked,
		initial value of dMark is 1, and that means that we came across this element for the first time.
		But then, we increase value of the variable dMark by one.
		So now, when we find that two elements are the same it means that we already 
		came across this element, i.e. this element is showing for the second time, 
		so we are putting value of 2 in the position where a certain element is showing up 
		for the second time. Similarly we put number 3 in the array dMarked, wehen an
		element is showing up for the third time and so on.
	
	*/
	
	for (int i=0; i<dNumOfEl; i++ ){
		for (int j=0; j<dNumOfEl; j++){
			if (dArray[i] == dArrayCp[j]){
				dMarked[j]=dMark;
				dMark++;
			}
		}
		dMark=1;
	
	}
	
	// Now, we just need to check in how many positions we have value 2, because those are postions where an element showed up for the second time.
	
	for (int i=0; i<dNumOfEl; i++){
		if (dMarked[i] == 2){
			dCounter++;
		}
	}
	
	printf("There are %d duplicated elements.\n", dCounter);
	return 0;
}
