//logic: sort the array and count how many of them meet the requirement abs(dArray[i]-dArray[i+1])<=1
//if only one can be left that means that count went up for all the ones before it so length - 1

#include <stdio.h>
#include <stdlib.h>

void sortAscending(int dArray[], int dLength);


int main(){

	//declare variables
    int dLength;
	int dChange=0;
	//user input
	scanf("%d", &dLength);

	//initialize array
	int dArray[dLength];

	//take user input for array
	for (int i = 0; i < dLength; ++i)
	{
		scanf("%d", &dArray[i]);
	}

	//sort using function
	sortAscending(dArray,dLength);
	
		//perform logic described above
		for (int i = 0; i < dLength-1; ++i)
		{
			if (abs(dArray[i]-dArray[i+1])<=1)
			{
				dChange++;

			}
		}//endfor

		//if count went up for every but last one, YES
		if(dChange == dLength - 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}

	return 0;
}//endmain

//function to sort the array in asc order
void sortAscending(int dArray[], int dLength){

	//define variables
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