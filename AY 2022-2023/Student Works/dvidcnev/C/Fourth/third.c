#include <stdio.h>
#include <string.h>

int main() {
	char sWord[25];
	int dChar = 0, dCombinations=0;

	printf("\nEnter a fockin word: ");
	scanf("%s", sWord);

	printf("\nHow many fockin characters do you want to scan?: ");
	scanf("%d", &dChar);

	int n = strlen(sWord);

	for (int i=0; i<=n-dChar;i++) {
		for (int j=i; j<i+dChar; j++) {
			printf("%c", sWord[j]);
		}
		if ( i != n-dChar ) {
		printf(", "); }
	}
	printf("\n");

	return 0;
}