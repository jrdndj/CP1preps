#include<stdio.h>



int main(){
	
	int dNum1;

	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	int dDigit1 = dNum1/10;
	int dDigit2 = dNum1%10;

	if (dDigit1 && !dDigit2)
	{
		printf("\n Bazinga! \n");
	}

	else if(!dDigit1 && dDigit2){
		printf("\n Booyeah! \n");
	}

	else printf("\n Alakazam \n");

	return 0;
}//end of main