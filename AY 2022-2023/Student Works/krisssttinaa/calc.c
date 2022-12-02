#include <stdio.h>

int main(){
//declare data types here
	int dDigit;

	//ask the user for an input
	printf("\n Give number: ");
	scanf("%d", &dDigit);

	//create new vars
	int dDig1, dDig2, dDig3;

	//calculate first digit
	dDig1=(dDigit/100);
	printf(" %d", dDig1);

	//calculate second digit
	dDig2=((dDigit-(dDig1*100))/10);
	printf(" %d", dDig2);

	//calculate third digit
	dDig3=(dDigit-((dDig1*100)+(dDig2*10)));
	printf(" %d ", dDig3);

	return 0;
}//end main