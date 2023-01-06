#include <stdio.h>
int main()
{
	//declare empty int array
	int dArr[10],dCtr=0,eCtr=0;
	//ask user for 10 numbers
	while(dCtr<10)
	{
		printf("\n Please enter a number for the slot %d \n", dCtr);
		scanf("%d", &dArr[dCtr]);
		if(dArr[dCtr]%2==0) eCtr++;
		dCtr++;
	}//end While
	printf("Number of even numbers is: %d \n" ,eCtr);
	return 0;
}