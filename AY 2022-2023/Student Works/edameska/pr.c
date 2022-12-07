//accepts int from the user and determines whether it is odd or even without %
#include<stdio.h>


int main(){
	//declare variables
	int dNum1=0;
	
	//ask user for input
	printf("\n Please give me a number: " );
	scanf("%d", &dNum1);
	
	//check if it's odd or even
	if(dNum1 == (dNum1/2)*2){
		//print sth to tell user it's even
			printf("\n %d is even ", dNum1);
	}
	else printf("\n %d is odd ", dNum1);


	return 1;
}//endmain