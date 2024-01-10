//duplicate elements are elements that exist more than once in the array
// 1 1 1 2 3 4 5 5 has 2 duplicate elements (1 and 5)

#include <stdio.h>

//declare functions
void sortAscending(int dArray[], int dLength);

//main
int main(){

	//declare local variables
	int dNum, dCount = 0, dDuplicates=0, dSize, dDuplSum=0;

	while(1){
		//user input size of the array
		scanf("%d",&dSize);

		//if its invalid ask again
		if (dSize>25 || dSize<5)
		{
			printf("Enter valid size of the array\n");
			continue;
		}

		//initialize arrays of size dSize
		int dArray[dSize], dVisited[dSize]; //dVisited 'boolean' array
		
		//let user enter only integers
		while(dCount<dSize){ //until weve counted dSize many integers
			if (scanf("%d",&dNum)==1) //if scanf succesfully scans 1 integer
			{
				dArray[dCount]=dNum; //put it into array
				dCount++; //count it
				dVisited[dCount]=0; //also initialize dVisited with zeros
			}
			else{
				continue; //if scanf did not scan 1 int sucessfully enter again
			}
			
		}//endwhile

		//sort the array
		sortAscending(dArray,dSize);

		//loop thorugh array
		for (int i = 0; i < dSize; ++i)
		{	
			if (dVisited[i]==1) //if the number is 1 it has already been counted
			{
				continue; //skip to next  element
			}
			dDuplicates=0; //reinitialize dDupl to 0
	
			for (int j = 1+i; j < dSize; ++j) //compare element to the rest of the array
			{
				if (dArray[i]==dArray[j]) //if the elements are equal
				{
					dDuplicates++; //count how many times that happened
					dVisited[j]=1; //set the element were comparing to to 1 so we skip it
					//in the next outer for iteration
					
				}
			}//endinnerfor
			if (dDuplicates!=0) //if dDupl changed from 0 that means an element 
				//exists more than once in the array meaning it has duplicates
				{
					dDuplSum++; //for every element it happens for, increase dDuplSum by one
				}//endif

		}//endouterfor

		//break while to avoid infinite loop
		break;
	}//endwhile

	//print num of duplicate elements
	printf("%d is number of duplicate elements\n", dDuplSum);
	return 0;
}//endmain

//function to sort the array in asc order
void sortAscending(int dArray[], int dLength){

	//declare local variables
	int dCount = 0;
	int dTemp;
	int dOld;

	while(1){
		//set old counter to dCount
		dOld = dCount;
		//loop through array comparing array[i] to array[i+1]
		for (int i = 0; i < dLength - 1; ++i) //dont compare last one, out of bounds
		{
			if(dArray[i]>dArray[i+1]){//if element is bigger than the next, switch places
			//use temporary variable to swap two variables
			dTemp = dArray[i];
			dArray[i] = dArray[i+1];
			dArray[i+1] = dTemp;
			dCount++; //if a change was made increase counter
			}
		}//endfor
		//if no change is made dOld will remain equal to dCount
		if(dOld == dCount){ //loop while until no changes have been made
			break;
		}
    }//endwhile
}//endfunction