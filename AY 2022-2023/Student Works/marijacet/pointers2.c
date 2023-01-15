#include <stdio.h>
#include <stdlib.h>
int main(){

	int a = 4, *p, *p1; //declare variables
	p = &a; //p holds adress of a
	p1 = p; //p1 pointing to p pointing to a

	printf("%d\n",a); //print a
	printf("%d\n",*p1); //print what p1 is pointing to

	//unlink pointer
	p = NULL; 
	p1 = NULL;

	//free pointers
	free(p);
	free(p1);

	//a is still there
	printf("%d\n",a );
	return 0;
}