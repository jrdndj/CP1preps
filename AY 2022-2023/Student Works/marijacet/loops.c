#include <stdio.h>

int main(){
	printf("This is your multiplication table\n");

//use the i counter as dFactor
	//print the table in a loop
for (int i = 1; i <= 10; ++i){
		printf("%d x %d = %d\n",i,i,i*i );
	}//end loop
	return 0;
}