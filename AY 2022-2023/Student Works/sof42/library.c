#include<stdio.h>
#include <string.h>

// RECORDS

struct Book{
	int  Pages;
	char dBookTitle[50];
	char dAuthor[50];
};// struct end

struct Library{
	char Name[50];
	int BookNum;
	// an array of book structures
	struct Book Collection[50];
}; // struct end

int main(){
	struct Library Lib;
	strcpy(Lib.Name, "CP1 Library");
	Lib.BookNum = 3;

	Lib.Collection[0].Pages = 100;
	strcpy(Lib.Collection[0].dBookTitle, "C Programming");
	strcpy(Lib.Collection[0].dAuthor, "Brian Kernighan");

	Lib.Collection[1].Pages = 200;
	strcpy(Lib.Collection[1].dBookTitle, "Life: The Struggles");
	strcpy(Lib.Collection[1].dAuthor, "Me");

	Lib.Collection[2].Pages = 100;
	strcpy(Lib.Collection[2].dBookTitle, "Hihi");
	strcpy(Lib.Collection[2].dAuthor, "Author Unknown");

	printf("\nThe books in your library are: \n\n");
	for (int i=0; i < Lib.BookNum; i++){
		printf("%s, Author: %s, pages: %d \n", 
			Lib.Collection[i].dBookTitle,
			Lib.Collection[i].dAuthor, 
			Lib.Collection[i].Pages);
	}
	printf("\n");
return 0;
}// end main