#include <stdio.h>

int main() {

	int dNum=0, dNum2=0; 

	printf("Give me a number: "); 
	scanf("%d", &dNum); 

	printf("Give me another number: ");
	scanf("%d", &dNum2); 

	int sum = dNum;

	for (int i=0; i<dNum2; i++) {
		sum-=dNum2;
	}
	printf("Division is %d\n", sum);



	return 0;
}