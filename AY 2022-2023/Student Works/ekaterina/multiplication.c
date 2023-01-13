#include<stdio.h>
// 1x1=1
//2x2=2  3x3   ... 10x10
//startmain
int main(){

//declare a variables
	int dFactor=0;

	//lets use a loop to print the statements 

	for(; dFactor<=10;dFactor++){
printf("\n %d x %d = %d\n", dFactor, dFactor, dFactor*dFactor);
	}//endfor



return 0;
}//endmain