#include<stdio.h>
int main(){

	//declaring some variables 
	int dNum;

	//asking the user to enter a number

	printf("\n Please enter one-or two digit number:");
	scanf("%d",&dNum);

	
	while(dNum != 999)
	{
		for(int i=0;i<3;i++){
			printf("%d",dNum);
		}

	printf("\n Please enter one-or two digit number:");
	scanf("%d",&dNum);
	}//endwhile

	if(dNum == 999)
	{
		printf("\n ERROR");
	}




	return 0;
}