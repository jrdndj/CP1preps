#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p[5];


	for(int i=0; i<5; i++){
		p[i]=&i;
	}

	p=NULL;
	pp=NULL;
	free(p);
	free(pp);
}