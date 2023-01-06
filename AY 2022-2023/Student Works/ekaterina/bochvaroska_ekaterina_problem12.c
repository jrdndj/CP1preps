#include<stdio.h>
int main(){
	//declare some variables 
	int dCtr=0;
	int dN;
	int dArray[25];


	//asking the user to enter the number of elements of the ARRAY
	printf("\n Enter a number between 5 and 25 to create an array with that number of elements:");
	scanf("%d",&dN);


	for(int i=0;i<dN;i++)
	{
		scanf("%d",&dArray[i]); 
	}//endfor

	for(int i=0;i<dN;i++)
	{
		for(int j=i+1;j<dN;j++)
		if(dArray[i]==dArray[j]) //checking every pair of elements  and then increasing the counter
		{
			dCtr++;
		}//endif
	}//endfor
	printf("\n The count is: %d",dCtr ); //printing the counter





	return 0;
}
