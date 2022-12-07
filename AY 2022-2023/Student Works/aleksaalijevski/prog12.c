#include <stdio.h>

int main(){

	int n = 123;
	int s,d,j;
	j=n%10;
	d=(n/10)%10;
	s=(n/100)%10;
	printf("hundreds=%d, desetine=%d, jedinice=%d\n ",j,d,s);
	
}//end main
