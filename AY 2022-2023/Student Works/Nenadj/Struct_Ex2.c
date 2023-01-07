#include <stdio.h>
#include <string.h>

struct Book
{
	int page;
	char title[50];
	char author[50];
	float rating;
};
struct Library
{
	char name[50];
	int num_books;
	struct Book collection[50];
};
int main() {
	struct Library Lib;
	strcpy(Lib.name,"Library for bitches...");
	Lib.num_books = 3;
	Lib.collection[0].page = 68;
	strcpy(Lib.collection[0].title,"Sarma");
	Lib.collection[1].page = 182;
	strcpy(Lib.collection[1].title,"Blah blah");
	Lib.collection[2].page = 25;
	strcpy(Lib.collection[2].title,"What?");
	for(int i = 0; i<Lib.num_books; i++)
	{
		printf("The book %s, pages %d\n",Lib.collection[i].title, Lib.collection[i].page);
	}
	return 0;
}