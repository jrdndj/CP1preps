#include <stdio.h>
#include<conio.h>
/*	Animal insurance
A program that prints insurance fee to pay for pet according to following rules:
	dog that has been neutered costs $50.
	dog that has not been neutered costs $80.
	cat that has been neutered costs $40.
	cat that has not been neutered costs $60.
	bird or reptile costs nothing.
	Any other animal generates an error message.

prompt user for appropriate information, using a animal code:
D or d represents a dog, C or c represents a cat, B or b
represents a bird, R or r represents a reptile, and anything else represents some other kind of
animal .

You may add other features that will make your code more elegant and your program more
interactive.
*/
char YN (char []);

enum Fee {
DogN = 50,	// dog neutered
Dog = 80,	// dog
CatN = 40,	// cat nutered
Cat = 60,
Bird = 0,
Reptile = 0,
Other = 0
};

int main (int argc, char *argv[]) {

char ok = 1;
char cUserChoice;
int dMoney = 0;

while (ok) {
	
	printf("\nPlease select animal:\n(d-dog, c-cat, b-bird, r-reptile)\n");
	cUserChoice = getch();

	switch (cUserChoice) {
		
	case 'd':
	case 'D':
		if (YN("Is your dog nutered?")) {
			dMoney = DogN;
		} else {
			dMoney = Dog;
		}
		
	break;
	
	case 'c':
	case 'C':

		if (YN("Is your cat nutered?")) {
			dMoney = CatN;
		} else {
			dMoney = Cat;
		}
	break;
	
	// keep bird and reptile separate, boss will change his mind soon
	case 'b': case 'B':
		dMoney = Bird;
	break;
	
	case 'r': case 'R':
		dMoney = Reptile;
	break;
	
	default:
		printf("Sorry, we can not insure that animal.\nTry again\n");
		continue;
	}

	printf("Insurance fee is :%d$\n", dMoney);
	
	if (!YN("Do you want to check insurance fee for another pet?"))	break;
	
}// end while


printf("\nThank you for using our app :)\n");
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
