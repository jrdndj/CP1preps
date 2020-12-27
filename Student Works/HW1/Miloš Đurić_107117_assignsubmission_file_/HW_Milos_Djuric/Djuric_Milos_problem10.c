#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include <time.h>


/*	Simulate an elevator-controller program.
	Elevator should be able to travel between five floors 
	Ground, 1st, 2nd, 3rd and 4th floor.
	elevator can either travel going up or going down.
	elevator can only contain one passenger (current user of program).
	Initially, elevator begins and loads at ground floor.
	If user wants to travel to 4th floor, elevator shall go to said floor.
It is option of user if they want to leave elevator or not.
	You may apply necessary visuals when needed. Realistic rules should apply: If user leaves
	at 3rd floor, when it rides elevator again, it should begin travelling from 3rd floor.


	Your program should have validation controls.
	Only valid characters should be received by program (G, 1, 2, 3, 4).
	If user enters ‘-1’, program should be able to handle such input.
	It should not crash. Do not use GOTO statements.

*/

char YN (char []);
void going (int);


int main (int argc, char *argv[]) {

// 0 stop, -1 down, +1 up
char c, cf = 0;
char szStr[] = "Ground";	// 7 byte


printf("Welcome to elevator.\n ESC to exit program\n");


while(1) {
	
	printf("What floor do you want to go? ");
	c = getch();
	if (c == 27 || c == 0)	break;	// esc
//	continue;
//	printf("%c", c);
	
	
	// make all numbers
	if (c == 'g' || c == 'G') c = 0;
	if (c == '1') c = 1; 
	if (c == '2') c = 2; 
	if (c == '3') c = 3; 
	if (c == '4') c = 4;
	
	if (c < 0 || c > 4) {
		printf("\n");
		continue;		// silent error handling
	}
	
	printf("%hhd\n", c);
	
	if (c == cf) {
		printf("You are already at that floor.\n");
		continue;
	}

	
	if (c == 0)	strcpy(szStr, "Ground");
	else		sprintf(szStr, "%hhu", c);
	
	printf("Going to %s\n", szStr);
	going(cf-c);
	printf("\nLevel: %s\n", szStr);
	cf = c;
	
	if(YN("Do you want to get out?")) {
		
		printf("\tYou are out. Enjoy on %s floor.\n", szStr);
		
		while (!YN("\tDo you want to change floor?")) {
			
			printf("\tEnjoy your stay on %s floor some more...\n", szStr);
		}
		
	} else	continue;
	
	
}// end while


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
		} else if (c == 'n' || c == 'N') {	// || c == 0 || c == 27 maybe???
			
			printf(" %c\n", c);
			return 0;
		} 
	}
}

void going (int n) {

	n = abs(n);
//	printf("abs %d", n);
	for (int i = 0; i < n; ++i) {
		
		printf(".");
		clock_t start_time = clock(); 
		while (clock() < start_time + 1000); 
	}
}