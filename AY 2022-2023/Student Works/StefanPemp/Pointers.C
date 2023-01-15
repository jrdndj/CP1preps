//1 intro

#include<stdio.h>
#include <stdlib.h>
int main(){

	int a=12, b=6;
	int *p1;
	int *p2;

	p1=&a; //p1 is pointing to the adress of a
	p2=&b; //p2 is pointing to the adress of b

	printf("%d %d \n", *p1, *p2);
	printf("%d \n", *p1 + *p2);
	printf("%d \n", (*p1) * (*p2));
	printf("%d \n", *p1 - *p2);
	printf("%d \n", *p1 / *p2);
	return 0;
}//end main

//2 more intro

#include<stdio.h>
#include<stdlib.h>
int main(){

	int a=4;
	int *p, *p2;

	p=&a; //p1 is pointing to the adress of a

	p2=p; //p is pointing the adress of the pointer

	printf("%d %d \n", a, *p2);

	p=NULL; //not pointing to anything
	free(p); //removes the space in the blank square


	p2=NULL;
	free(p2);

	printf("%d \n", a);
	return 0;
}//end main

//3 swap

#include<stdio.h>
#include<stdlib.h>

void fun(char *p1,int *p2){
	
	if (*p1 == 's'){
		*p2 = (*p2) * (*p2);
	}
	else if(*p1=='+'){
		*p2=(*p2)+1;
	}
	else{
		*p1=='e';
	}


}	
int main(){

	int a = 3;
	char c = 's';

	fun(&c,&a);

	printf("%d %c \n",a,c);

	return 0;
}//end main
