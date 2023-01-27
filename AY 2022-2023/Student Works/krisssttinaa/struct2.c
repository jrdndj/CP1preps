#include<stdio.h> 
#include<string.h>

struct Book{
    int dPages;
    char sTitle [50]; 
    char sAuthor [50];
    float dRating;
};

struct Library{ 
    char sName [50];
    int dNumberOfBooks;
    struct Book dCollection [50];
};

int main () {
    int dVar;
    struct Library dLib;
    strcpy (dLib.sName, "CP1 Library");

    dLib.dNumberOfBooks = 3;

    dLib.dCollection[0].dPages=100;
    strcpy(dLib.dCollection[0].sTitle, "C Programming");

    dLib.dCollection[1].dPages=200;
    strcpy(dLib.dCollection[1].sTitle, "C structures");
    
    dLib.dCollection[2].dPages=50;
    strcpy (dLib.dCollection[2].sTitle, "C Libraries");
    
    dLib.dCollection[0].dRating=8.6;
    dLib.dCollection[1].dRating=6.5;
    dLib.dCollection[2].dRating=9.0;

    //Print
    for (int dCtr = 0; dCtr < dLib.dNumberOfBooks; dCtr++) {
        printf("%s, pages: %d\n", dLib.dCollection[dCtr].sTitle, dLib.dCollection[dCtr].dPages);
    }
    //Sort
    for (int dCtr = 0; dCtr < dLib.dNumberOfBooks; dCtr++) {
        for (int dCtr1 = 0; dCtr1 < dLib.dNumberOfBooks; dCtr1++) {
            if(dLib.dCollection[dCtr].dRating > dLib.dCollection[dCtr1].dRating) {
                dVar = dLib.dCollection[dCtr].dRating;
                dLib.dCollection[dCtr].dRating = dLib.dCollection[dCtr1].dRating;
                dLib.dCollection[dCtr1].dRating = dVar;
            }
        }
    }
    //Print
    for (int dCtr = 0; dCtr < dLib.dNumberOfBooks; dCtr++) {
        printf("Rating: %f\n", dLib.dCollection[dCtr].dRating);
    }
    
    return 0;
}

/*1. Define a record for a Book which describes a book by:
a. Number of Pages
b. Title
c. Author

2. Using the book record define a record for a library, containing:
a. Library name
b. Number of books in the library
c. An array of book records, containing the description of the books in the library
d. Book rating (float)

3. Define a library containing a few books that you like and print the library contents

4. *Augment the program so that it prints the library contents sorted by rating*/



//int dLength=strlen(Lib. collection);
/*
The line of code "//int dLength=strlen(Lib. collection);" is not correct because 
"Lib.collection" is an array of structs of type "Book", so it does not have a length 
that can be determined by strlen.
In order to use strlen correctly, you would need to specify a string variable within 
the struct, such as "Lib.collection[i].title" and then use strlen on that specific string.
*/