#include<stdio.h>
int main() {
	int R, C, NUM[20], RC[20][20], CR[20][20], mul[20][20];
	printf("\nEnter two values that are less than 10!\n");
	printf("\nNumber of rows: ");
	scanf("\n%d", &R);
	printf("\nNumber of columns: ");
	scanf("\n%d", &C);

	if (R < 10 && C < 10) {
		printf("\nFirs will do: R*C");
		printf("\nEnter values in the first matrix\nFor example if you enterd for R to be 3 and for C to be 3 then you should enter 9 elements!\n");
		for (int i = 0; i < (R * C); i++) {
			scanf("%d", &NUM[i]);
		}
		printf("\nMatrix 1:\n");
		int m = 0;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				RC[i][j] = NUM[m++];
				printf("%d ", RC[i][j]);
			}
			printf("\n");
		}
		printf("\nNow will do: C*R");
		printf("\nEnter values in the second matrix\nFor example if you enterd for R to be 3 and for C to be 3 then you should enter 9 elements!\n");
		for (int i = 0; i < (C * R); i++) {
			scanf_s("%d", &NUM[i]);
		}
		printf("\nMatrix 2:\n");
		int n = 0;
		for (int i = 0; i < C; i++) {
			for (int j = 0; j < R; j++) {
				CR[i][j] = NUM[n++];
				printf("%d ", CR[i][j]);


			}
			printf("\n");
		}
		printf("\nMultiplication of matrices:\n");
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				mul[i][j] = 0;
				for (int k = 0; k < C; k++)
				{
					mul[i][j] += RC[i][k] * CR[k][j];
				}
			}
		}
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%d\t", mul[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("\nERROR!!!!");
	}
	return 0;
}