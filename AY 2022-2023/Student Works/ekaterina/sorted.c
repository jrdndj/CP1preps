#include<stdio.h>
int main(){
	//declare my array
	int dArr[10];

	//lets use a for loop to repeditely ask the user for an input
	for(int i=0;i<10;i++){
		printf("Enter number number \n" );  //prints e.x Enter number 1
		scanf("%d",&dArr[i]);
	}
	int temp=dArr[0];
	 for(int i=0;i<10;i++)
	 {
	 	for(int j=1; j<=10;j++)
	 	{
	 		if(temp<dArr[i])
	 		{

	 		temp=dArr[i];
	 		dArr[i]=dArr[j];
	 		dArr[j]=temp;
	 	}
	 }
	}
	 for(int i=0;i<10;i++)
	 {
	 	printf("%d ,",dArr[i]);
	 }
	 return 0;
	}

