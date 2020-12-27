#include <stdio.h>
#include<conio.h>
char YN (char []);

int main (int argc, char *argv[]) {

char ok = 1;
int dSize = 0;

while (ok) {
	
	printf("Enter picture size: ");
	scanf("%d", &dSize);

	for (int r = 0; r < dSize; ++r) {
		
		for (int c = 0; c < dSize; ++c) {
			
			if (r <= c) printf("*");	// c <= r, have fun ;)
			else printf(" ");
		}
		printf("\n");
	}

if (!YN("\nDo you want another try?"))	break;
}


return 0;
}


// #include<conio.h>
char YN (char str[]) {
	
	printf("%s (y/n)", str);
	
	while (1) {
		
		char c = getch();
		if (c == 'y' || c == 'Y') {
			
			printf(" %c\n", c);
			return 1;
		} else if (c == 'n' || c == 'N') {
			
			printf(" %c\n", c);
			return 0;
		} 
	}
}
