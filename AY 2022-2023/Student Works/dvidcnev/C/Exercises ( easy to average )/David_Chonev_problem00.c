#include <stdio.h>
#include <string.h>

int main() {

	printf("\nWhat kind of animal do you want? ");

	char ch;

	scanf("%c", &ch);

	switch(ch) {
			case 'd':
			case 'D':
				printf("Dog that has been neutered costs $50\n");
				printf("Dog that has not been neutered costs $80\n"); break;
			case 'c':
			case 'C':
				printf("Cat that has been neutered costs $40\n");
				printf("Cat that has not been neutered costs $60\n"); break;
			case 'B':
			case 'b':
				printf("Bird costs nothing\n"); break;
			case 'R':
			case 'r':
				printf("Reptile costs nothing\n"); break;
			default:
				printf("ERROR"); break;
		}

	return 0;
}