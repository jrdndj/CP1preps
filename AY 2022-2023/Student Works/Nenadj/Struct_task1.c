#include <stdio.h>
#include <string.h>

struct Book
{
	int pages;
	char title[50];
	char Author[50];
};

int main() {
	struct Book Book1;
	Book1.pages=50;
	strcpy(Book1.title,"Inferno");
	strcpy(Book1.Author,"Dan Brown");
	printf("The book is %s with %d pages\n", Book1.title, Book1.pages);
	return 0;
}