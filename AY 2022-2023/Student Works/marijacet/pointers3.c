#include <stdio.h>
void pointerFunc(char* p1, int* p2);


int main(){

	char c = 's';
	int i = 3;
	pointerFunc(&c,&i);
	printf("%c\n",c );
	printf("%d\n",i );


	return 0;
}

void pointerFunc(char* p1, int* p2){
	if(*p1=='s'){
		*p2=(*p2)*(*p2);
	}
	else if(*p1=='+'){
		*p2=*p2+1;
	}
	else{
		*p1='e';
	}
}