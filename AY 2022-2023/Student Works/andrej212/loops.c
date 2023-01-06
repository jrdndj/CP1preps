#include<stdio.h>

int main(){
	//declare variable
	int dFactor1=1, dFactor2;

	//for(; dFactor1<=10; dFactor1++){
	//print statement
	//printf("\n %d x %d = %d", dFactor1, dFactor1, dFactor1*dFactor1);
	//}//end for

	//controls num of rows
	for (dFactor1; dFactor1<=10; dFactor1++){
	 	
	//inner for controls colums
		for (dFactor2=1; dFactor2<=10; dFactor2++)
		{
		printf("%d",dFactor1*dFactor2);
		}
		printf("\n");
	 } 

	return 0;
}