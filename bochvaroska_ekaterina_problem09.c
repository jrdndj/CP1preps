#include<stdio.h>
int main(){

	//declaring an array 
	int dArray[10];
	

	//asking the user for an input
	printf("\nInput of the array: 10");
	printf("\n Enter some elements to be listed in the array:");

	for(int i=0;i<10;i++)
	{
		scanf("%d",&dArray[i]);

	}//end forloop


	printf("\n Array of even numbers:");  
	for(int i=0;i<10;i++)
	{
		//a condition to check if the elements are odd
		if(dArray[i]%2==0)
		{
			printf("%d",dArray[i]);
		
		}//endif

	}//endfor



	//printing the array of odd numbers 
	printf("\n Array of odd numbers:");

	for(int i=0;i<10;i++)
		{	
			if(dArray[i]%2!=0)
			{
			printf("%d",dArray[i]);
		    }//endif
		}//endfor

	return 0;
}