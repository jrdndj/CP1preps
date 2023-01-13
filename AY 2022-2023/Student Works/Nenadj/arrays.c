#include <stdio.h>

int main(){
	int dArr[10];
	int counter=0;
	for(int i=0; i<10; i++)
	{
		scanf("%d",&dArr[i]);
		if(dArr[i]%2==0)
			counter++;
	}
	printf("\nNumber of even numbers: %d\n", counter);
}