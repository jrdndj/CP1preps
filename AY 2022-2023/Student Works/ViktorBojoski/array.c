#include <stdio.h>

int main(){
	int dArr[5], dEvenCount=0;
	//printf("\n Please enter dimension: ");
	//scanf("%d",dnum);
	//int dArr[dnum];
	for (int dCtr=0; dCtr<5; dCtr++){
			printf("\n Enter number %d: ", dCtr+1);
			scanf("%d", &dArr[dCtr]);
			
			//immediately check the number if it is even, then update dEvencount
			if(dArr[dCtr]%2==0){
				dEvenCount++;
			}//end if
	}//endfor
	printf("\nThe number of even numbers is: %d \n", dEvenCount);
	return 0;
}

