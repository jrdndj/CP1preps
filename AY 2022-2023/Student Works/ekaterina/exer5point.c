#include<stdio.h>

void pointer(char *p1, int *p2)
{
	if(*p1=='s')
	{
		printf("%d\n",(*p2)*(*p2));
	}
	else if(*p1=='+')
	{
		printf("%d\n",*p2+1);
	}
	else
	{
		*p1='e';
		printf("%s\n",*p1 );
	}
}
int main(){

	char c='s';
	int i=6;
	pointer(&c,&i);
	printf("%d\n",c );
	printf("%d\n",i );
	


}