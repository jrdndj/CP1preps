/*1.Ask the user to eneter 10 integers( 5 even and 5odd)in an array.
2.Print the contents of the array.
3.All even numbers in the array should be sorted in ascending order (in the first half of the array)
4.Then all the odd numbers should be sorted in descending order in the second half of the array.
*/
#include<stdio.h>

int main(){

	//declaring the variables 
	int dArr[10];
	int temp1,temp2;
	int dEven[5],dOdd[5];

	//asking the user to enter 10 integers 
	printf("\nEnter the elements, please keep entering 5 even and 5 odd numbers :");
	for(int i=0;i<10;i++)
	{
		scanf("%d\n",&dArr[i-1]);
	}
	

	//printing the  array 
	for(int i=0;i<9;i++)
	{
		printf("\n%d\n",dArr[i]);
	}

	for(int i=0;i<9;i++)
	{
		if(dArr[i]%2==0){
			dEven[i]=dArr[i];
		}
		else{
			dOdd[i]=dArr[i];

		}
	}

	
for(int i=0;i<5;i++)
{
	for(int j=i+1;j<5;j++)
	{
	if(dEven[i]>dEven[j])
	{
	temp1=dEven[i];
	dEven[i]=dEven[j];
	dEven[j]=temp1;
	}
}

}   
    for (int i = 0; i < 5; i++) {     
        printf("%d \n", dEven[i]);    
    }  


for(int i=0;i<5;i++)
{
	for(int j=i+1;j<5;j++)
	{
	if(dOdd[i]<dOdd[j])
	{
	temp2=dOdd[i];
	dOdd[i]=dOdd[j];
	dOdd[j]=temp2;
	}
}

}
for (int i = 5; i < 10; i++) {     
        printf("%d \n", dOdd[i]);    
    }  




	return 0;
}//endmain
