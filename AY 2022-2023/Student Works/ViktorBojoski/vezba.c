#include <stdio.h>

int main(){
	int dFactor1=1;
	//lets use a for loop to print the statements
	//for (; dFactor<=10; dFactor++){
		//printf("\n %d x %d = %d \n", dFactor, dFactor, dFactor*dFactor);
	//}//endfor
	for (; dFactor1<=10; dFactor1++){
			for(int dFactor2=1; dFactor2<=dFactor1; dFactor2++){
				printf(" %d ",dFactor1*dFactor2);
			}//endinnferforloop
		printf("\n");
	}//end for
	return 0;
}