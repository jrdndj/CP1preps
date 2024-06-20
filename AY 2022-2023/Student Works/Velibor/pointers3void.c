#include<stdio.h>

void add1(int p){
	p = p+1;
}


void add2(int *p1){
	*p1 = *p1+1;
}


int main(){

	int a = 4;

	add1(a);
	printf("%d\n", a);

	add2(&a);
		printf("%d\n", a);

}
