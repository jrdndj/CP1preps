#include<stdio.h>
int main(){
	//declaring a variable 
	int dN;

	//asking the user to enter a number

	printf("\n Please enter a number:");
	scanf("%d",&dN);

	for( int i=0;i<=dN;i++)
	{
		for(int j=0;j<=dN;j++)
		{
			if(j<i){
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}//endfor
		printf("\n");
	}//endfor
	for(int i=1;i<=dN;i++){
		for(int j=i;j<dN;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}