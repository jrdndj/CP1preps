#include<stdio.h>
int main() {
	int dUI = 0;
	while (dUI != 999) {
		printf("\nEnter your choice: ");
		scanf_s("%d", &dUI);

		if (dUI < 100)
			printf("%d%d%d", dUI,dUI,dUI);

		else if (dUI !=999 || dUI > 100) {
			printf(" ");
		}

		else
			break;
		}
	return 0;
}