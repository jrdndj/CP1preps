#include <stdio.h>

int main() {
	int num1,num2,sum=0,i;
	scanf("%d %d",&num1,&num2);
	for(i=0;i<num2;i++){
		sum+=num1;
	}
	printf("%d\n", sum);
}