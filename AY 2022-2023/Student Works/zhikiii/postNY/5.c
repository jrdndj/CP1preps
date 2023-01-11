#include <stdio.h>
#include <stdlib.h>

void funct(char *p1, int *p2){
	if(*p1=='s')
		*p2=*p2*(*p2);
	else if(*p1=='+')
		*p2=*p2+1;
	else
		*p1='e';
}

int main(){

	char zb='s';
	int br=3;
	funct(&zb, &br);

	printf("%c, %d\n", zb, br);

	// p=NULL;
	// pp=NULL;
	// free(p);
	// free(pp);
}