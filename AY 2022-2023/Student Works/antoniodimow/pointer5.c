#include<stdio.h>

void fun(char *p1,int *p2){

	if(*p1 == 's'){

		*p2 = (*p2) * (*p2);

	}else if(*p1 == '+'){
		
		*p2=(*p2)+1;

	}else{

		*p1 = 'e';
	
	}

}

int main(){

	int a=3;
	char c = '+';
	fun(&c,&a);

	printf("%d %c\n",a,c);
	return 0;
}