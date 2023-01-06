//HOW DOES A COMPILER KNOW IT IS A MISTAKE TO LIFE? ( syntax error )

// Cryptography and COMPRESSION AND HASHING

// scan UWUS

#include <stdio.h>
#include <string.h>

int main () {
	int dUwucounter = 0;
	char sUwUWord[20];

	printf("\nEnter a fuwwy wowd! UWU: ");
	scanf("%s", sUwUWord);

	int n = strlen(sUwUWord);

	for (int i=0; i<n-3; i++) {
		if ( sUwUWord[i] == 'u' && sUwUWord[i+1] == 'w' && sUwUWord[i+2] == 'u') {
			dUwucounter++;
		}
	}

	printf("\nThis many uwus: %d\n", dUwucounter);
}