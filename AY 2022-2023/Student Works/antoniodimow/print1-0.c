#include<stdio.h>

int main(){

	int number = 0;
	printf("\n Enter two digit number:" );
	scanf("%d", &number);

	if(number/10 == 1 && number%10 == 0){
		printf("\n Bazinga");
	}
	if(number/10 == 0 && number%10 == 1){
		printf("\n Booyeah");
	}
	else
		printf("\n Alakazam");
	return 0;
}