#include <stdio.h>
#include <stdlib.h>
void add1(int *p){
	*p=*p+1;
}
int main(){
	int a = 4;
	add1(&a);
	printf("%d \n", a);
}