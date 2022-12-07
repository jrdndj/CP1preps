#include <stdio.h>
 int main()
{
	int First;
	int Second;

	printf("\n Enter two numbers ");
	scanf("%d%d", &First, &Second);
	if(First==1 && Second==0){
		printf("\n Bazinga");
	}
	if(First==0 && Second==1){
		printf("\n Booyeah");
	}
	else printf("\n Alakazam");
	return 0;
}