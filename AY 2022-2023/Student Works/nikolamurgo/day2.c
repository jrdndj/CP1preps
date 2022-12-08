#include <stdio.h>

int main(){
	
	int dNum1 =0;
	float fNum2 =6.9, fSum;
	double fNum3 =4.20;

	fSum = dNum1 + fNum2 + fNum3;

	printf("\n The sum of %d %.1f %.2f is %.2f \n", dNum1, fNum2, fNum3, fSum);

	int dNumb1;
	int dNumb2;
	printf("Give me two digits \n");
	scanf("%d %d", &dNumb1 , &dNumb2);

	if (dNumb1 == 1 && dNumb2 == 0){
		printf("Bazinga\n");
	} else if (dNumb1 == 0 && dNumb2 == 1){
		printf("Booyeah\n");
	} else if (dNumb1 == dNumb2){
		printf("Alakazam\n");
	}

// 00 11 10 01

	int dNum4;
	printf("Give me a number\n");
	scanf("%d", &dNum4);

	for (int i = dNum4; i >= 1; --i)
	{
		for (int j = dNum4; j > i; --j){
			printf(" ");
		}
		for (int k = 1; k <=i; ++k){
			printf("*");
		}
		printf("\n");
	}

// 6174 Kaprekars constant MIDTERM 2 haha

	return 0;
}