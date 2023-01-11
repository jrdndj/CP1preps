#include<stdio.h>
#include<stdlib.h>

void func(char *p1, int *p2){
	if(*p1=='s'){
		*p2=(*p2)*(*p2);
	}else if(*p1=='+'){
		*p2=(*p2)+1;
	}else{
		*p1='e';
	}

}

int main(){
	char a='s';
	int b=3;
	func(&a,&b);
	printf("%d %c \n", b, a);
	return 0; 
		
}//end main
