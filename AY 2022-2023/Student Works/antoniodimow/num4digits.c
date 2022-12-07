/*  
6174 Kaprekas constant 
user enters 6174 as one integer
prints 6
prints 1
prints 7
prints 4

6174/1000=6
6174-6000=174

*/

#include<stdio.h>

int main(){
	int entNum = 6174;
	printf("\n First number: %d",entNum/1000);
	printf("\n Second number: %d", (entNum%1000)/100);
	printf("\n Third number: %d",(entNum%100)/10);
	printf("\n Fourth number: %d \n", entNum%10);
	return 0;
}