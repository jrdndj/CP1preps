/*this program prints 1-5 using for loops*/
#include<stdio.h>

int main(){
	//declare variables
	int nPrintNum = 1; 

	//print numbers to 1 to 5 only using for
	for( ; nPrintNum <= 5; nPrintNum++ ){
		printf("Printing %d \n ", nPrintNum );
	}//endfor
	return 0; 
}//endmain