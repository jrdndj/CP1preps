#include<stdio.h>

int main() {
	int n, i = 0, cou = 0;
	int B[10];
	int res[30];



	printf("\nEnter a number, we gonna make a table out of it!\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		B[cou] = i;
		cou++;
	}
	//to print x
	printf("\nx ");
	//to print numbers from 1 to number we enter
	for (int i = 0; i < cou; i++) {
		printf("%d  ", B[i]);
	}
	//to print numbers from 1 to 10
	for (int i = 1; i <= 10; i++) {
		printf("\n%d ", i);
    //to print their multiplication
		for (int j = 1; j <= n; j++) {
			printf("%d  ", i * j);
		
		}
		printf("\n");

	}

	return 0;
}