#include<stdio.h>

int main()
{
	int num1;
	int num2;

	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	if( num1==1 && num2==0){
		printf("Bazinga");
	}
	else if (num1==0 && num2==1)
	{
		printf("Booyeah");	
	}
	else{
		printf("Alakazam");
	}

	return 0;
}