#include <stdio.h>

int main(){
	int dnm1, ddig1, ddig2;
	printf("\n Enter number: ");
	scanf("%d", &dnm1);
	//split the number into two digit
	//divide by 10 to get the first digit eg. 69/10 returns 6
	ddig1=dnm1/10;
	
	//modulo 10 to get the last digit eg 69%10 returns 9
	ddig2=dnm1%10;

	//check the digits by treating them as a boolean		
	if (ddig1 && !ddig2){
		printf("\n Bazinga! \n");
	}//endif
	else if (!ddig1 && ddig2){
		printf("\n Booyeah! \n");
	}
	else printf ("\n Alakazam! \n");
	return 0;
}