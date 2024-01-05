/*
Let int a=4 and p is a pointer pointing to a. 
Make a pointer pointing to p. Use it to print the value of a. 
Afterwards delete the pointers from memory, but leave the variable a .

filename: pointpoint.c
*/
#include<stdio.h>

int main(){
	int a = 4, *p=&a; 
	int **z = &p;  //pointer z is pointing to the address pointed by p
	int *y = p; 

	printf("Printed **z %d ", **z); // will z print 4? 
	printf("Printed *y %d ", *y);
	printf("Printed p %d", p);
	
	return 0; 
}//end main