#include <stdio.h>
int main(){
	//declare vars
	int dFactor1=1, dFactor2;
	
for(dFactor1=1; dFactor1<=10; dFactor1++){

	//inner for loop for cols
	for(dFactor2=1; dFactor2<=dFactor1; dFactor2++){
		printf(" %d ", dFactor1*dFactor2);
	}
	printf("\n");
}
	return 1;
}