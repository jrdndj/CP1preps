#include <stdio.h>
#include <string.h>

int main() {
	char sWord[25];
	int dCount=0;
	int dScan;
	printf("\nGive me word: ");
	scanf("%s", sWord);
	int dLen = strlen(sWord);

	printf("\nHow many letters do you want scan: ");
	scanf("%d", &dScan);

	for(int i=0; i<=dLen-dScan; i++) {
		for (int j=i; j<dScan+i; j++) {
			printf("%c", sWord[j]);
		}
		printf(" ");
		dCount++;
	}
	printf("\nNumber of combos is %d\n", dCount);
	return 0;
}