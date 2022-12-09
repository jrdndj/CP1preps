#include <stdio.h>
int main(){
	int num;
	
	printf("\n Enter a number ");
	scanf("%d", &num);

	printf("\n %d ", (num/1000));
	printf("\n %d ", (num%1000)/100);
	printf("\n %d ", (num%100)/10);
	printf("\n %d ", (num%10));
	
	return 1;
}