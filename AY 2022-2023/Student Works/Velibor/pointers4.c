#include<stdio.h>

void fun1(char *p1, int *p2){

	if (*p1 == 's'){
		*p2 = (*p2) * (*p2);

	} else if (*p1 == '+'){
		*p2 = *p2 + 1;
	}else{
		*p1 = 'e';
	}
}

int main(){

	int a = 3;
	char c = 's';

	fun1(&c,&a);
	printf("%d %c \n",a,c );

	int n = 3;
	int *p;

	p=magic(n);

	printf("%d\n",*p)
}

int* magic(int n){
	int *p;
	p=&n;

	return p;
}