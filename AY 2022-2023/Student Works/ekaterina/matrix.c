#include<stdio.h>

int main(){
	
//lets have some variables 
int dFactor1=1;
for(; dFactor1<=10;dFactor1++){
	for(int dFactor2=1;dFactor2<=10;dFactor2++)
	{
		printf("%d",dFactor1*dFactor2);
	}//endinnerforloop
	printf("\n");
}//


	return 0;
}//endmain