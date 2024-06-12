#include <stdio.h>
#include <stdlib.h>
int* function(int a){
	int *p;
	p=&a;
	return p;
}
int main(){
	int a = 3;
	int *p;
	p = function(a);
	printf ("%d \n",*p);

	return 0;
}