#include<stdio.h>
#include <stdlib.h>
int main(){
	//initilizzing the variables
	int a=12;
	int b=6;
	//initilizing poitners 
	int *p1;
	p1=&a;
	int *p2;
	p2=&b;

	printf("%d",(*p1)+(*p2));
	printf("%d",(*p1)-(*p2));
	printf("%d",(*p1)*(*p2));
	printf("%d",(*p1)/(*p2));


//deliting pointer 1
	p1=NULL;
	free(p1);

//deleting pointer 2
	p2=NULL;
	free(p2);
	
	return 0;
	
}