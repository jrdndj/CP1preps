#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declaring variable
   int integer;

   //Ask user to type integer
   printf("Please, enter 1 or 2 digit integer:");
   integer=getchar();

    //Make loop for printing variables
    while (integer != EOF) {

        if(integer==999) {
            break;
        }
        putchar(integer);
        putchar(integer);
        putchar(integer);
        integer = getchar();
    }

return 0;
}
