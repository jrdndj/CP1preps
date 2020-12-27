#include<stdio.h>
int main() {
	int num[100];
	int n=-1,count=0,sum=0;
	float aver;
	while (n != 0) {
		printf("\nEnter a positive integer:\n");
		scanf("%d", &n);
		//to see if the integer is positive or not
        if (n > 0) {
			num[count] = n;
			count++;
		}
		//if it is negative
		else {
			printf("ERROR");
		}
	}
	for (int i = 0; i < count; i++) {
		sum = sum + num[i];
	}
	if (count == 0) {
		printf("\nNO AVERAGE!");
	}
	else {
		aver = sum / (count+1);
		printf("\nThe average is:%0.1f", aver);
	}
	return 0;
}