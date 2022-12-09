#include <stdio.h>
void Table();
void Pyramid();
int main(){
	/*for(int i=1; i<=10; i++)
	{
		int product=i*i;
		printf("%dx%d=%d\n",i,i,product);
	}
	//printf("\n The Matrix Table: \n");
	//Table();*/
	printf("\n Pyramid: \n");
	Pyramid();
	return 0;
}
void Table(){
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
		{
			printf(" %d ",i*j);
		}
		printf("\n");
	//}
	}
}
void Pyramid(){
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; i++)
		{
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}