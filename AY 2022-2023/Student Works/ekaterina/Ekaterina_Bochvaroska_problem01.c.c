#include<stdio.h>
int main(){

	//declaring some variables 
	int dn;


	//Please eneter a value for N
	printf("\n Please enter a value for N:");
	scanf("%d",&dn);


	//printing the pattern 
	for(int i=0;i<dn;i++)
	{
		for(int j=0;j<dn;j++)
		{
			if(i<j)
			{
				printf("*");
			}//endif
			else
			{
				printf(" ");
			}//endelse
		
		}//endfor

	printf("\n");
	}//endor
	return 0;

}