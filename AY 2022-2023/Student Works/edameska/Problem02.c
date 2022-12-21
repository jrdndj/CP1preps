#include <stdio.h>

int main()
{
	int Counter=0,num,sum=0;
	
	while(num!=0){
		printf("Enter a positivfe integer number\n");
		scanf("%d",&num);
		getchar();
		if(num<0) {
			printf("ERROR\n");
		}
		else{
			sum+=num;
			Counter++;
		}
	}//end while
	if(sum==0){
		printf("NO AVERAGE\n");
	}
	else printf("Average is %f \n", (float)sum/Counter);
	return 0;
}