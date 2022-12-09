#include <stdio.h>

 int main(int argc, char const *argv[]){
	int dNum1;
	int dDigit1, dDigit2;

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	if (dDigit1==1 && dDigit2==0){
		printf("\n Bazinga");
	}
	if (dDigit1==0 && dDigit2==1){
		printf("\n Booyeah");
	}
	if (dDigit1 == dDigit2 || !dDigit1 == !dDigit2){
		printf("\n Alakazam");
	}
	

	return 0;
}// end main