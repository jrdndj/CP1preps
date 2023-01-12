#include<stdio.h>

void swap(int *p1,int *p2){
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d\n",*p1 );
	printf("%d\n",*p2);
}

int main(){
	//declare
	int a;
	int b;

	//ask for input
    printf("value for a: ");
    scanf("%d", &a);
    printf("value for b: ");
    scanf("%d", &b);

	swap(&a,&b);
    
	return 0;
}
