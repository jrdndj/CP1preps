#include <stdio.h>

void magic(int* p1, int* p2);
int main(){
	int a = 4;
	int b = 7;

	printf("%d %d\n",a,b);

	magic(&a,&b);

	printf("%d %d\n",a,b);

	return 0;
}

void magic(int* p1, int* p2){
		int temp = *p1;		
		*p1 = *p2;
		*p2 = temp;
}