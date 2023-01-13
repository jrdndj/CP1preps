#include <stdio.h>
#include <string.h>
int main(){
char sUwu[20]="tfuwuftruuwuuuwufftr";
int dCounter=0;
for (int i=0; i<18; i++){
	if(sUwu[i]=='u' && sUwu[i+1]=='w' && sUwu[i+2]=='u'){
		dCounter++;
	}
}
printf("\n There are %d of uwus in string:",dCounter);







	return 0;
}