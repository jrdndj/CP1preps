#include<stdio.h>
#include<stdbool.h>

int prime(int n); //prototype of the function
int main(){

	//declaring some variables
	int dCtr=0;
	int dN;


	//asking the user to eneter an integer N
	printf("\n Please enter a number:");
	scanf("%d",&dN);


	printf("The number of prime numbers %d",prime(dN));
}


int prime(int dN){

	int dCtr=0;
	int dPrime=0;
	for(int i=1;i<=dN;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				dCtr++;
				break;
			}
		}
	if(dCtr==0 && i!=1){
		dPrime++;
		}
	dCtr=0;		
	}
	return dPrime;

}
