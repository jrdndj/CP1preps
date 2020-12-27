#include<stdio.h>

int main(){

	//declaring and initializing variables 
	int sInput;
	int count=0;
	int sum=0;

	//user input
	printf("\nPlease type in the integers you want\n");	
	printf("\nType 0 when you want the program to stop\n");
	
	//setting condition so that the user types until 0
	while(scanf("%d", &sInput)){
		if(sInput>0){
			//adding up each value to previous
			//counting how many times is it repeated
			sum+=sInput;
			count++;
		}
		//end if 0
		else if(sInput==0){
			break;
		}
		else{
		printf("Please enter another number\n");
	}
}
	//if the sum is 0 means there are 0 numbers 
	if(sum==0){
	printf("\nNO AVERAGE\n");
	}
	//find average in any ohter case 
	else{
	printf("%d\n",sum);
	int nCount=count+1;
	printf("%d\n",nCount);
	double average=(double)sum/(double)nCount;
	printf("%f",average);
	}

	
return 0;
}