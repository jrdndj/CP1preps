#include <stdio.h>

int main() {
	int num1,num2,counter=0;
	scanf("%d %d", &num1,&num2);
	while (num1){
		num1-=num2;
		counter++;
	}
	printf("%d\n", counter);
	return 0;
}