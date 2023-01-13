#include<stdio.h>
int main(){

	char an, n;

	printf("\n[d - dog , c - cat , b - bird , r - reptile]\n*letters can be uppercase\nWhat kind of animal? ");

	scanf("%c", &an);

	printf("\nHas it been neutered? [y/n] ");

	scanf("%c", &n);

	if(an == 'c' || an == 'C'){

		if(n == 'y'){
			printf("\nNeutered cat: $40.\n\n");
		} else if(n == 'n') {
			printf("\nNot neutered cat: $60.\n\n");
		} else {
			printf("\nError\n\n");
		}

	} else if(an == 'd' || an == 'D'){

		if(n == 'y'){
			printf("\nNeutered dog: $50.\n\n");
		} else if(n == 'n') {
			printf("\nNot neutered dog: $80.\n\n");
		} else {
			printf("\nError\n\n");
		}

	} else if(an == 'b' || an == 'B' || an == 'r' || an == 'R'){

		printf("\nIt's free.\n\n");

	} else {

		printf("\nError\n\n");

	}
	
	return 0;

}//end main
