#include<stdio.h>

int main(){
	for (int i = 1; i <=10; i++)
	{
		for (int j = 1; j <=10; j++)
		{
			printf("%d \t", i*j);
		}//end of inner for loop
		printf("\n");
	}//end of outer for loop
}//end of main