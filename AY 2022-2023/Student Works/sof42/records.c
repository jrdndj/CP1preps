#include <stdio.h>
#include<string.h>

// RECORDS

struct Book{
	int  Pages;
	char dBookTitle[50];
	char dAuthor[50];
};// struct end

int main(){
	struct Book Book1;
	Book1.Pages=50;
	strcpy(Book1.dBookTitle, "C programming");
	printf("\nThis is the book with %d pages, with the title: %s.\n", Book1.Pages, Book1.dBookTitle );

return 0;
}// end main