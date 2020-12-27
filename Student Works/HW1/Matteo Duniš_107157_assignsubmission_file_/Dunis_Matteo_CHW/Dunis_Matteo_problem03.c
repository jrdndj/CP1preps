
#include <stdio.h>

int main(){
	double dUI = 0, sum = 0;
	int count = 0, i = 0;
	printf("Input some integers (0 to finish):", dUI);
	do {
		scanf_s("%lf", &dUI);
		sum += dUI;
		i++;
	} while (dUI > 0);
	double dAvr = sum / i;
	printf("%lf\n",dAvr);

	
	
	return 0;

}