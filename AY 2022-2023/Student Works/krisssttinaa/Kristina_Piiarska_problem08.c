#include <stdio.h>

int main(){
	//declare variables
    int dNum, dCtr, dAmount=0;
    //ask user for input
    printf("\n Enter the value of N: ");
    scanf("%d", &dNum);

    if(dNum>1){
    	for (int dCtr = dNum; dCtr > 1; dCtr--){
    		if (dCtr%2!=0){
    			//printf("\n %d", dCtr);
    			dAmount++;
    		}
    		else if (dCtr==2){
    			//printf("\n %d", dCtr);
    			dAmount++;
    		}
    	}
    	printf("\n Number of prime numbers lesser or equal to %d is: %d \n", dNum, dAmount);
    }
    else if (dNum<0)
    {
    	printf("\nNegative integers are not prime \n");
    }
    else{
    	printf("\nThere's no prime numbers lesser or equal to %d \n", dNum);
    }
return 0;
}