#include<stdio.h>

int main(){


	//declaring some variables
	int array[10];
	int min;



	//asking the user to type 10 integer 

	printf("\n Please enter 10 integers:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
min=array[0]; //saving the first element into a variable min, assuming that the fisrst element is the smallest
	for(int i=0;i<10;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("\n The smallest number is %d",min);






	return 0;
}
