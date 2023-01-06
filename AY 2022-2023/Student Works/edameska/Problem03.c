#include <stdio.h>

int main()
{
	int day,NumDay,WkCount=1;
	printf("Which day of the week does this month start? Enter a value between 0 and 6\n");
	scanf("%d",&day);
	printf("How many days does it have?\n");
	scanf("%d",&NumDay);
	printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
	for (int i = 0; i < day-1; ++i)//where to start
	{
		printf("\t");
		WkCount++;
	}//end for
	for (int i = 1; i <= NumDay; ++i,WkCount++)
	{
		
			printf("%d\t",i);
			if(WkCount==7){
				printf("\n");
				WkCount=0;
				
			}
		
	}//end for
	return 0;
}