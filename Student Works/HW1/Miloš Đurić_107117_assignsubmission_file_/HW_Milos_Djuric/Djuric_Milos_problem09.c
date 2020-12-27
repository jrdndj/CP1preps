#include <stdio.h>

void calendar (int, int);

int main (int argc, char *argv[]) {

int dDays = 0, dStart = 0;

printf("Which day of week does month start?\n0:Mon 1:Tue 2:Wed 3:Thu 4:Fri 5:Sat 6:Sun\n");
scanf("%d", &dStart);
dStart = dStart % 7;	// 0-6

printf("How many days does the month have?\n");
scanf("%d", &dDays);

calendar(dStart, dDays);


return 0;
}

void calendar (int dStart, int dDays) {

	// ok to sanitize user input
	dStart = dStart % 7;	// 0-6
	dDays = dDays > 31 ? 31 : dDays;
	dDays = dDays < 1 ? 1 : dDays;
	
	
	// European week starts with Monday
	printf("Mo	Tu	We	Th	Fr	Sa	Su\n");
	
	// tab padding
	for (int i = 0; i < dStart; ++i)	printf("\t");
	
	for (int i = 1; i <= dDays; ++i) {
		
		printf("%d", i);
		if ((i+ dStart) % 7 == 0)		printf("\n");
		else							printf("\t");
	}
}