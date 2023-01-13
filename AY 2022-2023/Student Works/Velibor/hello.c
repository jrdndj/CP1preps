#include <stdio.h>

int main(){

	//put local variables here
	//to print int=%d char=%c float=%f 
	int dNum = 0, dNum2 = 0;

	//ask the user for an input
	printf("\n Hey, give me a number 1: ");
	scanf("%d", &dNum);

	printf("\n Hey, give me a number 2: ");
	scanf("%d", &dNum2);

	//if I want to print dNum
	printf("The number is %d %d ", dNum, dNum2);

		if ( dNum > dNum2 ){
			printf("\nThe bigger number is: %d ", dNum);	
		}//endif dNum > dNum2
		else {
			printf("\nThe bigger number is:%d ", dNum2);
		}//endelse 

		//to know if even
		if (dNum%2 == 0){
			printf("\n %d is even. ", dNum);
			//then it is even
		}//endCheckEven
		else printf("\n %d is odd. ", dNum);

		//if(((dNum/2)*2) || (((dNum2/2)*2)) == 0){	
		//	printf("\n %d is even.", dNum);
		//}
		//else printf("\n %d is odd.", dNum2);


	//this is a comment
	printf("\n Hello World! \n");
	return 0;
}//endmain