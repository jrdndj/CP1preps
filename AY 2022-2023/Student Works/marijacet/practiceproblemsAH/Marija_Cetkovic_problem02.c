#include <stdio.h>

//define functions
void sortDescending(int dArray[], int dCoins);

int main(){
	//define variables
	int dCoins; //num of coins
	int dSum = 0; //sum of coins 
	int dSumRest; //sum of rest coins
	int dCountCoins; //counter used in the for loop

	printf("Enter n:\n");
	scanf("%d",&dCoins); //user input
	
	printf("Enter coins\n");
	int dArray[dCoins]; //define array
	for (int i = 0; i < dCoins; ++i)
	{
		scanf("%d",&dArray[i]); //let user initialize array
	}


	//sort first
	sortDescending(dArray,dCoins);

	//firstly sum all of them
	for (int i = 0; i < dCoins; ++i)
	{
		dSumRest+=dArray[i];
	}

	//as they are sorted now, the biggest are at the beginning
	//so keep taking the biggest and summing them
	//when an element is taken, it is not in the rest of coins anymore, deduce from dSumRest
	for (int i = 0; i < dCoins; ++i)
	{
		dSum+=dArray[i];
		dSumRest-=dArray[i];
		dCountCoins++; //increase counter for every coin taken

		//when dSum becomes >dSumRest our condition is met, break for
		if (dSum>dSumRest)
		{
			break;
		}
	}
	//let user know what the minimum amount of coins taken to satisfy dSum>dSumRest was
	printf("%d\n",dCountCoins );

	return 0;
}//endmain


//function to sort the array in descending order
void sortDescending(int dArray[], int dCoins){

	//define variables
	int dCount = 0;
	int dTemp;
	int dOld;

	while(1){
		//set old counter to dCount
		dOld = dCount;
		//loop through array comparing array[i] to array[i+1]
		for (int i = 0; i < dCoins - 1; ++i) //dont compare last one, out of bounds
		{
			if(dArray[i]<dArray[i+1]){//if element is smaller than the next, switch places
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