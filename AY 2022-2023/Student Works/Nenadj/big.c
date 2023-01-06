//Lamba in yo mama
#include <stdio.h>
#include <stdlib.h>

int main () {
	int Num1, Num2;
	printf("Enter first number: ");
	scanf ("%d", &Num1);
	printf("Enter second number: ");
	scanf ("%d", &Num2);
	if(Num1==1 && Num2==0)
	{
		printf("Bazinga\n");
	}
	else if(Num1==0 && Num2==1)
	{
		printf("Booyeah\n");
	}
	else if(Num1==Num2)
		printf("Alakazam\n");
	else
		printf("Error. Input only for 1 & 0");
}//end main