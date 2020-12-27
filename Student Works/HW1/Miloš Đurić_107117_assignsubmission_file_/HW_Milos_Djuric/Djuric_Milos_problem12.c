#include <stdio.h>
/*
user enter a number from 0 to 1000
number should be converted to correct Roman Numeral Format.
Hint: I, V, X, L, C, D, M
*/
void toRoman(int, char []);

int main (int argc, char *argv[]) {

int dInt;
char szStr[80] = {0};	// must init string. garbage mem values otherwise

printf("Enter number 0-1000\n");
scanf("%d", &dInt);
if (dInt < 0 || dInt > 1000) {
	printf("Not valid number");
	return 0;
}


toRoman(dInt, szStr);

printf("%s", szStr);

return 0;
}

void toRoman (int n, char str[]) {
	
	int dI = 0;
	char d1,d2,d3,d4;
	d1 = n % 10;			// i
	d2 = n/10 % 10;			// x
	d3 = n/100 % 10;		// c
	d4 = n/1000 % 10;		// m
//	printf("%d %d %d %d\n", d1, d2, d3, d4);


	//for (int i = 0; i < d4; ++i)	str[dI++] = 'M';
	if (d4 == 1)	str[dI++] = 'M';
	
	
	switch (d3) {
		case 1:
			str[dI++] = 'C';
		break;
		
		case 2:
			str[dI++] = 'C';
			str[dI++] = 'C';
		break;
		
		case 3:
			str[dI++] = 'C';
			str[dI++] = 'C';
			str[dI++] = 'C';
		break;
		
		case 4:
			str[dI++] = 'C';
			str[dI++] = 'D';
		break;
		
		case 5:
			str[dI++] = 'D';
		break;
		
		case 6:
			str[dI++] = 'D';
			str[dI++] = 'C';
		break;
		
		case 7:
			str[dI++] = 'D';
			str[dI++] = 'C';
			str[dI++] = 'C';
		break;
		
		case 8:
			str[dI++] = 'D';
			str[dI++] = 'C';
			str[dI++] = 'C';
			str[dI++] = 'C';
		break;
		case 9:
			str[dI++] = 'C';
			str[dI++] = 'M';
		break;
	}
	

	switch (d2) {
		case 1:
			str[dI++] = 'X';
		break;
		
		case 2:
			str[dI++] = 'X';
			str[dI++] = 'X';
		break;
		
		case 3:
			str[dI++] = 'X';
			str[dI++] = 'X';
			str[dI++] = 'X';
		break;
		
		case 4:
			str[dI++] = 'X';
			str[dI++] = 'L';
		break;
		
		case 5:
			str[dI++] = 'L';
		break;
		
		case 6:
			str[dI++] = 'L';
			str[dI++] = 'X';
		break;
		
		case 7:
			str[dI++] = 'L';
			str[dI++] = 'X';
			str[dI++] = 'X';
		break;
		
		case 8:
			str[dI++] = 'L';
			str[dI++] = 'X';
			str[dI++] = 'X';
			str[dI++] = 'X';
		break;
		case 9:
			str[dI++] = 'X';
			str[dI++] = 'C';
		break;
	}


	switch (d1) {
		case 1:
			str[dI++] = 'I';
		break;
		
		case 2:
			str[dI++] = 'I';
			str[dI++] = 'I';
		break;
		
		case 3:
			str[dI++] = 'I';
			str[dI++] = 'I';
			str[dI++] = 'I';
		break;
		
		case 4:
			str[dI++] = 'I';
			str[dI++] = 'V';
		break;
		
		case 5:
			str[dI++] = 'V';
		break;
		
		case 6:
			str[dI++] = 'V';
			str[dI++] = 'I';
		break;
		
		case 7:
			str[dI++] = 'V';
			str[dI++] = 'I';
			str[dI++] = 'I';
		break;
		
		case 8:
			str[dI++] = 'V';
			str[dI++] = 'I';
			str[dI++] = 'I';
			str[dI++] = 'I';
		break;
		case 9:
			str[dI++] = 'I';
			str[dI++] = 'X';
		break;
	}

}