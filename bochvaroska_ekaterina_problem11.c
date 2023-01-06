#include<stdio.h>
int main()
{
	//declaring variables 
	int dInput;
	int dCtr=0;

	printf("\n Enter to which number I should compute?");
	scanf("%d",&dInput);

	for(int i=1;i<=dInput;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{	
				dCtr++;
				break;
			}//endif

		}//end-for
		if(dCtr==0 && i!=1)  //this is the condition that the number should fit in order to be prime but we exclude 1
		{
			printf("%d,",i);
		}//end-if
		dCtr=0;
	}//end-for
	return 0;
}
