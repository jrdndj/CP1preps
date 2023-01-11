#include<stdio.h>

void swap(int *p1,int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d\n",*p1 );
	printf("%d\n",*p2);

}
int main(){

	int a=5;
	int b=6;
	swap(&a,&b);
	return 0;
}